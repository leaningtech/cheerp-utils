#!/bin/sh
# Replaces linux-headers/include with the user-space headers of a Linux release, for CheerpOS's Linux ABI: x86's,
# with the x86 conditionals resolved to i386.
#
#     linux-headers/update.sh 7.3.5
#
# Needs curl, xz, make and a host C compiler.
set -eu

[ $# -eq 1 ] || { echo "usage: $0 <linux version>" >&2; exit 1; }
version=$1
here=$(cd "$(dirname "$0")" && pwd)
work=$(mktemp -d)
trap 'rm -rf "$work"' EXIT

curl -fsSL "https://cdn.kernel.org/pub/linux/kernel/v${version%%.*}.x/linux-$version.tar.xz" | tar -xJ -C "$work"
src=$work/linux-$version
make -s -C "$src" ARCH=x86 headers_install INSTALL_HDR_PATH="$work/usr"
include=$work/usr/include

# NOTE: clang defines __ILP32__ but not __i386__ for wasm32, which would select the x32 definitions
grep -rlE '__i386__|__x86_64__' "$include" | while read -r f; do
	# NOTE: unifdef exits with 1 when it changed the file
	"$src/scripts/unifdef" -D__i386__ -U__x86_64__ -o "$f" "$f" || [ $? -eq 1 ]
done
# NOTE: x86's byte swapping is inline assembly. wasm32 uses the generic definitions, as the architectures without
# byte swapping instructions do.
echo '#include <asm-generic/swab.h>' > "$include/asm/swab.h"

rm -rf "$here/include"
mv "$include" "$here/include"

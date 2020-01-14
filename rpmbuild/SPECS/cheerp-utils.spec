Name: cheerp-utils
Version: 2.0
Release:        1%{?dist}
Summary: A C++ compiler for the Web, includes and tools

License:  GPLv2
URL: https://leaningtech.com/cheerp
Source0: %{NAME}_%{VERSION}.orig.tar.gz

BuildRequires: cmake make cheerp-llvm-clang = %{VERSION}
Requires: cheerp-llvm-clang = %{VERSION}

%description
Cheerp is a tool to bring C++ programming to the Web. It can generate a seamless
combination of JavaScript, WebAssembly and Asm.js from a single C++ codebase.

%define debug_package %{nil}

%prep
%autosetup
mkdir -p build
cd build
cmake -DCMAKE_INSTALL_PREFIX=/opt/cheerp ..


%build
%make_build -C build

%install
%make_install -C build

%clean
rm -rf $RPM_BUILD_ROOT

%files
/opt/cheerp/

%changelog
* Tue Dec 10 2019 Yuri Iozzelli <yuri@leaningtech.com>
- First RPM version

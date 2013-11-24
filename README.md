Duetto: A C++ compiler for the Web
==================================

Please report bugs on launchpad:
https://bugs.launchpad.net/duetto

Duetto headers installation
--------------------------

```
make -C include install INSTALL_PREFIX=/opt/duetto
```

Duetto cmake helpers installation
---------------------------------

```
make -C tools install INSTALL_PREFIX=/opt/duetto
```

Duetto examples installation
----------------------------

```
make -C tests install INSTALL_PREFIX=/opt/duetto
```

Duetto GLES implementation installlation
----------------------------------------

```
make -C webgles install INSTALL_PREFIX=/opt/duetto DUETTO_PREFIX=/opt/duetto
```

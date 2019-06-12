# ENVIRONNEMENT DE DEVELOPPEMENT

- Windows 10
- eclipse-cpp-2019-03-R-win32-x86_64
- gcc 7.4.0-1
- make 4.2.1-2
- gdb 8.1.1-1
- gradle 3.8
- MSYS2 64bit

# Installation de l'environnement de dev avec MSYS2 :

- Installer MSYS2 64bit pour windows puis ouvrir la console MSYS2 :
- Entrer les commandes suivantes :
- pacman -S mingw-w64-x86_64-gtk2
- pacman -S mingw-w64-x86_64-glade3
- pacman -S base-devel 
- pacman -S mingw-w64-x86_64-toolchain
- Redémarrer l'ordinateur

check :

pkg-config --cflags gtk+-2.0

pkg-config --libs gtk+-2.0

add `pkg-config --cflags gtk+-2.0` in eclipse gcc compiler

add gcc `pkg-config --libs gtk+-2.0` in eclipse gcc linker

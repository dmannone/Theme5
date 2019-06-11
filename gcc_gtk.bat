@echo off
 
set gtk_ver=gtk+-2.0
pkg-config %gtk_ver% --cflags --libs >tmp.txt
set /p pkg-info= <tmp.txt
del tmp.txt
 
rem echo %pkg-info%
gcc -g main.c noeud.c mot.c touche.c util.c arbre.c callbacks.c interface.c -o main.exe -Wall %pkg-info%
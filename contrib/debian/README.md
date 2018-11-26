
Debian
====================
This directory contains files used to package bonyd/bony-qt
for Debian-based Linux systems. If you compile bonyd/bony-qt yourself, there are some useful files here.

## bony: URI support ##


bony-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bony-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bonyqt binary to `/usr/bin`
and the `../../share/pixmaps/bony128.png` to `/usr/share/pixmaps`

bony-qt.protocol (KDE)


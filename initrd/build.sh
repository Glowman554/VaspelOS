gcc make-initrd.c -o make-initrd
./make-initrd vaspel.txt vaspel.txt vaspel-ascii.txt vaspel-ascii.txt vaspelos-0.png vaspelos-0.png vaspelos-1.png vaspelos-1.png
rm make-initrd
mv initrd.img ../cdrom/.

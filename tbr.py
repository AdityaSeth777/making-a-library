gcc -c bubble_sort.c -o lib1.o
gcc -c heap_sort.c -o lib4.o
gcc -c merge_sort.c -o lib5.o
gcc -c quick_sort.c -o lib6.o
gcc -c my_program.c -o adi.o

gcc lib1.o lib4.o lib5.o lib6.o adi.o -o liball


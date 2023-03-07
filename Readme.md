# Personal C Library of Sorting

Welcome to my personal function library in C! This library includes four sorting algorithms - quick sort, merge sort, heap sort, and bubble sort. Each algorithm has been implemented as a function that can be easily integrated into your C programs. Simply include the library and call the appropriate function to sort your array. Check out the instructions on how to use the library and feel free to contribute or provide feedback. Happy coding!
## Some things to keep in mind ->


## How to Install

1. Create a ```C``` virtual environment. 
2. Clone the repo ```git clone https://github.com/AdityaSeth777/making-a-library.git``` or download the repository.
3. Go to the cloned/downloaded directory. 
4. Run ``` pip3 install gcc ```.
5. And now you can run the example scripts or create your own scripts.  

## Usage
### Run the following commands to execute it.
1. Clone the repo ```git clone https://github.com/AdityaSeth777/making-a-library.git``` or download the repository.
2. Go to the cloned/downloaded directory. 
3. Copy or write your code in the file my_program.c, but include the following lines:
```
#include <stdio.h>
#include "func.h"
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Function implementation
}
```
4. Run the commands :
```bash
gcc -c bubble_sort.c -o lib1.o
gcc -c heap_sort.c -o lib2.o
gcc -c merge_sort.c -o lib3.o
gcc -c quick_sort.c -o lib4.o
gcc -c my_program.c -o as_run.o

gcc lib1.o lib2.o lib3.o lib4.o as_run.o -o okay
./okay.exe
```
4. Output is ready.
## FAQ
- How to stop the script? Ctrl+C (control+C for Mac) 
- For any other problems, feel free to raise an issue.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change. 

Please make sure to update tests as appropriate.

## License
[Unlicense © Aditya Seth](https://github.com/AdityaSeth777/making-a-library/blob/main/LICENSE)

## What next?
I will be working on improving the library.

## Where to contact ?
Contact: [adityaseth.cse@gmail.com]

## 🙋‍♂️ Support

💙 If you like this project, give it a ⭐ and share it with friends!<br><br>
[☕ Buy me a coffee](https://www.buymeacoffee.com/adityaseth)

---

Made with ❤️ and C <br><br>
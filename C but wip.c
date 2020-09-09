/******************************************************************************
I am having some errors which I am still figuring out how to fix.

||=== Build: Debug in first (compiler: GNU GCC Compiler) ===|
C:\Users\gebruiker\Documents\CodeBlocks\first\main.c||In function 'fizzbuzz':|
C:\Users\gebruiker\Documents\CodeBlocks\first\main.c|18|warning: implicit declaration of function 'sleep'; did you mean '_sleep'? [-Wimplicit-function-declaration]|
C:\Program Files\CodeBlocks\MinGW\bin\..\lib\gcc\x86_64-w64-mingw32\8.1.0\..\..\..\..\x86_64-w64-mingw32\lib\..\lib\libmingw32.a(lib64_libmingw32_a-crt0_c.o):crt0_c.c:(.text.startup+0x2e)||undefined reference to `WinMain'|
||error: ld returned 1 exit status|
||=== Build failed: 2 error(s), 1 warning(s) (0 minute(s), 0 second(s)) ===|
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int i = 1;

void fizzbuzz() {
    while (i<=15) {
        if (i%3==0 && i%5==0) {
            printf("FizzBuzz");
        } else if (i%3==0) {
            printf("Fizz");
        } else if (i%5==0) {
            printf("Buzz");
        } else {
            printf("%i", i);
    }
    i++;
    sleep(1000);
  }
}


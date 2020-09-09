/******************************************************************************
I am having some errors which I am still figuring out how to fix.

(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status
*******************************************************************************/

#include <stdio.h>

void fizzbuzz() {
    for (int i = 1; i <=100; i++) {
        if (i%3==0 && i%5==0) {
            printf("FizzBuzz");
        } else if (i%3==0) {
            printf("Fizz");
        } else if (i%5==0) {
            printf("Buzz");
        } else {
            printf("%i", i);
        }
    }
}

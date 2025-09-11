#include <stdio.h>

int main(void) {
    printf("hello, world\n");
}

/* 
    personally, i don't get the warning message (function should return a value).
    but we declared main function to return an integer,
    so to make the warning disappear, we'd need to add return 0; at the end
*/

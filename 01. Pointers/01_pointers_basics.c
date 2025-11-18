// A pointer stores the memory address of another variable

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int *p = &a; // p stores address of a
    printf("%d \n", *p);
    return 0;
}
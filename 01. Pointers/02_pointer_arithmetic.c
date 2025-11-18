#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; // By default a pointer is assigned the address of 0th index of an array
    printf("%d \n", *p);
    p++;
    printf("%d\n", *p);
    return 0;
}
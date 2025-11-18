/*
malloc () creates memory blocks on runtime
Address of that memory block is given to pointer 
syntax: int *ptr = (int*) malloc(5 * sizeof(int)) [4 bytes of memory made because int = 4 bytes]
     This means that 5 integer blocks are made

malloc() allocates a memory block but does not initializes it with a value
free(ptr) - deletes the block
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int *p = (int*) malloc(sizeof(int));

    if(p==NULL){
        printf("Memory not allocated!\n");
    }

    *p = 10;
    printf("Memory address: %d\n", *p);

    free(p);
    return 0;
}
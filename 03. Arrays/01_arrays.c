// Arrays is a data structure in c where data of same type is stroed in contiguous memory beginning from index 0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Defining an array type and its name and how many elements in it
    int array_name[5] = {1, 2, 3, 4, 5};

    // Printing elemets of array
    printf("%d\n", array_name[0]); // prints the element at index 0, i.e. 1

    for(int i = 0; i < 5; i++){
        printf("%d, ", array_name[i]);
    }
    return 0;
}
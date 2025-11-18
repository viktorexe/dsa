// 2d arrays mean array inside an array (example - matrix)
// { insde { }} is used to make a 2x2 array in c


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    // Matrix 1
    int arr1[3][3] = {
        {1, 2, 3},
        {3, 4, 5},
        {5, 6, 7}
    };
    
    // Matrix 2
    int arr2[3][3] = {
        {2, 4, 6},
        {3, 5, 7},
        {8, 10, 12}
    };
    return 0;
}
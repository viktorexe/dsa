#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    // Declaration
    int arr[7];
    int n = 7;
    int key;

    // Taking array as input
    printf("Enter 7 elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // What element to find?
    printf("Enter the element to find: \n");
    scanf("%d", &key);

    // Finding that element
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            printf("Element found at index %d", i);
            return 0;
        }
    }
    printf("Not found");
    return 0;
}
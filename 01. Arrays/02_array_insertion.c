#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    // Declaring 
    int arr[5];
    int n = 4;
    int index;
    int value;

    // Array input
    printf("Enter 5 elemenets: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // What index?
    printf("Enter the index to put new value in: \n");
    scanf("%d", &index);

    // What value?
    printf("Enter the new value: \n");
    scanf("%d", &value);

    // Shifting
    for(int i = n; i > index; i--){
        arr[i] = arr[i-1];
    }

    // Insertion
    arr[index] = value;
    n++;

    // Print new array
    printf("New array: \n");
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    return 0;
}
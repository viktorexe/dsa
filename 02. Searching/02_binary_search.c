#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int high = n - 1;
    int low = 0;
    int mid;
    int key;

    printf("Enter the value to find: \n");
    scanf("%d", &key);

    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(key < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    printf("Not found");
    return 0;
}
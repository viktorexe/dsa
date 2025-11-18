#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int arr[5] = {22, 11, 9, 32, 1};
    int n = 5;
    
    for(int i = 0; i < n- 1; i++){ // Because there ar n-1 passes
        int minIndex = i; // Assume i as minIndex
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        // Swap i
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("Sorted array: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
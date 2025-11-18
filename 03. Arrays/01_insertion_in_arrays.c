#include <stdio.h>

int main() {
    int arr[6];     // extra space for insertion
    int n = 5;
    int value, position;

    // Array input
    printf("Enter 5 elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Position
    printf("Enter index to insert (0-5):\n");
    scanf("%d", &position);

    // Value
    printf("Enter value to insert:\n");
    scanf("%d", &value);

    // Shift elements to right
    for(int i = n; i > position; i--){
        arr[i] = arr[i-1];
    }

    // Insert new value
    arr[position] = value;
    n++;

    // Print result
    printf("New array:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

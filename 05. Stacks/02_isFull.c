#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10

int main() {
    int stack[MAX] = {0};
    int top = 9;
    
    if(top == MAX - 1){
        printf("Stack is full\n");
    }
    else{
        printf("Stack is not full\n");
    }
    return 0;
}
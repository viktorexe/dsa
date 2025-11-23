#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define MAX 10
int main() {
    int stack[MAX] = {5, 10, 15};
    int top = 2;

    if(top == - 1){
        printf("Stack overflow\n");
    }
    else{
        int popped = stack[top];
        top--;
        printf("%d popped from stack", popped);
    }
    return 0;
}
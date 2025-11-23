# include <stdio.h>
# include <stdlib.h>

# define MAX 10

int main () {
    int stack[MAX] = {0}; // All values initialized with 0
    int top = 0;

    if(top == -1){
        printf("Empty Stack\n");
    }
    else{
        printf("Stack is not empty\n");
    }
}
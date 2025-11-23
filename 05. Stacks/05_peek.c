#include <stdio.h>
#include <string.h>
# define MAX 10

int main() {
    int stack[MAX] = {2, 4, 6};
    int top = 2;

    if(top == -1){
        printf("Stack overflow\n");
    }
    else{
        printf("Top element is: %d", stack[top]);
    }

    return 0;
}
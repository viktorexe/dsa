// A function is a block of code that performs a specific task
// return_type function_name(parameter_list) {
     // statements
// }
// Functions cannot be inside another function

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int add (int a, int b){
    return a + b;   
}

int main() {
    int sum = add(3, 4);
    printf("%d", sum);
    
    return 0;
}
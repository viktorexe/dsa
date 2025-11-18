// Pass by value is when a copy of the variable is sent in function to be used by it
// Whatever operations are made in the variable are made on that copy only 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change(int x){
    x = 50;
}

int main() {
    int a = 10;
    change(a);
    printf("%d", a);
    return 0;
}

// In this a copy of 'a' variable which is inside function is passed to x 
// Then inside function the variable 'x' is changed

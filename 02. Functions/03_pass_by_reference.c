// In pass by reference, address i sent and original variable is changed

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change(int *p){
    *p = 80;
}

int main() {
    int a = 40;
    change(&a);
    printf("%d", a);
    return 0;
}
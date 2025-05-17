#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;   //declaration of pointer
    char *ptr2;
    double *ptr3;
    
    ptr = &a;   
    printf("%d\n", a);
    printf("%d\n", *ptr);   //same value as 'a'
    printf("%d\n", &a);    
    printf("%d\n", ptr);    //having same address as 'a'
    printf("%d", sizeof(ptr));
    printf("%d", sizeof(ptr2));
    printf("%d", sizeof(ptr3));

    return 0;
}
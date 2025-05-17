#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle *ptr;
    ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle)); 
    ptr->breadth = 12;
    ptr->length = 13;
    printf("%d\n", ptr->breadth);
    printf("%d\n", ptr->length);
    
    return 0;
}
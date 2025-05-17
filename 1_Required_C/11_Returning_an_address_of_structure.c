#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle *fun() {
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 15;
    p->breadth = 7;
    return p;
}

int main() {
    struct Rectangle *ptr = fun();
    ptr->length = 50;
    printf("%d\n%d\n", ptr->breadth, ptr->length);
    return 0;
}
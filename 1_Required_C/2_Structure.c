#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
    char x;
};

int main() {
    struct Rectangle r={2,4};
    printf("Area of rectangle is: %d\n", r.length * r.breadth);
    printf("%d",sizeof(r));
    return 0;
}
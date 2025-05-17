#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r){
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r){
    return 2 * (r.length + r.breadth);
}

int main() {
    struct Rectangle r = {0,0};
    printf("Enter length and breadth: ");
    scanf("%d %d",&r.length, &r.breadth);

    int a = area(r);
    int p = perimeter(r);

    printf("Area = %d and Perimeter = %d",a,p);
    return 0;
}
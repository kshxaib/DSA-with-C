#include <stdio.h>

int main(){
    int length = 0, breadth = 0;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    int area = length * breadth;
    int peri = 2 *(length+breadth);
    printf("Area = %d\nPerimeter = %d\n",area,peri);

    printf("Enter length to change: ");
    scanf("%d", &length);
    printf("Changed length is %d",length);
    return 0;
}
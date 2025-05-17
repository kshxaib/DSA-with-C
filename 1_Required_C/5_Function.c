#include <stdio.h>

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}
int main() {
    int n1=3, n2=2, sum=0;
    sum = add(n1, n2);     //call by value
    printf("Sum is %d\n",sum);
    return 0;
}
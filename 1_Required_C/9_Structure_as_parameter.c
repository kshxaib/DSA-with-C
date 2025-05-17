// Call by value
#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle r){
    r.length = 20;
    printf("%d %d\n", r.length, r.breadth);
}

int main(){
    struct Rectangle r = {10,5};
    fun(r);
    printf("%d %d", r.length, r.breadth);
    return 0;
}
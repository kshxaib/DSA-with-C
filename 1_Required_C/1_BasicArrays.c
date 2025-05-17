#include <stdio.h>
#include <string.h>

int main() {
    int A[5];
    int B[] = {1,2,3,4,5,6,7};
    int C[5] = {1,2,3};
    int D[5] = {0};
    A[0] = 11;
    A[1] = 12;
    A[2] = 13;
    printf("%d\n", sizeof(A));
    printf("%d\n", sizeof(B));
    printf("%d\n", C[4]);
    printf("%d\n", D[4]);
    return 0;
}
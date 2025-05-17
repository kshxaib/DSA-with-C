#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, *q;
    int i;

    // Allocate initial array
    p = (int *)malloc(5 * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        p[i] = i + 1;
    }

    // Allocate larger array
    q = (int *)malloc(10 * sizeof(int));

    // Copy old data
    for (i = 0; i < 5; i++) {
        q[i] = p[i];
    }

    free(p); // free old memory
    p = q;
    q = NULL;

    // Fill new elements
    for (i = 5; i < 10; i++) {
        p[i] = i + 1;
    }

    // Print all 10 elements
    for (i = 0; i < 10; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p); 
    return 0;
}

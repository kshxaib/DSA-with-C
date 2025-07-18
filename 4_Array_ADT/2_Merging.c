#include <stdio.h>
#include <stdlib.h>

struct Array {
    // int A[10];
    int *A;
    int size;
    int length;
};
void Display(struct Array arr){
    printf("\n");
    int i;
    printf("Elements are \n");
    for(i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

struct Array Merge(struct Array arr1, struct Array arr2) {
    int i = 0, j = 0, k = 0;
    struct Array arr3;

    while (i < arr1.length && j < arr2.length) {
        if (arr1.A[i] < arr2.A[j])
            arr3.A[k++] = arr1.A[i++];
        else
            arr3.A[k++] = arr2.A[j++];
    }

    for (; i < arr1.length; i++)
        arr3.A[k++] = arr1.A[i];
    for (; j < arr2.length; j++)
        arr3.A[k++] = arr2.A[j];

    arr3.length = arr1.length + arr2.length;
    arr3.size = 10;

    return arr3;
}

struct Array Union(struct Array arr1, struct Array arr2) {
    int i = 0, j = 0, k = 0;
    struct Array arr3;

    while (i < arr1.length && j < arr2.length) {
        if (arr1.A[i] < arr2.A[j])
            arr3.A[k++] = arr1.A[i++];
        else if(arr2.A[j] < arr1.A[i])
            arr3.A[k++] = arr2.A[j++];
        else {
            arr3.A[k++] = arr1.A[i++];
            j++;
        }
    }

    for (; i < arr1.length; i++)
        arr3.A[k++] = arr1.A[i];
    for (; j < arr2.length; j++)
        arr3.A[k++] = arr2.A[j];

    arr3.length = k;
    arr3.size = 10;

    return arr3;
}

struct Array Intersection(struct Array arr1, struct Array arr2) {
    int i = 0, j = 0, k = 0;
    struct Array arr3;

    while (i < arr1.length && j < arr2.length) {
        if (arr1.A[i] < arr2.A[j])
            i++;
        else if(arr2.A[j] < arr1.A[i])
            j++;
        else {
            arr3.A[k++] = arr1.A[i++];
            j++;
        }
    }
    arr3.length = k;
    arr3.size = 10;

    return arr3;
}

struct Array Difference(struct Array arr1, struct Array arr2) {
    int i = 0, j = 0, k = 0;
    struct Array arr3;

    while (i < arr1.length && j < arr2.length) {
        if (arr1.A[i] < arr2.A[j])
            arr3.A[k++] = arr1.A[i++];
        else if(arr2.A[j] < arr1.A[i])
            j++;
        else {
            i++;
            j++;
        }
    }

    for (; i < arr1.length; i++)
        arr3.A[k++] = arr1.A[i];

    arr3.length = k;
    arr3.size = 10;

    return arr3;
}


int main(){
    // struct Array arr1 = {{2,6,10,15,25}, 10, 5};
    // struct Array arr2 = {{3,6,7,15,20}, 10, 5};

    // struct Array arr3 = Merge(arr1, arr2);
    // struct Array arr3 = Union(arr1, arr2);
    // struct Array arr3 = Intersection(arr1, arr2);
    // struct Array arr3 = Difference(arr1, arr2);
    // Display(arr3);


    struct Array arr1;
    int ch;
    printf("Enter the size of Array: ");
    scanf("%d", &arr1.size);
    arr1.A=(int*)malloc(arr1.size * sizeof(int));

    printf("Menu\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Sum\n");
    printf("5. Display\n");
    printf("6. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    return 0;
}
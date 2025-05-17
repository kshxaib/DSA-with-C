#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[10];
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

void Add(struct Array *arr, int x){
    if(arr->length < arr->size){
        arr->A[arr->length] = x;
        arr->length++;
    }
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if(index >= 0 && index <= arr->length){
        for(i = arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

void Delete(struct Array *arr, int index){
    int x=0;
    int i;
    if(index >= 0 && index < arr->length){
        x = arr->A[index];
        for(i = index; i<arr->length-1; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch1(struct Array *arr, int key){    // for transposition method
    int i;
    for(i=0; i<arr->length; i++){
        if(arr->A[i] == key){
            swap(&arr->A[i], &arr->A[i-1]);
            return i-1;
        }
    }
    return -1;
}

int LinearSearch2(struct Array *arr, int key){    // for move to head method
    int i;
    for(i=0; i<arr->length; i++){
        if(arr->A[i] == key){
            swap(&arr->A[i], &arr->A[0]);
            return 0;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key){      // Using loop
    int low,mid,high;
    low = 0;
    high = arr.length-1;
    
    while(low <= high){
        mid = (low + high)/2;
        if(key == arr.A[mid]){
            return mid;
        } else if(key < arr.A[mid]){
            high = mid -1;
        } else {
            low = mid +1;
        }
    }
    return -1;
}

int RecursiveBinarySearch(int a[], int low, int high, int key){      // Using recursion
    int mid;
    if(low <= high){
        mid = (low + high)/2;
        if(key == a[mid]){
            return mid;
        } else if(key < a[mid]){
            return RecursiveBinarySearch(a, low, mid-1, key);
        } else {
            return RecursiveBinarySearch(a, mid+1, high, key);
        }
    }
    return -1;
}

int Get(struct Array arr, int index){
    if(index >= 0 && index < arr.length){
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x){
    if(index >= 0 && index < arr->length){
        arr->A[index] = x;
    }
}

int Max(struct Array arr){
    int i;
    int max = arr.A[0];
    for(i=1; i<arr.length; i++){
        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr){
    int i;
    int min = arr.A[0];
    for(i=1; i<arr.length; i++){
        if(arr.A[i] < min){
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr){
    int sum = 0;
    int i;
    for(i=0; i<arr.length; i++){
        sum = sum + arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

void Reverse1(struct Array *arr){
    int *B;
    int i,j;
    B = (int *)malloc(arr->length * sizeof(int));
    for(i=arr->length-1, j=0; i>=0; i--,j++){
        B[j] = arr->A[i];
    }
    for(i=0; i<arr->length; i++){
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr){
    int i,j,temp;
    for(i=0,j=arr->length-1; i<j; i++,j--){
        swap(&arr->A[i], &arr->A[j]);
    }
}

void InsertSort(struct Array *arr, int x){
    int i = arr->length -1;
    if(arr->length == arr->size){
        return;
    }

    while(i>= 0 && arr->A[i] > x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

int isSorted(struct Array arr){
    int i;
    for(i=0; i<arr.length-1; i++){
        if(arr.A[i] > arr.A[i+1]){
            return 0;
        }
    } return 1;
}

void ReArrange(struct Array *arr){
    int i = 0;
    int j = arr->length -1;
    while(i<j){
        while(arr->A[i] < 0){
            i++;
        }
        while(arr->A[j] >= 0){
            j--;
        }
        if(i<j){
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}

int main(){
    struct Array arr = {{1,-2,4,-5,6}, 10, 5};
    // Add(&arr, 10);
    // Insert(&arr, 2, 10);
    // Delete(&arr, 4);
    // printf("%d", LinearSearch2(&arr, 5));
    // printf("%d", BinarySearch(arr, 52));
    // printf("%d", RecursiveBinarySearch(arr.A, 0, arr.length-1, 5));
    // printf("%d", Get(arr, 0));
    // Set(&arr, 0, 15);
    // printf("%d", Max(arr));
    // printf("%d", Min(arr));
    // printf("%d", Sum(arr));
    // printf("%f", Avg(arr));
    // Reverse2(&arr);
    // InsertSort(&arr, 3);
    // printf("%d", isSorted(arr));
    ReArrange(&arr);
    Display(arr);

    return 0;
}

#include <stdio.h>
#define MAX 5

int* input() {
    static int arr[MAX];
    int i;
    for(i=0;i<MAX;i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}

void output(const int arr[]) {
    int i;
    for(i=0;i<MAX;i++) {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int arr[]) {
    int i;
    int j;
    for(i=0;i<MAX-1;i++) {
        for(j=MAX-1;j>i;j--) {
            if(arr[j] < arr[j-1]) {
                swap(&arr[j- 1], &arr[j]);
            }
        }
    }
}

int main() {

    int *arr;
    arr = input();
    printf("before bubbleSort\n");
    output(arr);
    bubbleSort(arr);
    printf("after bubbleSort\n");
    output(arr);
    return 0;
}
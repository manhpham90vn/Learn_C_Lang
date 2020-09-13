#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50

int main() {

    srand(time(NULL));

    int arr[MAX];
    int i;

    for (i=0;i<=MAX;i++) {
        arr[i] = 1 + rand() % MAX;
    }

    for (i=0;i<=MAX;i++) {
        printf("arr at %d is %d\n", i, arr[i]);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#define MAX 10

void assignee(int arr[]) {
    int i;
    for (i=0;i<=MAX;i++) {
        arr[i] = i;
    }
}

void print(const int arr[]) {
    int i;
    for (i=0;i<=MAX;i++) {
        printf("%d\n", arr[i]);
    }
}

int makeArray() {
    static int arr[MAX];
    int i;
    for (i=0;i<=MAX;i++) {
        arr[i] = i;
    }
    return arr;
}

int main() {

    int a;
    int arr[MAX];
    int *testArr;
    char *address;


    a = 1;

    printf("%x\n", &a); // print address of variable a

    assignee(arr);

    print(arr);

    printf("arr address 0x%x\n", arr);
    printf("arr address 0x%x\n", &arr);
    printf("arr address 0x%x\n", &arr[0]);

    testArr = makeArray();

    printf("testArr address 0x%x\n", testArr);
    printf("testArr address 0x%x\n", &testArr);
    printf("testArr address 0x%x\n", &testArr[0]);

}
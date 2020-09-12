#include <stdio.h>

unsigned long long factorial1(int n) {
    int i;
    int result = 1;
    for (i = 1; i <=n; i++) {
        result = result * i;
    }
    return result;
}

unsigned long long factorial2(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial2(n - 1);
}

unsigned long long factorial3(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    return factorial3(n - 1) + factorial3(n - 2);
}

int main() {

    int i;
    for (i = 0; i <= 20; i++) {
        printf("%d! = %lld\n", i, factorial2(i));
        printf("fibo(%d) = %lld\n", i, factorial3(i));
    }

    return 0;
}
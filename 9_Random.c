#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("max %d\n", RAND_MAX);

    int i;
    for (i=0; i<20; i++) {
        int random = 1 + rand() % 6;
        printf("random = %5d\n", random);
    }
    return 0;
}
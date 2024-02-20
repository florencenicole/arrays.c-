#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5];
    int i;
    for (i = 0; i < 5 ; i++) {
        a[i] = i + 1;
    }


    printf("Array elements:\n");
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

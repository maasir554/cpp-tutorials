#include <stdio.h>

int main() {
    int N;
    printf("Enter the number: ");scanf("%d",&N);
    // even numbers have 0 at the end of their binary. and odds have one.
    (N & 1) ? printf("odd") : printf("even");
    return 0;
}

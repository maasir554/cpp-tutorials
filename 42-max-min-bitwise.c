#include <stdio.h>

int main(){
    int a, b, difr, i, mx, mi;
    
    printf("Enter first number: ");scanf("%d",&a);
    
    printf("Enter second number: ");scanf("%d",&b);
    
    difr = a - b;
    
    i = difr >> 31; // as the 32th bit represents sign. 1 --> minus and 0 --> plus 
    // when difr >= 0 --> i = 0 and when difr < 0 --> i = 1 
    mx = a + difr*i; 
    
    mi = b - difr*i;
    
    printf("Max of the two is: %d\n",mx);
    
    printf("Min of the two numbers is: %d\n",mi);
    
    return 0;
}

// Mohammad Maasir | 15-09-2023 | 23:56

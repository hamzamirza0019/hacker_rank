#include <stdio.h>

int main() {
    int num1 , num2 , temp;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("a = %d\n", num1);
    printf("b = %d", num2);
    
    
    return 0;
}

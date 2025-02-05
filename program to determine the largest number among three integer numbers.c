#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num1, num2, num3, temp;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    if(num1 > num2){
        temp = num1;
    }
    else{
        temp = num2;
    }
    
    if(temp > num3){
        
        printf("The largest number is : %d", temp);
    }
    else{
        printf("The largest number is : %d", num3);
    }
    return 0;
}

#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float income, tax;
    int flag =1 ;
    scanf("%f", &income);
    if(income < 0){
        flag=0;
    }
    
    else if (income >=0 && income <=250000){
        tax = 0.00;
    }
    
    else if (income >250000 && income <= 500000){
        tax = (income -  250000) * 0.05;
    }
    
    else if (income  >500000 && income <= 1000000){
        tax = 12500 + (income - 500000) * 0.2;
        
    }
    
    else {
        tax = 12500+100000 + (income - 1000000) * 0.3;
    }
    
    
    
    if( flag ==1 ){
        printf("%.2f", tax);
    }
    else {
        printf("INVALID");
    }
    
    return 0;
}

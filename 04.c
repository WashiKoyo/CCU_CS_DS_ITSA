#include <stdio.h>  
  
int main() {  
    int a, b;  
    int sum, product, difference, quotient, remainder;  
  
    while(scanf("%d%d",&a,&b)!=EOF) {  
        sum = a+b;  
        product = a*b;  
        difference = a-b;  
        quotient = a/b;  
        remainder = a%b;  
        if(remainder<0) {  
            printf("%d+%d=%d\n%d*%d=%d\n%d-%d=%d\n%d/%d=%d...%d\n",a,b,sum,a,b,product,a,b,difference,a,b,quotient-1,remainder+b);  
        }  
        else {  
            printf("%d+%d=%d\n%d*%d=%d\n%d-%d=%d\n%d/%d=%d...%d\n",a,b,sum,a,b,product,a,b,difference,a,b,quotient,remainder);  
        }  
    }  
}
#include <stdio.h>  
  
int main() {  
    float down, height;  
    float area;  
  
    while(scanf("%f%f",&down,&height)!=EOF) {  
        area = (down * height) / 2;  
        printf("%.1f\n",area);  
    }  
}
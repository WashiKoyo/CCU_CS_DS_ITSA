#include <stdio.h>  
  
int main() {  
    float up, down, height;  
    float area;  
  
    while(scanf("%f%f%f",&up,&down,&height)!=EOF) {  
        area = ((up + down) * height) / 2;  
        printf("Trapezoid area:%.1f\n",area);  
    }  
}
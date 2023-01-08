#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int a=0,b=0,tmp=0;
    scanf("%d%d",&a,&b);
    int i = a*a+b*b;
    if(i>10000) {
        printf("outside\n");
    }
    else {
        printf("inside\n");
    }

    return 0;
}

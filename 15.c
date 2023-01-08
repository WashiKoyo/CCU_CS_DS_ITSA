#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int a=0,b=0,tmp=0;
    scanf("%d%d",&a,&b);
    if(a>100||b>100) {
        printf("outside\n");
    }
    else {
        printf("inside\n");
    }

    return 0;
}

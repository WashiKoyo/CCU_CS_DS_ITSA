#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int a=0,b=0,max=0;
    scanf("%d%d",&a,&b);
    for (int i=1; i<=a&&i<=b; i++) {
        if (a%i==0 && b%i==0) {
            max = i;
        }
    }
    printf("%d\n",max);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int a=0,b=0,c=0,d=0,tmp;
    scanf("%d",&tmp);
    if(tmp>=86400) {
        a = tmp/86400;
        tmp -= 86400*a;
    }
    if(tmp<86400&&tmp>=3600) {
        b = tmp/3600;
        tmp -= 3600*b;
    }
    if(tmp<3600&&tmp>=60) {
        c = tmp/60;
        tmp -= 60*c;
    }
    d = tmp;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",a,b,c,d);

    return 0;
}

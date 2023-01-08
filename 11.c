#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    long long int cost;
    scanf("%lld",&cost);
    int a=0, b=0, c=0;
    while(cost>0) {
        if(cost>=10) {
            a = cost/10;
            cost -= 10*a;
        }
        else if(cost>=5) {
            b = cost/5;
            cost -= 5*b;
        }
        else {
            c = cost;
            cost -= c;
        }
    }

    printf("NT10=%lld\nNT5=%lld\nNT1=%lld\n",a,b,c);

    return 0;
}

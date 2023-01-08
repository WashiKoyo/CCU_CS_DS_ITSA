#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int min=0;
    scanf("%d",&min);
    double cost=0;
    if(min<=800) {
        cost = min*0.9;
    }
    else if(min>800&&min<1500) {
        cost = min*0.9;
        cost *= 0.9;
    }
    else if(min>=1500) {
        cost = min*0.9;
        cost *= 0.79;
    }

    printf("%.1f\n",cost);

    return 0;
}

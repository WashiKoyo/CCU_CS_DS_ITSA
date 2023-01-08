#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int spend_time=0, time1, time2;
    int hr, hr1, hr2, min, min1, min2;
    scanf("%d%d%d%d",&hr1,&min1,&hr2,&min2);
    if(hr2>hr1) {
        hr = hr2-hr1;
    }
    else {
        hr = hr1-hr2;
    }
    min = min2-min1;
    spend_time = hr*60+min;
    time1 = hr1*60+min1;
    time2 = hr2*60+min2;
    int cost=0;
    if(spend_time<=120) {
        cost = 30*(spend_time/30);
    }
    else if(spend_time>120&&spend_time<=240) {
        cost += 120;
        spend_time -= 120;
        cost += 40*(spend_time/30);
    }
    else if(spend_time>240) {
        cost += 120;
        cost += 160;
        spend_time -= 240;
        cost += 60*(spend_time/30);
    }
    printf("%d\n",cost);

/*
    int fact_hour = spend_time/60;
    int half_hour, cost=0;
    if(fact_hour<2) {
        half_hour = spend_time/30;
        spend_time -= 30*half_hour;
        cost =
    }
    else if(fact_hour>=2&&fact_hour<4) {

    }
    else if(fact_hour>=4) {

    }
*/
    return 0;
}

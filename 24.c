#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int time, spend;
    double money;
    scanf("%d%d",&time,&spend);

    if(time<=60) {
        money = time*spend;
    }
    else if(time>60&&time<=120) {
        money = 60*spend;
        time -= 60;
        money += time*spend*1.33;
    }
    else if(time>120) {
        money = 60*spend*2.33;
        time -= 120;
        money += time*spend*1.66;
    }
    printf("%.1f\n",money);

    return 0;
}

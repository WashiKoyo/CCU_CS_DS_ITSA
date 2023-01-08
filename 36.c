#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int tmp;
    scanf("%d",&tmp);
    if(tmp>=3&&tmp<=5) {
        printf("Spring\n");
    }
    else if(tmp>=6&&tmp<=8) {
        printf("Summer\n");
    }
    else if(tmp>=9&&tmp<=11) {
        printf("Autumn\n");
    }
    else {
        printf("Winter\n");
    }

    return 0;
}

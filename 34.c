#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int tmp, sum=0;
    scanf("%d",&tmp);
    for(int i=1; i<=tmp; i++) {
        if(tmp%i==0) {
            if(i==1) {
                printf("%d",i);
            }
            else {
                printf(" %d",i);
            }
        }
    }
    printf("\n");

    return 0;
}

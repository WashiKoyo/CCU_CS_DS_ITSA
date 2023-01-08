#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int tmp, sum=0;
    scanf("%d",&tmp);
    for(int i=2; i<=tmp; i++) {
        for(int j=1; j<i; j++) {
            if(i%j==0) {
                sum += j;
            }
        }
        if(sum==i) {
            if(i==6) {
                printf("%d",i);
            }
            else {
                printf(" %d",i);
            }
        }
        sum = 0;
    }
    printf("\n");

    return 0;
}

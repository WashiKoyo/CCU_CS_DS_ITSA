#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int N, sum=0;
    scanf("%d",&N);
    for(int i=1; i<=N; i++) {
        printf("%d*%d=%d\n",i,i,i*i);
    }

    return 0;
}

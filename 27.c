#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int N, B, sum=0;
    scanf("%d%d",&N,&B);
    for(int i=N; i<=B; i++) {
        sum += i;
    }
    printf("%d\n",sum);

    return 0;
}

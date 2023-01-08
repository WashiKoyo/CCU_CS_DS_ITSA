#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int tmp;
    long ans=1;

    scanf("%d",&tmp);
    ans = tmp;
    if(tmp==0) {
        ans = 1;
    }

    while(tmp>1) {
        ans *= tmp-1;
        tmp--;
    }

    printf("%lld\n",ans);

    return 0;
}

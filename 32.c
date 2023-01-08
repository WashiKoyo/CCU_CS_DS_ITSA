#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int N, tmp;
    scanf("%d",&N);
    tmp = N;
    int a, b, c;
    a = N/100;
    N -= 100*a;
    b = N/10;
    N -= 10*b;
    c = N;
    a = a*a*a;
    b = b*b*b;
    c = c*c*c;
    if(a+b+c==tmp) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}

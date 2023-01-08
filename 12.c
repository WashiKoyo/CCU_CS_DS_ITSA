#include <stdio.h>
#include <math.h>

int main() {
    double a;

    while(scanf("%lf",&a)!=EOF) {
        int count;
        while(a>0) {
            a-=0.238;
            count++;
        }
        printf("%d\n",count);
        count=0;
    }
}

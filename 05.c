#include <stdio.h>
#include <math.h>

int main() {
    double a, b, ans;

    while(scanf("%lf",&a)!=EOF) {
        b = a*a;
        ans = (int)((b*10)+0.5) / 10.0;
        printf("%.1f\n",ans);
    }
}

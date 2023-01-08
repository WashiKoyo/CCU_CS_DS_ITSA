#include <stdio.h>
#include <math.h>

int main() {
    long long int a, b=1;

    while(scanf("%lld",&a)!=EOF) {
        if(a<31) {
            for(int i=0; i<a; i++) {
                b *= 2;
            }
            printf("%lld\n",b);
        }
        else {
            printf("Value of more than 31\n");
        }
        b = 1;
    }

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int isPrime(unsigned long long int a) {
    for(int i=2; i<a; i++) {
        if(a%i==0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    unsigned long long int tmp;
    scanf("%llu",&tmp);
    if(isPrime(tmp)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}

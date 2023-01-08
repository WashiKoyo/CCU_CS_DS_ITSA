#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int isPrime(int a) {
    for(int i=2; i<a; i++) {
        if(a%i==0) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int tmp, prime;
    scanf("%d",&tmp);
    for(int i=1; i<tmp; i++) {
        if(isPrime(i)) {
            prime = i;
        }
    }
    printf("%d\n",prime);

    return 0;
}

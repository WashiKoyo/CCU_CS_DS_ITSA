#include <stdio.h>
#include <math.h>

int main() {
    float C, F;

    while(scanf("%f",&C)!=EOF) {
        F = ((C*9)/5)+32;
        printf("%.1f\n", F);
    }
}

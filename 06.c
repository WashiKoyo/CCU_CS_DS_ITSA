#include <stdio.h>

int main() {
    int inch;
    float kilo;

    while(scanf("%d",&inch)!=EOF) {
        kilo = inch*1.6;
        printf("%.1f\n",kilo);
    }

}
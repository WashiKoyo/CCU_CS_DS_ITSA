#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main () {
    int tmp, flag=0;
    char ans[10];
    scanf("%d",&tmp);
    sprintf(ans,"%x",tmp);
    for(int i=0; i<strlen(ans); i++) {
        if(ans[i]>='a'&&ans[i]<='z') {
            ans[i] -= 32;
        }
    }
    printf("%s\n",ans);

    return 0;
}

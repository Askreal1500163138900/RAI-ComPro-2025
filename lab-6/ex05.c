#include <stdio.h>

int main(){
    struct time
    {
        int min;
        int sec;
    }t[3];
    for (int i = 0 ; i < 3 ; i++){
        printf("Time input (m:s): ");
        scanf("%d:%d",&t[i].min,&t[i].sec);
    }
    int total = 0;
    for (int i = 0 ; i < 3 ; i++){
        total += t[i].min*60;
        total += t[i].sec;
    }
    printf("Total time elasped: %d second(s)" , total);

    return 0;
}
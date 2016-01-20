
#include <stdio.h>

int main()
{
    long long w;

    while(scanf("%I64D", &w)==1 && w>0){

        if(w==2)
            printf("NO\n");
        else{
            if(w%2==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}

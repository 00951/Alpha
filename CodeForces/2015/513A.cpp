#include <stdio.h>

int main()
{
    int n1,n2,k1,k2;

    while(scanf("%d%d%d%d", &n1,&n2,&k1,&k2)==4){
        if(n1>n2)
            printf("First\n");
        else if(n1<n2)
            printf("Second\n");
        else
            printf("Second\n");
    }

    return 0;
}


/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long T,x,y,tx,ty;
    
    while(scanf("%lld",&T)==1 && T!=0){
            
        scanf("%lld %lld", &x, &y);
    
        while(T--){
                
            scanf("%lld %lld", &tx, &ty);
        
            if(tx==x || ty==y)
                printf("divisa\n");

            else if(tx>x && ty>y)
                printf("NE\n");
            else if(tx<x && ty>y)
                printf("NO\n");

            else if(tx<x && ty<y)
                printf("SO\n");
            else if(tx>x && ty<y)
                printf("SE\n");
        }
    }
    return 0;
}



// Anohter approach of minimized condition at if else...

        if(tx==x || ty==y)
                printf("divisa\n");

        else if(tx>x)
        {
                if(ty>y)
                    printf("NE\n");
                else
                    printf("SE\n");
        }
        else{
                if(ty>y)
                    printf("NO\n");
                else
                    printf("SO\n");
        }


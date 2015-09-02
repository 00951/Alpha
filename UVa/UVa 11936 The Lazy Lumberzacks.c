/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int a,b,c,max,sides,T;
    scanf("%d", &T);

    while(T--){
        scanf("%d %d %d", &a, &b, &c);
        
        if(a>=b&&a>=c){
            max=a;
            sides=b+c;
        }
        else if(b>=c && b>=a){
            max=b;
            sides=a+c;
        }
        else{
            max=c;
            sides=a+b;
        }

        if(sides>max)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}

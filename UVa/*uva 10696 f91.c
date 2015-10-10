
/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int n;

/*
int f91(int n){
    if(n<=100)
        return f91(f91(n+11));
    else
        return n-10;
}
*/

int f91(int n){
    return (n <= 100) ? f91(f91(n + 11)) : n-10;
}

int main()
{
    while(scanf("%d", &n)==1){
        if(n==0)
            break;
        printf("f91(%d) = %d\n", n, f91(n));
    }
    return 0;
}




// :/ --- OR --- 


#include <stdio.h>

int main()
{
    int a;
    while(scanf("%d",&a)==1){
        if(a==0)
            break;
        if(a>=101)
            printf("f91(%d) = %d\n",a ,a-10);
        else
            printf("f91(%d) = 91\n",a ,91);
    }
    return 0;
}

/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/



#include <stdio.h>
#include <math.h>
long long flag;

long long primechk(long long n)
{
    long long i; flag=0;

    long long q=sqrt(n);

    for(i=2; i<=q; i++){
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return flag;
    else
        return flag;

}


long long rev(long long n){

    long long reverse=0, f;

    while(n!=0){
        f=n%10;
        reverse=10*reverse+f;
        n/=10;
    }
    return reverse;
}

int main()
{
    long long x;

    while(scanf("%lld", &x)==1){

        if(primechk(x)==1)
            printf("%lld is not prime.\n", x);

        else{

            if(primechk(rev(x))==0 && rev(x)!=x){
                printf("%lld is emirp.\n", x);
            }
            else
                printf("%lld is prime.\n", x);
        }


    }
    return 0;
}

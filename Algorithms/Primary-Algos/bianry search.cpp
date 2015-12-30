LL bsearch(LL f,LL l,LL a[],LL x)
{
    LL ps;
    
    if(x<a[0] || x>a[l]) return -1;
    
    while(f<=l)
    {
        LL md=(f+l)/2;
        if(x==a[md])
            return md;
        else if(x>a[md])
            f=md+1;
        else
            l=md-1;
    }
    return 0;
}


---------------------------------------------------------------


#include<stdio.h>
#define LL long long

LL bsearch(LL f,LL l,LL a[],LL x)
{
    LL ps=-1;

    if(x<a[0] || x>a[l]) return -1;

    while(f<=l)
    {
        LL md=(f+l)/2;
        if(x==a[md])
            return md;
        else if(x>a[md])
            f=md+1;
        else
            l=md-1;
    }
    return 0;
}

int main()
{
    LL n;
    
    LL a[5]={0,1,2,3,4};
    
    scanf("%lld", &n);

    printf("%lld's index is %lld\n", n, bsearch(0,4,a,n));

    main();
    return 0;
}

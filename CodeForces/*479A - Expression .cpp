/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


Problem: http://codeforces.com/problemset/problem/479/A


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;


int Find(int a,int b,int c)
{
    int ans=0;

    ans = max( ans, a*(b+c) );     // max func use in stead of if else -_-
    ans = max( ans, (a+b)*c );

    ans = max( ans, a+(b*c) );

    ans = max( ans, a*b*c  );
    ans = max( ans, a+b+c  );

    return ans;
}

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    cout<<Find(a,b,c)<<endl;

    return 0;
}




//or........





#include <stdio.h>

int main()
{
    long long a,b,c,max,m,n,o,p,q,r;

    while(scanf("%I64d%I64d%I64d", &a, &b, &c)==3)
    {
        max=0;

        n=a*(b+c);
        if(n>=max)
            max=n;
        p=(a+b)*c ;
        if(p>=max)
            max=p;


        q=a*b+c;
        if(q>=max)
            max=q;
        m=a+b*c;
        if(m>=max)
            max=m;

        r=a+b+c;
        if(r>=max)
            max=r;
        o=a*b*c;
        if(o>=max)
            max=o;

        printf("%I64d\n", max);
    }
    return 0;
}

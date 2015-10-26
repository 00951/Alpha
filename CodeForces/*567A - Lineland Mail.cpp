/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


Problem: http://codeforces.com/problemset/problem/567/A


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(int i=a;i<=b;i++)
#define MX 100007

ll a[MX];

int main()
{
    ll n ;
    scanf("%I64d",&n);

    rep(i,1,n){
        scanf("%I64d",a+i);
    }


    rep(i,1,n){

        if(i==1)
            printf("%I64d %I64d\n",a[2]-a[1] , a[n] - a[1] );
        else if(i==n)
            printf("%I64d %I64d\n",a[n]-a[n-1] , a[n] - a[1] );
        else
            printf("%I64d %I64d\n", min(a[i]-a[i-1],a[i+1]-a[i]) , max(a[i]-a[1] , a[n] - a[i]) );
    }


    return 0;
}




//OR...............



#include <stdio.h>

int main()
{
    long long n,i,min,max,arr[100000];

    while(scanf("%I64d", &n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%I64d", &arr[i]);
        }
        for(i=1; i<=n; i++)
        {
            if(i==1)
            {
                min=arr[i+1]-arr[i];
                max=arr[n]-arr[i];
                printf("%I64d %I64d\n", min, max);
            }
            else if(i==n)
            {
                min=arr[i]-arr[i-1];
                max=arr[n]-arr[1];
                printf("%I64d %I64d\n", min, max);
            }
            else
            {
                if((arr[i+1]-arr[i])<=(arr[i]-arr[i-1]))
                {

                    min=arr[i+1]-arr[i];

                    if((arr[n]-arr[i])>=(arr[i]-arr[1]))
                        max=arr[n]-arr[i];
                    else
                        max=arr[i]-arr[1];

                    printf("%I64d %I64d\n", min, max);

                }
                else if((arr[i+1]-arr[i])>(arr[i]-arr[i-1]))
                {
                    min=arr[i]-arr[i-1];
                    if((arr[n]-arr[i])>=(arr[i]-arr[1]))
                        max=arr[n]-arr[i];
                    else
                        max=arr[i]-arr[1];

                    printf("%I64d %I64d\n", min, max);
                }
            }
        }
    }

    return 0;
}

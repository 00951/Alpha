
/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;

#include <algorithm>
#define ll long long

ll gcd(ll a, ll b){

    if(a>b)
        swap(a,b);

    if(b%a==0)
        return a;
    else
        return gcd(b%a, a);

}


int main()
{
    ll N,G,i,j;

    while(scanf("%lld", &N)==1 && N!=0){
        G=0;

        for(i=1;i<N;i++){
            for(j=i+1;j<=N;j++){
                G+=gcd(i,j);
            }
        }

    printf("%lld\n", G);
    }
    return 0;
}


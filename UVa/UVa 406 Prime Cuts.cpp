/*
* GM Arif
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 1234
ll arr[MAX], prime[MAX];

void sieve(){

    ll i,j,k;
    prime[1]=1;

    for(i=2,k=2; i<=MAX; i++){

        if(arr[i]==0){
                prime[k++]=i;

            for(j=2*i; j<=MAX; j+=i){
                arr[j]=1;
            }

        }
    }
}

int main()
{
    sieve();

    ll n,c,x,i;

    while(scanf("%lld%lld", &n, &c)==2){

        ll x=0;

        for(ll i=1; prime[i]<=n; i++)
                    x++;

        printf("%lld %lld:", n, c);

        ll b;

        if(c%2)
            b=2*c-1;
        else
            b=2*c;

        if(b>x){
            for(i=1; i<=x; i++){
                printf(" %lld", prime[i]);
            }
        }
        else if(x%2==0){
            for(i=x/2-c+1; i<=x/2+c; i++){
                printf(" %lld", prime[i]);
            }
        }else
        {
            for(i=x/2-c+2; i<=x/2+c; i++){
                printf(" %lld", prime[i]);
            }
        }
        cout << endl << endl;
    }

    return 0;
}

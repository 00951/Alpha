#include <bits/stdc++.h>
using namespace std;

typedef long long            ll;
typedef long long unsigned   llu;
typedef double               dl;

//~ Define
#define pi acos(-1.0)
#define zero(a) memset(a, 0, sizeof a)
#define minus(a) memset(-1, 0, sizeof a)
#define gcd(a,b) __gcd(a,b)

//~ Input
#define sci(a) scanf("%d", &a);
#define sci(a,b) scanf("d", &a, &b);
#define sci(a,b,c) scanf("d%d", &a, &b, &c);
#define scl(a) scanf("%lld", &a);
#define scll(a,b) scanf("lld", &a, &b);
#define sclll(a,b,c) scanf("lld%lld", &a, &b, &c);
#define scd(a) scanf("%lf", &a);

//~ Loop
#define rep(i,a,b) for(ll i=a; i<=b; i++)

int main()
{
    ll T,cs=0;
    cin>>T;

    string str;

    while(T--){

        ll n;
        cin >> n;

        ll b=0, w=0, t=0, a=0;

        cin >> str;
        ll l=str.size();

      rep(i,0,l-1){
            if(str[i]=='B')
                b++;
            else if(str[i]=='W')
                w++;
            else if(str[i]=='T')
                t++;
            else if(str[i]=='A')
                a++;
        }

        if(a==n)
            printf("Case %lld: ABANDONED\n", ++cs);
        else if(b==n-a)
            printf("Case %lld: BANGLAWASH\n", ++cs);
        else if(w==n-a)
            printf("Case %lld: WHITEWASH\n", ++cs);
        else if(w==b)
            printf("Case %lld: DRAW %lld %lld\n", ++cs, w, t);
        else if(b>w)
            printf("Case %lld: BANGLADESH %lld - %lld\n", ++cs, b, w);
        else if(b<w)
            printf("Case %lld: WWW %lld - %lld\n", ++cs, w, b);

    }

    return 0;
}


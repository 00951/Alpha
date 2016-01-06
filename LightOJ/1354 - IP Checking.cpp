/******************************************************************
***                                                             ***
***   Author     : GM Arif Shuvo                                ***
***   University : CSE, Jahangirnagar University(44)            ***
***   Handle     : aarif_shuvo (codeforces/topcoder/codechef)   ***
***                                                             ***
******************************************************************/

#include <bits/stdc++.h>
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define sc3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define scl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define sc4(w,x,y,z) scanf("%d %d %d %d",&w,&x,&y,&z)
#define scl4(w,x,y,z) scanf("%lld %lld %lld %lld",&w,&x,&y,&z)
#define sc5(x,y,z,p,q) scanf("%d %d %d %d %d",&x,&y,&z,&p,&q)
#define scl5(x,y,z,p,q) scanf("%lld %lld %lld %lld %lld",&x,&y,&z,&p,&q)
#define LL  long long
#define LLU unsigned long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define dec(i,a,b) for(int i=a;i>=b;i--)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld: ", ++cs);
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello World!\n")
#define ndl printf("\n")
using namespace std;

#define MX 1234

LL b2d(LL n){
    LL i=0,dec=0;
    while(n!=0){
        dec += n%10 * pow(2,i++);
        n/=10;
    }
    return dec;
}

int main()
{
    //READ("F:/in.txt");
    LL i,j,k,l,m,n,T,cs=0;
    char s[MX], s2[MX],nw1[MX],nw2[MX];
    LL d1,d2,d3,d4;
    LL b1,b2,b3,b4;

    scl(T); getchar();

    while(T--){
        scl(d1);getchar();scl(d2);getchar();scl(d3);getchar();scl(d4);
        scl(b1);getchar();scl(b2);getchar();scl(b3);getchar();scl(b4);

        csprnt;

        if(d1==b2d(b1) && d2==b2d(b2) && d3==b2d(b3) && d4==b2d(b4)){
            puts("Yes");
        }else
            puts("No");
    }
    return 0;
}

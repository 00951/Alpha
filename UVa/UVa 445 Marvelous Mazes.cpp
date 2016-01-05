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
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld:", ++cs);
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("**Hello World!**")
#define ndl printf("\n")
using namespace std;

#define MX 1234

int main()
{
    //READ("F:/in.txt")
    LL i,j,k,l,m,n,T,sum = 0;
    char row[MX];

    while(gets(row))
    {
        for(i=0; row[i]; i++)
        {
            if(row[i]=='!') ndl;

            else if(isdigit(row[i]))
            {
                sum+=(row[i]-48);
            }
            else
            {
                for(j=1; j<=sum; j++)
                {
                   if(row[i]=='b') putchar(' ');
                   else putchar(row[i]);
                }
                sum=0;
            }
        }
        ndl;
    }
    return 0;
}

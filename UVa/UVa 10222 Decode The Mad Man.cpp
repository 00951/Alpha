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
#define hi printf("***Hello World!\n***")
#define ndl printf("\n")
using namespace std;


#define MX 12345

int main()
{
    int i,j,k,f=0,l;

    char str[]="`1234567890-=qwertyuiop[]asdfghjkl;'\zxcvbnm,./";
    char n[MX];

    while(gets(n))
    {
        for(i=0; n[i]; i++)
        {
            if(n[i]==32 || n[i]=='`' || n[i]=='1' || n[i]=='q' || n[i]=='Q' || n[i]=='w' || n[i]=='W' || n[i]=='a'
               || n[i]=='A' || n[i]=='s' || n[i]=='S' || n[i]=='z' || n[i]=='Z' || n[i]=='x' || n[i]=='X')
                {
                    putchar(n[i]);
                    continue;
                }
            for(j=0; str[j]; j++)
            {
                if(n[i]==str[j] || n[i]==toupper(str[j]))
                {
                    putchar(str[j-2]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}


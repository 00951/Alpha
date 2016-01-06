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
#define hi printf("***Hello World!***")
#define ndl printf("\n")
using namespace std;


#define MX 1234567

int main()
{
   //READ("F:/in.txt");
    //WRITE("F:/out.txt")
    LL i,j,k,l,m,tmp,n,T,num;
    char str[MX];

    while(gets(str))
    {
        LL len = strlen(str);

        if(isdigit(str[0]))
        {
            reverse(str,str+len);

            for(i=0; i<len; i+=2)
            {
                if(str[i]!='1')
                {
                    num=10*(str[i]-48) + (str[i+1]-48);
                    putchar(num);
                }
                else
                {
                    num = 100*(str[i]-48) + 10*(str[i+1]-48) + (str[i+2]-48);
                    i++;
                    putchar(num);
                }
            }
            ndl;
        }
        else
        {
            for(i=len-1; i>=0; i--)
            {
                tmp=str[i];
                while(tmp>0)
                {
                    printf("%lld", tmp%10);
                    tmp/=10;
                }
            }
            ndl;
        }
    }
    return 0;
}

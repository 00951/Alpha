/* xor555 */

#include <bits/stdc++.h>
#define scl(x) scanf("%lld",&x)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define scl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define scl4(w,x,y,z) scanf("%lld %lld %lld %lld",&w,&x,&y,&z)
#define scl5(x,y,z,p,q) scanf("%lld %lld %lld %lld %lld",&x,&y,&z,&p,&q)
#define LL  long long
#define LLU unsigned long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define CLR(a)     memset(a,0,sizeof(a))
#define SET(a)     memset(a,-1,sizeof(a))
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld: ", ++cs);
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hiii printf("Hello World!\n")
#define ndl printf("\n")
using namespace std;

#define MX 12345

int main()
{
    LL n,x,ind,f;
    string s,an;

    while(cin>>s)
    {

        f=0,ind=0,an="";

        string tst="hello";

        if(s==tst) puts("YES");
        else
        {
            rep(i,0,tst.size()-1)
            {
                rep(j,0,s.size()-1)
                {
                    if(tst[i]==s[j])
                    {
                        if(j>=ind)
                        {
                            an+=s[j];
                            s[j]='%';
                            ind=j;
                            break;
                        }
                    }
                }
            }
           // cout << an << " " << tst << endl;
            if(an==tst) puts("YES");
            else puts("NO");
        }
    }

    return 0;
}

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
    LL n,x,k,l,res,ind,f;
    string s;

    while(cin>>n>>s)
    {
        k=s.size();
        x=0,res=1,f=0;

        if(n%k)
        {
             for(int i=0;;i++){
                if((n-(i*k))<(n%k)) break;
                res*=(n-i*k);
            }
        }
        else
        {
             for(int i=0;;i++){
                if((n-(i*k))<k) break;
                res*=(n-i*k);
            }
        }

        cout << res << endl;
    }

    return 0;
}

/* xor555 */

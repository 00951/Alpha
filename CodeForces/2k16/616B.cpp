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
#define hi printf("Hello World!\n")
#define ndl printf("\n")
using namespace std;

#define MX 123

int main()
{
    //READ("F:/in.txt");
    //WRITE("F:/out.txt");

    LL i,j,k,l,m,f,n,sm,T,mod,tmp,mn,cs=0;
    LL a[MX][MX],x[MX],ns,ma;

    while(cin>>ns>>ma)
    {

        for(i=1,k=1; i<=ns; i++)
        {
            mn=1234567890;
            for(j=1; j<=ma; j++)
            {
                scl(a[i][j]);
                mn=min(mn,a[i][j]);
            }
            x[k++]=mn;
        }
        LL mx=-1;
        rep(i,1,k-1)
        {
            mx=max(mx,x[i]);
        }

        prnt1(mx);

    }

    return 0;
}









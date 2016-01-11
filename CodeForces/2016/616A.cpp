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

#define MX 1000007

int main()
{
    //READ("F:/in.txt");
    //WRITE("F:/out.txt");

    LL i,j,k,l,m,f,n,x,sm,T,mod,tmp,cs=0;
    char a[MX],b[MX],nwa[MX],nwb[MX];

    scanf("%s", a);
    scanf("%s", b);

    f=0;
    for(j=0,i=0; a[i]; i++)
    {
        if(a[i]!='0')
        {
            f=1;
        }
        if(f) nwa[j++]=a[i];
    }
    nwa[j]='\0';

    f=0;
    for(j=0,i=0; b[i]; i++)
    {
        if(b[i]!='0')
        {
            f=1;
        }
        if(f) nwb[j++]=b[i];
    }
    nwb[j]='\0';


    LL la=strlen(nwa), lb=strlen(nwb);

    if(la>lb) puts(">");
    else if(la<lb) puts("<");
    else
    {
        for(i=0,j=0; i<la; i++,j++)
        {
            if(nwa[i]-48 > nwb[i]-48)
            {
                f=2;
                puts(">");
                return 0;
            }
            else if(nwa[i]-48 < nwb[i]-48){
                f=2;
                puts("<");
                return 0;
            }
        }

        if(f!=2) puts("=");
    }


    return 0;
}









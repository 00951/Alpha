/* xor555 */

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
#define hi printf("***Hello World!***\n")
#define ndl printf("\n")
using namespace std;


#define MX 12345

int main()
{
   // READ("F:/in.txt");
    LL i,j,k,l,m,n,T,f,ans;
    LL ks,drgn,ds[MX],bns[MX];
    while(cin>>ks>>drgn){
            f=0;
        for(i=1; i<=drgn; i++){
            cin>>ds[i]>>bns[i];
        }

        for(i=1;i<drgn;i++){
            for(j=i+1;j<=drgn;j++){
                if(ds[i]>ds[j]){
                    swap(ds[i],ds[j]);
                    swap(bns[i],bns[j]);
                }
            }
        }

       // for(i=1; i<=drgn; i++) prnt2(ds[i], bns[i]);

        LL uu=ks;
        for(i=1; i<=drgn; i++){
            if(uu>ds[i]){
                if(!f)
                    f=0;
                uu+=bns[i];
            }else{
                f=1;
            }
        }

        if(f) puts("NO");
        else puts("YES");
    }
    return 0;
}







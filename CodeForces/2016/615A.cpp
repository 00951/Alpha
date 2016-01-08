#include <bits/stdc++.h>
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

#define MX 12345

int main()
{
    //READ("F:/in.txt");
    //WRITE("F:/out.txt");
    LL i,j,k,l,m,n,x,y,f,sm,T,mod,tmp,cs=0;
    LL blb,btn,a[MX];

    while(cin>>btn>>blb){

        CLR(a);
        f=0;

        for(i=1; i<=btn; i++){
            cin>>x;
            while(x--){
                cin>>y;
                a[y]++;
            }
        }

        rep(i,1,blb){
            if(a[i]==0){
                f=1;
                break;
            }else
                f=0;
        }

        if(f) puts("NO");
        else puts("YES");

    }

    return 0;
}

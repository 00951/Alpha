#include <bits/stdc++.h>
using namespace std;

#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define csprnt       cout<<"Case "<<++cs<<": ";
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello Worldo!")

#define mod     1000000007
#define MX      12345


int main()
{
    //READ("F:/in.txt");

    LL n,T,i,j,k,l,tmp,c,f,cs=0;
    while(cin>>n){
        for(c=1,i=n+1; ; i++){
            LL tmp=abs(i),f=-1;
            while(tmp>0){
                f=tmp%10;
                if(f==8) break;
                tmp/=10;
            }
            if(f==8) break;
            c++;
        }
        prnt1(c);
    }
    return 0;
}




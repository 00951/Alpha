/******************************************************************
***                                                             ***
***   Author     : GM Arif Shuvo                                ***
***   University : CSE, Jahangirnagar University                ***
***   Handle     : aarif_shuvo (codeforces/topcoder/codechef)   ***
***                                                             ***
******************************************************************/

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

#define MX 12345

int main()
{
    //READ("F:/in.txt");
    //WRITE("F:/out.txt");
    LL i,j,res,k,l,m,n,x,sm,T,mod,tmp,cs=0;

    while(scl(n)==1){
       if(n%2){
          res=(n/2+1)*(n/2+1) + (n/2)*(n/2);
       }else{
          res=n*n/2;
       }

       printf("%lld\n", res);

       rep(i,1,n){

          if(i%2){
             rep(j,1,n){
                if(j%2) putchar('C');
                else putchar('.');
             }
          }else{
             rep(j,1,n){
                if(j%2) putchar('.');
                else putchar('C');
             }
          }
          puts("");
       }
    }
    return 0;
}

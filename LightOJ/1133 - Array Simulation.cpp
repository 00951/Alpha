#include <bits/stdc++.h>
#define scl(x) scanf("%I64d",&x)
#define scl2(x,y) scanf("%I64d %I64d",&x,&y)
#define scl3(x,y,z) scanf("%I64d %I64d %I64d",&x,&y,&z)
#define scl4(w,x,y,z) scanf("%I64d %I64d %I64d %I64d",&w,&x,&y,&z)
#define scl5(x,y,z,p,q) scanf("%I64d %I64d %I64d %I64d %I64d",&x,&y,&z,&p,&q)
#define LL  long long
#define LLU unsigned long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define CLR(a)     memset(a,0,sizeof(a))
#define SET(a)     memset(a,-1,sizeof(a))
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld:\n", ++cs);
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello World!\n")
#define ndl printf("\n")
using namespace std;

#define MX 1234

int main()
{
    //READ("F:/in.txt");
    //WRITE("F:/out.txt");
    LL i,j,k,l,m=0,n,y,x,f,sm,T,mod,tmp,cs=0;
    LL s,c,a[MX],t[MX];
    char ch;

   // scl(T);
   cin>>T;

    while(T--){
        //scl2(n,c);
        cin>>n>>c;
        for(i=0; i<n; i++){
            //scl(a[i]);
            cin>>a[i];
        }
        while(c--){

            scanf(" %c",&ch);
           // cin>>ch;
            switch(ch){
                case 'S':
                   cin>>x;
                    for(i=0; i<n; i++){
                        a[i] += x;
                    }
                    break;


               case 'M':
                   cin>>x;
                    for(i=0; i<n; i++){
                        a[i] *= x;
                    }
                    break;


                case 'D':
                   cin>>x;
                    for(i=0; i<n; i++){
                        a[i] /= x;
                    }
                    break;

                case 'R':
                    reverse(a,a+n);
                    break;


                case 'P':
                    cin>>x>>y;
                    swap(a[x],a[y]);
                    break;
            }
        }

      //  printf("Case %lld:\n", ++cs);
        csprnt;

        for(i=0; i<n; i++){
             if(i>0) printf(" %lld", a[i]);
            else printf("%lld", a[i]);
        }
        printf("\n");
    }
    return 0;
}





---------------------- switch is faster than if else 





#include <bits/stdc++.h>
/*#define scl(x) scanf("%I64d",&x)
#define scl2(x,y) scanf("%I64d %I64d",&x,&y)
#define scl3(x,y,z) scanf("%I64d %I64d %I64d",&x,&y,&z)
#define scl4(w,x,y,z) scanf("%I64d %I64d %I64d %I64d",&w,&x,&y,&z)
#define scl5(x,y,z,p,q) scanf("%I64d %I64d %I64d %I64d %I64d",&x,&y,&z,&p,&q)*/
#define LL  long long
/*#define LLU unsigned long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define CLR(a)     memset(a,0,sizeof(a))
#define SET(a)     memset(a,-1,sizeof(a))
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %I64d:\n", ++cs);
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello World!\n")
#define ndl printf("\n")*/
using namespace std;

#define MX 1234

int main()
{
    //READ("F:/in.txt");
    //WRITE("F:/out.txt");
    LL i,j,k,l,m=0,n,y,x,f,sm,T,mod,tmp,cs=0;
    LL s,c,a[MX],t[MX];
    char ch;

   // scl(T);
   cin>>T;

    while(T--){
        //scl2(n,c);
        cin>>n>>c;
        for(i=0; i<n; i++){
            //scl(a[i]);
            cin>>a[i];
        }
        while(c--){
            //scanf(" %c",&ch);
            cin>>ch;
            if(ch=='S'){
               cin>>x;
                for(i=0; i<n; i++){
                    a[i] += x;
                }
            }else if(ch=='M'){
               cin>>x;
                for(i=0; i<n; i++){
                    a[i] *= x;
                }
            }else if(ch=='D'){
               cin>>x;
                for(i=0; i<n; i++){
                    a[i] /= x;
                }
            }else if(ch=='R'){
                reverse(a,a+n);
            }else if(ch=='P'){
                cin>>x>>y;
                swap(a[x],a[y]);
            }
        }
       // csprnt;
       printf("Case %lld:\n", ++cs);

        for(i=0; i<n; i++){
             if(i>0)
            printf(" %lld", a[i]);
         else
            printf("%lld", a[i]);
        }
        puts("");
    }
    return 0;
}





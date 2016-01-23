#include <bits/stdc++.h>
using namespace std;

#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define csprnt       cout<<"Case "<<++cs<<": ";
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl

/*--BUG-ER-HAT--*/
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello World!\n")
#define ndl printf("\n")

template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}


/*--CONSTANTS--*/
#define MX 1234


//^^start plz :')

LL a[MX];

int main()
{
    memset(a,0,sizeof a);

    LL x,f=0;
    rep(i,1,6){
        cin>>x;
        a[x]++;
    }

    rep(i,1,9){
        if(a[i]==6){
            puts("Elephant");
            return 0;
        }
        else if(a[i]==4){
            rep(j,1,9){
                if(a[j]==2){
                    puts("Elephant");
                    return 0;
                }
            }
        }
    }
    rep(i,1,9){
       if(a[i]==5){
            rep(j,1,9){
                if(a[j]==1 && a[j]<a[i]){
                    puts("Bear");
                    return 0;
                }
            }
        }
        else if(a[i]==4){
            rep(j,1,9){
                if(a[j]==1){
                    puts("Bear");
                    return 0;
                }
            }
        }
    }

    puts("Alien");

    return 0;
}




/*
* GM Ariful Islam
* CSE, Jahangirnagar University(44)
*/

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
#define MX 12345

LL i,j,k,a[MX],nw[MX];

void sieve(){
    for(i=2, k=0; i<=MX; i++){
        if(a[i]==0){
            for(j=2*i; j<=MX; j+=i){
                a[j]=1;
            }
        }
        if(a[i]==0) nw[k++]=i;
    }
}

//^^start plz :')

int main() {

   // READ("F:/in.txt");

    sieve();
    LL i,j,sum,cs=0,n,cnt,iter;

	while(scanf("%lld", &n)!=EOF && n) {
            iter = 0 , cnt = 0;
            for( ; ; ){
                    sum = 0;
                for(i = iter ; ; i++){
                    sum += nw[i];
                    if(sum == n) cnt++;
                    else if(sum > n) break;
                }
                iter++;
                if(nw[iter]>n) break;
            }
            prnt1(cnt);
	}
    return 0;
}

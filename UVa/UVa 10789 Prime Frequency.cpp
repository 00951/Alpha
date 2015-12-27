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


//^^start plz :')

LL a[MX];

void sieve(){
    a[0]=1;a[1]=1;
    LL i,j,sq=sqrt(MX);
    for(i=2;i<=sq;i++){
        if(a[i]==0){
            for(j=2*i;j<=MX;j+=i){
                a[j]=1;
            }
        }
    }
}

int main() {

    sieve();
    LL i, j, cs=0, t, ans[MX];
	char s[MX];

    //cin>>t;
    scanf("%lld", &t);
    getchar();

	while(t--) {

        //cin>>s;
        scanf("%s", s);
		memset(ans,0,sizeof ans);

		for(i=0; s[i]; i++)
			ans[s[i]]++;


    csprnt; LL j=0;

		for(i=48; i<=122; i++){
            if(a[ans[i]] == 0)
				printf("%c", i), j=1;
		}

		if(!j)	printf("empty");
		ndl;
	}
    return 0;
}

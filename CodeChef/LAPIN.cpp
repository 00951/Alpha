#include <bits/stdc++.h>
using namespace std;
#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define prntcs       cout<<"Case "<<++cs<<": ";
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello Worldo!\n")
#define MX 12345

//start plz :3

int main()
{
     //READ("C:/Users/USER/Desktop/input.txt");
    //WRITE("C:/Users/USER/Desktop/output.txt");
    LL T,a[MX];
    char s[MX];
    cin>>T;
    getchar();
    while(T--){
        memset(a,0,sizeof a);
        cin>>s;
        LL l=strlen(s),f=0;
        if(l%2==0){
            rep(i,0,l/2-1) a[s[i]]++;
            rep(i,l/2,l-1) a[s[i]]++;

            rep(i,97,122)
                if(a[i]%2!=0) {f=1;break;}
        }else{
            rep(i,0,l/2-1) a[s[i]]++;
            rep(i,l/2+1,l-1) a[s[i]]++;

            rep(i,97,122)
                if(a[i]%2!=0) {f=1;break;}
        }

        if(f) puts("NO");
        else puts("YES");
    }
    return 0;
}


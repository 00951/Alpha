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

    LL i,j,T,dt,mn,yr,age[MX];
    string s[MX];
    cin>>T;
    getchar();
    rep(i,0,T-1){
        cin>>s[i];
        cin>>dt>>mn>>yr;
        age[i]=yr*365+mn*30+dt;
    }
    for(i=0;i<T-1;i++){
        for(j=i+1;j<T;j++){
            if(age[i]>age[j]){
                swap(age[i],age[j]);
                swap(s[i],s[j]);
            }
        }
    }
    prnt1(s[T-1]);
    prnt1(s[0]);

    return 0;
}

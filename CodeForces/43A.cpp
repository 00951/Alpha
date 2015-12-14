#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define prntcs       printf("Case %I64d: ", ++cs);
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<endl;}
#define MX 1234

int main()
{
    LL n;
    string str[MX],s,s1;
    cin>>n;
    getchar();
    LL f=0;
    rep(i,1,n){
        getline(cin,str[i]);
        if(i==1) s=str[i];
        if(s!=str[i] && f++==1) s1=str[i];
    }
    LL x=0,y=0;
    rep(i,1,n){
        if(str[i]==s)
            x++;
        else if(str[i]==s1)
            y++;
    }
    if(x>y) cout<<s<<endl;
    else    cout<<s1<<endl;
    return 0;
}

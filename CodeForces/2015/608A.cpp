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

#define MX 123456

int main()
{
    LL i,j,k,l,n,s,f[MX],t[MX];
    cin>>n>>s;
    rep(i,0,n-1){
        cin>>f[i]>>t[i];
    }
    for(i=0;i<n-1;i++){
         for(j=i+1;j<n;j++){
             if(f[i]<f[j]){
                swap(f[i],f[j]) ;
                swap(t[i],t[j]) ;
             }
         }
     }

     LL sum=0;
     f[n]=0;
     sum+=s-f[0];
     rep(i,0,n-1){
        if(sum<t[i]) sum+=(t[i]-sum);
        sum+=(f[i]-f[i+1]);
     }
     prnt1(sum);
     return 0;
}



/*
3 7
2 1
3 8
5 2
5 10
2 77
3 33
8 21
9 12
10 64
*/


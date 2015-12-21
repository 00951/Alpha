/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* handle: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;
#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define pr         printf
#define p1(a)      cout<<a<<endl
#define pr2(a,b)   cout<<a<<" "<<b<<endl
#define pr3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define prntcs     cout<<"Case "<<++cs<<": ";
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}

#define MX 123456

int main()
{
    LL g,l,T;
    cin>>T;
    while(T--){
        cin>>g>>l;
        if(l%g==0)
            pr2(g,l);
        else
            puts("-1");
    }
    return 0;
}




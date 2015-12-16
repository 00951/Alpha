/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* handle: aarif_shuvo (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;
#define LL  long long
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

#define MX 12345

int main()
{
    LL a[MX],n;
    cin>>n;
    LL ekso=0,duiso=0;
    rep(i,1,n){
        cin>>a[i];
        if(a[i]==100) ekso++; else duiso++;
    }
    if(ekso==n || duiso==n){
        if(n%2) puts("NO");
        else puts("YES");
    }else{
        if(n%2==0){
            if(!(ekso%2) && !(duiso%2)) puts("YES");
            else puts("NO");
        }else if(n%2){
            if(!(ekso%2) && (duiso%2)) puts("YES");
            else puts("NO");
        }
    }
    return 0;
}

/*
3
100 200 100
4
100 100 100 200
3
100 100 200
3
200 200 100
4
100 100 100 200
4
200 200 200 100
5
100 100 100 200 200
6
100 100 100 200 200 200
8
100 100 100 100 100 100 200 200
9
100 100 200 200 200 200 200 200 200

*/



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
#define prntcs       printf("Case %lld: ", ++cs);
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}

#define MX 1234567
LL ans[MX];
int main()
{
    LL z,l,i,m,cs=0,res;

    while(cin>>z>>i>>m>>l){
        if(z==0&&i==0&&m==0&&l==0) break;
        LL c=0;
        while(1){
            LL x=(z*l+i)%m;
            ans[x]++;
            if(ans[x]>1) break;
            l=x;c++;
        }
        prntcs;prnt1(c);
        memset(ans,0,sizeof ans);
    }
    return  0;
}

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


LL pown(LL b,LL n){
    LL ans=1;
    rep(i,1,n){
        ans*=b;
    }
    return ans;
}

int main()
{
  // READ("C:/Users/USER/Desktop/input.txt");
    //WRITE("C:/Users/USER/Desktop/output.txt");

    LL a,b,ar1[MX],ar2[MX];
    while(cin>>a>>b){
       memset(ar1,0,sizeof ar1);
       memset(ar2,0,sizeof ar2);
        LL k=0,l=0;
        while(a>0)
            ar1[k++]=a%2,a/=2;

        while(b>0)
            ar2[l++]=b%2,b/=2;

        LL mx=max(k-1,l-1),ans[MX],u=0;
       // hi;
        rep(i,0,mx){
            if(ar1[i]==1 && ar2[i]==1)
                ans[u++]=0;
            else if((ar1[i]==1 && ar2[i]==0)||(ar1[i]==0 && ar2[i]==1))
                ans[u++]=1;
            else if(ar1[i]==0 && ar2[i]==0)
                ans[u++]=0;

            }
            LL res=0,pos=0;
            rep(i,0,u-1){
                res+= ans[i]*pown(2,pos++);
            }
            prnt1(res);
    }
    return 0;
}


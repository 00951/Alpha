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
#define debug_array(arr,a,b) for(int i=a;i<=b;i++) cerr<<arr[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello Worldo!\n")
template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}


/*--CONSTANTS--*/
#define mod     1000000007
#define MX      12345

//start pliiz^^

int main()
{

    //READ("F:/in.txt");
    //WRITE("F:/out.txt");
    LL i,j,k,f,x,T,cs=0;
    cin>>T;
    while(T--){
        k=13,f=0;
        while(k--) {cin>>x;if(!x)f=1;}
        cout<<"Set #"<<++cs<<": ";
        if(!f) puts("Yes"); else puts("No");
    }

    return 0;
}




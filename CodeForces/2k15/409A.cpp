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
    LL T,i;
    string s,s1;
    while(cin>>s>>s1){
            LL c=0,c1=0;
        for(i=0;i<s.length();i+=2){

            if(s[i]=='['){
                if(s1[i]=='8') c1++;
                else if(s1[i]=='(') c++;
            }
            else if(s[i]=='8'){
                if(s1[i]=='[') c++;
                else if(s1[i]=='(') c1++;
            }
            else if(s[i]=='('){
                if(s1[i]=='[') c1++;
                else if(s1[i]=='8') c++;
            }
        }
        if(c==c1) puts("TIE");
        else
            (c1>c)?puts("TEAM 2 WINS"):puts("TEAM 1 WINS");
    }
    return 0;
}


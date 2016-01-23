/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
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
template<class T1,class T2,class T3,class T4,class T5> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<endl;}

#define MX 1234

int main()
{
    char s[MX];
    LL lwr=0,up=0,n;
    cin>>n;
    getchar();
    gets(s);
    LL l=strlen(s);
    rep(i,0,l-1){
        if(s[i]=='x')
            lwr++;
        else if(s[i]=='X')
            up++;
    }
    if(up==lwr){
        cout << 0 << endl << s << endl;
    }else if(up>lwr){
        LL z=up-n/2;
        LL y=z;
        rep(i,0,l-1){
            if(!z) break;
            if(s[i]=='X'){
                s[i]='x';
                z--;
            }
        }
        cout << y << endl << s << endl;
    }else if(up<lwr){
        LL z=lwr-n/2;
        LL y=z;
        rep(i,0,l-1){
            if(!z) break;
            if(s[i]=='x'){
                s[i]='X';
                z--;
            }
        }
        cout << y << endl << s << endl;
    }
    return 0;
}

/*
4
xxXx
2
XX
6
xXXxXx
*/

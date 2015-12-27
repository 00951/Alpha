/*
* GM Ariful Islam
* CSE, Jahangirnagar University(44)
*/

#include <bits/stdc++.h>
using namespace std;
#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define prntcs       cout<<"Case "<<++cs<<": ";
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl

/*--BUG-ER-HAT--*/
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello Worldo!\n")
template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}


/*--CONSTANTS--*/
#define MX 12345


//start pliiz^^

int main()
{

    //READ("F:/in.txt");
    //WRITE("F:/out.txt");
    LL i,j,k,T,cs=0;
    char s[MX],jd[MX];
    cin>>T;getchar();
    while(T--){
        gets(s);gets(jd);
        cout<<"Case "<<++cs<<": ";
        if(strcmp(s,jd)==0) puts("Yes");
        else{
            char nw[MX];
            for(i=0,j=0;s[i]!='\0';i++){
                if(isalpha(s[i])) nw[j++]=s[i];
            }
            nw[j]='\0';
            if(strcmp(nw,jd)==0) puts("Output Format Error");
            else puts("Wrong Answer");
        }

    }

    return 0;
}



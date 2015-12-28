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
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello World!\n")
#define ndl printf("\n")

template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}


/*--CONSTANTS--*/
#define MX 12345


//^^start plz :')


int main()
{
    //READ("F:/in.txt");

    int i,j,k,x=0,y=0,cnt[MX];
    string sa[MX];
    char s[MX],nw[MX];

    while(scanf("%s",s)!=EOF){

        if(strcmp(s,"E-N-D")==0) break;

        for(i=0,k=0;s[i];i++){
            if(isalpha(s[i]) || s[i]=='-'){
                nw[k++]=s[i];
            }
        }
        nw[k]='\0';

        LL l=strlen(nw);

        sa[x++]=nw;
        cnt[y++]=l;

        //cout << cnt[y-1] << "    " << sa[x-1] ; ndl;
    }
    x--;
    for(i=0; i<x; i++){
        for(j=i+1; j<x+1; j++){
            if(cnt[i]<cnt[j]){
                swap(cnt[i],cnt[j]);
                swap(sa[i],sa[j]);
            }
        }
    }
    for(i=0;sa[0][i];i++){
        putchar(tolower(sa[0][i]));
    }
    puts("");

    return 0;
}


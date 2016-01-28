#include <bits/stdc++.h>
#define LL  long long
#define PII pair<int,int>
#define VI  vector<int>
#define VVI vector<vi>
#define VLL vector<LL>
#define VS vector<string>
#define MSI map<string,int>
#define MII map<int,int>
#define PII pair<int,int >QAA
#define PLL pair<LL,LL>
#define VPI vector<PII>
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<n;++i)
#define REPP(i,a,b) for(int i=a;i<b;++i)
#define REV(i,b,a) for(int i=b;i>=a;--i)
#define MP make_pair
#define PB push_back
#define RS(x) scanf("%s",(x))
#define RI(x) scanf("%d",&(x))
#define RII(x,y) scanf("d",&(x),&(y))
#define RIII(x,y,z) scanf("d%d",&(x),&(y),&(z))
#define CLR(a)  memset(a,0,sizeof(a))
#define SET(a)  memset(a,-1,sizeof(a))
#define DRI(x) LL x; scanf("%lld",&x)
#define DRII(x,y) LL x,y; scanf("lld",&x,&y)
#define DRIII(x,y,z) LL x,y,z; scanf("lld%lld",&x,&y,&z)
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld: ", ++cs);
#define R(fn) freopen(fn, "r", stdin);
#define W(fn) freopen(fn, "w", stdout);
#define hi puts("Hello World!")
#define ndl puts("")
using namespace std;

/*
#define INF (1<<30)-1
#define eps 1e-9
#define MOD 1000000000+7
#define MX 100000+10

const int MOD = 1e9+7;
const int MX = 1e5+10;
*/
const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1000000000+7;
const int MX = 100000+10;

int main()
{
    //R("F:/in.txt");

    int sm,mod,tmp,cs=0;

    DRI(T)

    while(T--){

    }
    return 0;
}








// integer inquiry

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char num[20000],num1[10700],num2[10700];
int num3[1070];
int main()
{
    int i,w,c,k,t,d,j,n;
    d=0;

    scanf("%s",&num1);
    scanf("%s",&num2);
    j=strlen(num1)-1;
    k=strlen(num2)-1;
    while(1)
    {
        if(d)
            scanf("%s",&num2);
        w=atoi(num2);
        if(!w)
            break;
        j=strlen(num1)-1;
        k=strlen(num2)-1;

        c=0;
        n=0;
        while(j>=0 || k>=0 || c==1)
        {
            if(j>=0 && k>=0)
                num3[n]=((num1[j]-48)+(num2[k]-48)+c)%10;
            else if(j>=0)
                num3[n]=((num1[j]-48)+c)%10;
            else if(k>=0)
                num3[n]=((num2[k]-48)+c)%10;
            else
                num3[n]=c%10;

            if(j>=0 && k>=0)
                c=((num1[j]-48)+(num2[k]-48)+c)/10;
            else if(j>=0)
                c=((num1[j]-48)+c)/10;
            else if(k>=0)
                c=((num2[k]-48)+c)/10;
            else
                c=c/10;
            n++;
            j--;
            k--;
        }
        k=0;
        for(i=(n-1); i>=0; i--,k++)
            num1[k]=num3[i]+48;
        num1[k]='\0';
        d++;
    }
    printf("%s\n",num1);

    return 0;
}

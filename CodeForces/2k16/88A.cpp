#include <bits/stdc++.h>
#define LL  long long
#define PII pair<int,int>
#define VI  vector<int>
#define VVI vector<vi>
#define VS vector<string>
#define MSI map<string,int>
#define MII map<int,int>
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<n;++i)
#define REPP(i,a,b) for(int i=a;i<b;++i)
#define REVV(i,b,a) for(int i=b;i>=a;--i)
#define PB push_back
#define RS(x) scanf("%s",(x))
#define RI(x) scanf("%d",&(x))
#define RII(x,y) scanf("%d%d",&(x),&(y))
#define RIII(x,y,z) scanf("%d%d%d",&(x),&(y),&(z))
#define CLR(a)  memset(a,0,sizeof(a))
#define SET(a)  memset(a,-1,sizeof(a))
#define DRI(x) LL (x); scanf("%lld",&x)
#define DRII(x,y) LL x,y; scanf("%lld%lld",&x,&y)
#define DRIII(x,y,z) LL x,y,z; scanf("%lld%lld%lld",&x,&y,&z)
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld: ", ++cs);
#define R(fn) freopen(fn, "r", stdin);
#define W(fn) freopen(fn, "w", stdout);
#define hi puts("Hello World!")
#define ndl puts("")
using namespace std;

const int MOD = 1e9+7;
const int MX = 1e5+10;

string note[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

LL find(string a){

    REP(i,12) if(a==note[i]) return i;
    return -1;

}

int main()
{
    string a,b,c;
    cin>>a>>b>>c;

    VI v(3);
    
    v[0]=find(a);v[1]=find(b);v[2]=find(c);

    sort(ALL(v));

   // prnt3(v[0],v[1],v[2]);

    bool mnr=0,mjr=0;

    //permute nd calc
    do{
        int x=v[1]-v[0];        //assign the chord values to vector for nxt permutation
        int y=v[2]-v[1];
       
        if(x<0) x+=12;          // add 12 if <0 , like any other modular cyclic values
        if(y<0) y+=12;

        if(x==3 and y==4) mnr=1;
        else if(x==4 and y==3) mjr=1;

    }while(next_permutation(ALL(v)));

    if(mnr) puts("minor");
    else if(mjr) puts("major");
    else puts("strange");

    return 0;
}

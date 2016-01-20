#include <bits/stdc++.h>
#define LL  long long
#define PII pair<int,int>
#define VI  vector<int>
#define VVI vector<vi>
#define VLL vector<LL>
#define VS vector<string>
#define MSI map<string,int>
#define MII map<int,int>
#define PII pair<int,int>
#define PLL pair<LL,LL>
#define VPI vector<PII>
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<n;++i)
#define REPP(i,a,b) for(int i=a;i<=b;++i)
#define REV(i,b,a) for(int i=b;i>=a;--i)
#define MP make_pair
#define PB push_back
#define ndl puts("");
#define RI(x) scanf("%lld",&(x))
#define RII(x,y) scanf("%lld%lld",&(x),&(y))
#define RIII(x,y,z) scanf("%lld%lld%lld",&(x),&(y),&(z))
#define DRI(x) LL (x); scanf("%lld",&x)
#define DRII(x,y) LL x,y; scanf("%lld%lld",&x,&y)
#define DRIII(x,y,z) LL x,y,z; scanf("%lld%lld%lld",&x,&y,&z)
#define CLR(a)  memset(a,0,sizeof(a))
#define SET(a)  memset(a,-1,sizeof(a))
#define pri(a)     cout<<a<<endl
#define prii(a,b)   cout<<a<<" "<<b<<endl
#define priii(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define priiii(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define READ(fn) freopen(fn, "r", stdin);
#define WRITE(fn) freopen(fn, "w", stdout);
#define __cin ios_base::sync_with_stdio(0); cin.tie(0)
#define hi puts("Hello World!")
#define pcs printf("Case %d: ",++cs);
using namespace std;


// i'm tired calculating this. break for now! -_- 
// understand this before some other time


/*0123456789
---*/ int cs  = 0;
const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1e9+7;
const int MX  = 1e5+10;


char xs,xd;
int ys,yd;
int xsi,xdi;


int main()
{
    scanf(" %c%d %c%d", &xs, &ys, &xd, &yd);   // read input - xsrc, ysrc...xdest, ydest

    xsi = xs - 'a' + 1;     // this is not char2int, a die 1 mean korte caile ebhabe koro
    xdi = xd - 'a' + 1;    // a=1,b=2,c=3,d=4....

    printf("%d\n", max(abs(xd - xs), abs(yd - ys)));  //move! how???

    // chess buddy, you often need xdf && ydf :D
    int xdf = xdi - xsi;
    int ydf = yd - ys;

    while (xdf || ydf)
    {

        if(xdf>0)
        {
            xdf--;
            putchar('R');
        }
        else if(xdf<0)
        {
            xdf++;
            putchar('L');
        }


        if(ydf>0)
        {
            ydf--;
            putchar('U');
        }
        else if(ydf<0)
        {
            ydf++;
            putchar('D');
        }

        puts("");
    }

    main();
    return 0;
}




//AC

/*0123456789
---*/ int cs  = 0;
const int INF = 1<<29;
const int eps = 1e-9;
const int MOD = 1e9+7;
const int MX  = 1e5+10;

int main()
{
    __cin;

    int xs,ys,xd,yd;
    char a,b;

    cin>>a>>ys>>b>>yd;

    xs = a-'a'+1;
    xd = b-'a'+1;

    int moves = max(abs(xs-xd),abs(ys-yd)); //***why??

    pri(moves);

    REP(i,moves)
    {
        if(ys==yd and xs<xd) xs++, pri('R'); else
        if(ys==yd and xd<xs) xd++, pri('L'); else
        if(xs==xd and ys<yd) ys++, pri('U'); else
        if(xs==xd and yd<ys) yd++, pri('D'); else

    //nw just combine R,L,U,D condns together below

        if(xs<xd and ys<yd)  xs++,ys++, pri("RU"); else
        if(xs<xd and yd<ys)  xs++,yd++, pri("RD"); else
        if(xd<xs and yd<ys)  xd++,yd++, pri("LD"); else
        if(xd<xs and ys<yd)  xd++,ys++, pri("LU");
    }

    //main();
    return 0;
}

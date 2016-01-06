/******************************************************************
***                                                             ***
***   Author     : GM Arif Shuvo                                ***
***   University : CSE, Jahangirnagar University(44)            ***
***   Handle     : aarif_shuvo (codeforces/topcoder/codechef)   ***
***                                                             ***
******************************************************************/

#include <bits/stdc++.h>
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%d %d",&x,&y)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define sc3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define scl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define sc4(w,x,y,z) scanf("%d %d %d %d",&w,&x,&y,&z)
#define scl4(w,x,y,z) scanf("%lld %lld %lld %lld",&w,&x,&y,&z)
#define sc5(x,y,z,p,q) scanf("%d %d %d %d %d",&x,&y,&z,&p,&q)
#define scl5(x,y,z,p,q) scanf("%lld %lld %lld %lld %lld",&x,&y,&z,&p,&q)
#define LL  long long
#define LLU unsigned long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define csprnt       printf("Case %lld: ", ++cs);
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
#define hi printf("Hello World!\n")
#define ndl printf("\n")
using namespace std;


#define MX 1234

int main()
{
    //READ("F:/in.txt");
    LL i,j,k,l,m,n,T,cs=0;
    char s[MX], s2[MX],nw1[MX],nw2[MX];

    scl(T);
    getchar();
    while(T--)
    {
        gets(s);
        gets(s2);

        for(i=0,k=0; s[i]; i++)
        {
            if(isalpha(s[i]))
            {
                nw1[k++]=tolower(s[i]);
            }
        }
        nw1[k]='\0';
        for(i=0,k=0; s2[i]; i++)
        {
            if(isalpha(s2[i]))
            {
                nw2[k++]=tolower(s2[i]);
            }
        }
        nw2[k]='\0';

        LL l1=strlen(nw1), l2=strlen(nw2);
        LL cnt=0;

        csprnt;
       // puts(nw1);
       // puts(nw2);
        // prnt2(l1,l2);
        if(l1==l2)
        {
            for(i=0; nw1[i]; i++)
            {
                for(j=0; nw2[j]; j++)
                {
                    if(nw1[i]==nw2[j])
                    {
                        nw2[j]='$';
                        cnt++;
                        break;
                    }
                }

            }

            if(cnt==l1)
            {
                puts("Yes");
            }
            else
            {
                puts("No");
            }
        }
        else puts("No");

//        puts(nw1);
  //      puts(nw2);


    }
    return 0;
}

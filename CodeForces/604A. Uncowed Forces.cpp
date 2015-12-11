/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)


int main()
{
    LL m1,m2,m3,m4,m5,
        w1,w2,w3,w4,w5,
        suc,unsuc,x;

        cin>>m1>>m2>>m3>>m4>>m5;
        cin>>w1>>w2>>w3>>w4>>w5;
        cin>>suc>>unsuc;
        
        LL sum=0;
        x=500;
        sum+=max((3*x)/10,(((250-m1)*x)-250*50*w1)/250);
        x=1000;
        sum+=max((3*x)/10,(((250-m2)*x)-250*50*w2)/250);
        x=1500;
        sum+=max((3*x)/10,(((250-m3)*x)-250*50*w3)/250);
        x=2000;
        sum+=max((3*x)/10,(((250-m4)*x)-250*50*w4)/250);
        x=2500;
        sum+=max((3*x)/10,(((250-m5)*x)-250*50*w5)/250);

        sum=sum+(100*suc)-(50*unsuc);

        cout << sum << endl;
    return 0;
}

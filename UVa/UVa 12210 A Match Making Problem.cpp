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
    LL cs=1;
    LL b,s,B[MAX],S[MAX];

    while(cin>>b>>s){

        if(b==0 && s==0) break;

        rep(i,1,b)
            cin>>B[i];
        rep(i,1,s)
            cin>>S[i];

        sort(B+1,B+b+1);

        printf("Case %lld: ", cs++);;

        if(b==s)
            cout << 0 << endl;
        else if(s>b)
            cout << 0 << endl;
        else
            cout << b-s << " " << B[1] << endl;

    }
    return 0;
}

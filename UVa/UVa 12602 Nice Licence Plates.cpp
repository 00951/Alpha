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
    LL T,frst;
    char s[MAX];
    cin>>T;
    while(T--){
        cin>>s;
        frst=(s[0]-65)*pow(26,2)+(s[1]-65)*pow(26,1)+(s[2]-65)*pow(26,0);
        LL n=0;
        rep(i,4,7){
            n=10*n+s[i]-48;
        }
        if(abs(frst-n)<=100)
            cout << "nice" << endl;
        else
            cout << "not nice" << endl;
    }
    return 0;
}

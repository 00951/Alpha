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
    LL T,x;
    string S,s1,s2,a[MAX],b[MAX];
    while(cin>>T){
        getchar();

        rep(i,1,2*T)
            getline(cin,a[i]);

        cin>>x;
        getchar();

        rep(i,1,x){
            getline(cin,b[i]);

            rep(k,1,2*T){
                if(b[i]==a[k]){
                    cout << a[k+1]<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

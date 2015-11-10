/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    ll b,p,flg,i;

    while(scanf("%I64d%I64d", &p, &b)==2){

        ll ans=1;
        flg=9;

        for(i=1; ;i++){

            ans*=p;

            if(ans==b){
                flg=0;
                break;
            }

            if(ans>b){
                flg=1;
                break;
            }
        }

        if(flg==0){
            cout << "YES" << endl;
            cout << i-1 << endl;
        }
        else if(flg==1){
            cout << "NO" << endl;
        }
    }

    return 0;
}


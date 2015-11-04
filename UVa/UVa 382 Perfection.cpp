/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345

int main()
{
    ll n;
    cout << "PERFECTION OUTPUT" << endl;

    while(cin>>n){

        ll c=0, flag=0;

        if(n==0){
            printf("END OF OUTPUT\n");
            break;
        }

        for(ll i=1; i<=n-1; i++){
            if(n%i==0){
                c+=i;
            }

            if(c>n){
                flag=1;
                break;
            }
        }

        if(n<10)
            cout << "    " << n;
        else if(n<100)
            cout << "   " << n;
        else if(n<1000)
            cout << "  " << n;
        else if(n<10000)
            cout << " " << n;
        else if(n<100000)
            cout << n;

        if(flag==1)
            printf("  ABUNDANT\n");
        else if(c==n)
            printf("  PERFECT\n");
        else
            printf("  DEFICIENT\n");
    }
    return 0;
}


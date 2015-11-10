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
    ll n,f,t,flg;

    while(cin>>n){

        flg=0;

        if(n<10){
            if(n%4==0 || n%7==0){
                flg=1;

            }
        }else  if(n<100){
            if(n%4==0 || n%7==0){
                flg=1;

            }
            if(n%44==0 || n%47==0 || n%74==0 || n%77==0){
                flg=1;

            }
        }
        else if(n<=1000){
            if(n%4==0 || n%7==0){
                flg=1;

            }
            if(n%44==0 || n%47==0 || n%74==0 || n%77==0){
                flg=1;

            }
            if(n%447==0 || n%474==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0)
                flg=1;

        }
        if(flg==1)
            printf("YES\n");
        else if(flg==0)
            cout << "NO" << endl;
    }

    return 0;
}


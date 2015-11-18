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
    char s[1234567];
    ll T,x,y,f,cs=0;

    while(cin>>s){
            cin>>T;
            printf("Case %lld:\n", ++cs);

        while(T--){
            f=0;
            cin >> x >> y;
            if(x>y) swap(x,y);

            if(x==y){
                cout << "Yes" <<endl;
                continue;
            }
            if(s[x]=='0'){
                rep(i,x+1,y){
                    if(s[i]=='0')
                        f=1;
                    else{
                        f=2;
                        break;
                    }
                }
            }else if(s[x]=='1')
            {
                rep(i,x+1,y){
                    if(s[i]=='1')
                        f=1;
                    else{
                        f=2;
                        break;
                    }

                }
            }

        if(f==1)
            cout << "Yes" << endl;
        else if(f==2)
            cout << "No" << endl;
        }
    }
    return 0;
}

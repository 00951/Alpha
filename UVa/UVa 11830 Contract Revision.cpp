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
    LL n,k;
    char x,nw[MAX],s[MAX];

    while(cin>>x>>s){

        if(x=='0' && strcmp(s,"0")==0) break;
        LL l=strlen(s),k=0;

        rep(i,0,l-1){
            if(s[i]!=x)  nw[k++]=s[i];
        }

        LL r,fl=0;
        if(k==0)
            cout << 0 << endl;
        else{
            rep(i,0,k-1){
                if(nw[i]!='0'){
                    r=i;
                    fl=1;
                    break;
                }
            }
            if(fl==0)
                cout << 0 << endl;
            else{
                rep(l,r,k-1){
                    printf("%c", nw[l]);
                }
            cout << endl;
            }
        }
    }

    return 0;
}

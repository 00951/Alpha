#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

LL nw[MAX];

int main()
{
    LL T,mx;
    string s;
    cin>>T;
    getchar();

    while(T--){
        mx=-1;
        
        getline(cin,s);
        LL l=s.size();

        rep(i,0,l-1){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                s[i]=toupper(s[i]);
                //LL x=s[i];
                //nw[x]++;
                nw[s[i]]++;
                mx=max(mx,nw[s[i]]);
            }
        }
    }
/**********************************/
    for(LL p=mx;p>=1;p--){
        for(LL j=65;j<=90;j++){
            if(nw[j]==p){
                printf("%c ",j);
                cout << p << endl;
            }
        }
    }
/**********************************/
    return 0;
}

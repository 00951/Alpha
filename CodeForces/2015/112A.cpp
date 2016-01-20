
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    char a[12345],b[12345];

    while(cin>>a>>b){

        ll l=strlen(a);

        rep(i,0,l-1){
            a[i]=tolower(a[i]);
            b[i]=tolower(b[i]);
        }

        if(strcmp(a,b)==0)
            cout << 0 << endl;
        else if(strcmp(a,b)==1)
            cout << 1 << endl;
        else if(strcmp(a,b)==-1)
            cout << -1 << endl;

    }


    return 0;
}

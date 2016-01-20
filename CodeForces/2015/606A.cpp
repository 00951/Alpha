#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    LL x1,y1,z1,x2,y2,z2;

    cin>>x1>>y1>>z1;
    cin>>x2>>y2>>z2;

    LL a=0,b=0,c=0;

    if(x1>x2)
        a+=(x1-x2)/2;
    else
        b+=(x2-x1);

    if(y1>y2)
        a+=(y1-y2)/2;
    else
        b+=(y2-y1);

    if(z1>z2)
        a+=(z1-z2)/2;
    else
        b+=(z2-z1);

    if(a>=b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
} 

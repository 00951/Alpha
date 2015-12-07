#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

------------------------------------------
bool is_perfect_square(LL n)
{
    LL x=sqrt(n);
    return (x*x)==n;
}
----------------------------------------
bool isfibonicci(LL n)
{
    return is_perfect_square(5*n*n + 4) || is_perfect_square(5*n*n - 4);
}
--------------------------------------------
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        LL n;
        cin>>n;
        cout<<isfibonicci(n)<<endl;
    }
}
-----------------------------------------------

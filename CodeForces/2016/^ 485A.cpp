/* xor555 */

#include <bits/stdc++.h>
using namespace std;

#define LL  long long

#define MX 123456

bool vstd[MX];

int main()
{
    LL a,m;
    cin>>a>>m;
    while(1){
        LL rem=a%m;
        if(!rem){
            puts("Yes");
            return 0;
        }
        if(vstd[rem]){
            puts("No");
            return 0;
        }
        vstd[rem]=1;
        a+=rem;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
    LL n;
    char s[1234];
    cin>>n;
    getchar();
    while(n--){
        gets(s);
        LL l=strlen(s);
        if(l>10)
            printf("%c%lld%c\n",s[0],l-2,s[l-1]);
        else
            cout << s << endl;
    }

    return 0;
}

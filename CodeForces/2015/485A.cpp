/******************************************************************
***                                                             ***
***   Author     : GM Arif Shuvo                                *** 
***   University : CSE, Jahangirnagar University(44)            ***
***   Handle     : aarif_shuvo (codeforces/topcoder/codechef)   ***
***                                                             ***
******************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define csprnt       cout<<"Case "<<++cs<<": ";
#define prnt1(a)     cout<<a<<endl
#define prnt2(a,b)   cout<<a<<" "<<b<<endl
#define prnt3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define MX 12345

int main()
{
    char s[MX];
    LL i,j,k,n;

    while(cin>>n){

        gets(s);
        LL l=strlen(s);

        if(s[l-1]=='k'){

             if(n==5 || n==6) prnt1(53);
             else prnt1(52);

        }
        else if(s[l-1]=='h'){

            if(n==31) prnt1(7);
            else if(n==30) prnt1(11);
            else if(n==29) prnt1(12);
            else prnt1(12);

        }

        }

    return 0;
}

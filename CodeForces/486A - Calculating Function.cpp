/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


Problem: http://codeforces.com/problemset/problem/486/A


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;


int main()
{
    LL n;

    while(cin >> n) {
        if(n%2 == 0)
            cout << n/2 << endl;
        else
            cout << n/2 - n << endl;        // pattern .. 1 => -1, 3 => -2, 5 => -3, 7 => -4
    }                                       // (n/2-n)  ..or..  -(n/2+1)


    return 0;
}





//  or.......





#include <stdio.h>

int main()
{
    long long n, ans, x;

    while(scanf("%I64d", &n)==1)
    {
        if(n%2==0)
        {
            n=n/2;
            ans=n*n+n-n*n;

        }
        else
        {
            n/=2;
            x=n+1;

            ans=n*n+n-x*x;

        }
        
        printf("%I64d\n", ans);
    }
    return 0;
}

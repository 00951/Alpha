/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL ca;

LL d2b(LL n)
{
    ca=0;
    if(n/2==1)
        d2b(n/2);

    //printf("%d", n % 2);  //********

    if(n%2==1)
        ca++;
    return ca;
}

LL h2d(LL n)
{
    LL sum=0,i=0,x;
    while(n>0){
        x=n%10;
        n/=10;
        sum+=x*pow(16,i++);
    }
    return sum;
}


int main()
{
    LL n,T;
    cin>>T;
    while(T--){
        cin>>n;
        LL z=n;
        LL p=h2d(n);
        cout << d2b(n) << " " << d2b(p) << endl;
    }
    return 0;
}

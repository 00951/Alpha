/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll T, cy, by, cd, bd, cm, bm, cs=0;
    cin>>T;
    while(T--){
        scanf("%lld/%lld/%lld", &cd, &cm, &cy);
        scanf("%lld/%lld/%lld", &bd, &bm, &by);

        ll age=cy-by;

        if(cm<bm)
            age--;
        else if(cm==bm)
        {
            if(cd<bd)
                age--;
        }

        if(age>130)
            printf("Case #%lld: Check birth date\n", ++cs, age);
        else if(age<0)
            printf("Case #%lld: Invalid birth date\n", ++cs);
        else
            printf("Case #%lld: %lld\n", ++cs, age);
    }
    return 0;
}

/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    LL p,h,o;
    while(cin>>p>>h>>o){
        if(o-h>=p)
            cout << "Props win!" << endl;
        else
            cout<< "Hunters win!" << endl;
    }
    return 0;
}

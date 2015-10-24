
/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

#include <cstring>
#define ll long long

const string L="This is leap year.",
             H="This is huluculu festival year.",
             B="This is bulukulu festival year.",
             N="This is an ordinary year.";

ll mod(string yr, ll f){

    ll mod21=0, len=yr.size();

    for(ll i=0; i<len; i++){
        mod21=((mod21*10)+yr[i]-48)%f;
    }
    return mod21;
}


int main()
{
    string yr;

    ll flag=0;

    while(cin>>yr){

        if(flag!=0)
            printf("\n");

        flag=1;

        if(!mod(yr, 4) && mod(yr, 100) || !mod(yr, 400)){

                cout<<L<<endl;

            if(!mod(yr, 15))
                cout<<H<<endl;

            if(!mod(yr, 55))
                cout<<B<<endl;
        }

        else if(!mod(yr, 15))
            cout<<H<<endl;
        else
            cout<<N<<endl;


    }
    return 0;
}

/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL sing_dig_sum(LL n){
    LL sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

LL frst(LL a){
       LL  x=2*((a/10)%10);
       LL y=2*(a/1000);
        x=sing_dig_sum(x);
        y=sing_dig_sum(y);
        return x+y;
}


LL scnd(LL a){
    LL x=a%10;
    LL y=(a/100)%10;
    return x+y;
}

int main()
{
    LL a,b,c,d,T;
    cin>>T;
    while(T--){
       cin >>a>>b>>c>>d;
        
       LL frst_part=frst(a)+frst(b)+frst(c)+frst(d);
       LL scnd_part=scnd(a)+scnd(b)+scnd(c)+scnd(d);

       if((frst_part+scnd_part)%10==0)
            cout<< "Valid" << endl;
        else 
            cout << "Invalid" << endl;
    }
    return 0;
}

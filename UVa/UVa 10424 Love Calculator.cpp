/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll single_dig(ll tmp){

    ll dig=0;
    while(tmp>0){
        dig+=tmp%10;
        tmp/=10;
    }

    if(dig>9)
        single_dig(dig);
    else
        return dig;
}

int main()
{
    char a[1234],b[1234], i;

    while(gets(a)){

        gets(b);

        ll la=strlen(a);
        ll sa=0;

        for(i=0; i<la; i++){
            if(a[i]>=65 && a[i]<=90)
                a[i]=tolower(a[i]);

            if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
                    sa+=a[i]-96;
        //*These two names can have white space or some other non-alphabetical characters like $ & % etc
        }

        ll lb=strlen(b);
        ll sb=0;
        for(i=0; i<lb; i++){
            if(b[i]>=65 && b[i]<=90)
                b[i]=tolower(b[i]);

            if((b[i]>=65 && b[i]<=90) || (b[i]>=97 && b[i]<=122))
                    sb+=b[i]-96;
        }

        sa = single_dig(sa), sb = single_dig(sb);

        if(sa>sb) swap(sa,sb);

        double ans = (sa/(1.0*sb))*100;

        if(sa==0 && sb==0)
            cout << endl;   //*All the results must be in new lines.
        else
            printf("%.2lf %%\n", ans);
    }

    return 0;
}



/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345

int main()
{
    string str;
    ll arr[MAX];

    while(cin>>str)
    {

        ll len=str.size();
        ll i,k,b=0,c=0,d=0,l=0,m=0,r=0;

        for(i=0,k=0; i<len; i++)
        {

            if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V')
            {
                if(b==0)
                    arr[k++]=1;

                b=1,c=0,d=0,l=0,m=0,r=0;
            }
            else if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z')
            {
                if(c==0)
                    arr[k++]=2;

                b=0,c=1,d=0,l=0,m=0,r=0;
            }
            else if(str[i]=='D' || str[i]=='T')
            {
                if(d==0)
                    arr[k++]=3;

                b=0,c=0,d=1,l=0,m=0,r=0;
            }
            else if(str[i]=='L')
            {
                if(l==0)
                    arr[k++]=4;

                b=0,c=0,d=0,l=1,m=0,r=0;
            }
            else if(str[i]=='M' || str[i]=='N')
            {
                if(m==0)
                    arr[k++]=5;

                b=0,c=0,d=0,l=0,m=1,r=0;
            }
            else if(str[i]=='R')
            {
                if(r==0)
                    arr[k++]=6;

                b=0,c=0,d=0,l=0,m=0,r=1;
            }
            else
                b=0,c=0,d=0,l=0,m=0,r=0;
        }


        for(i=0; i<k; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }

    return 0;
}

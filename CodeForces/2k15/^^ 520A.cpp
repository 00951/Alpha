#include <bits/stdc++.h>
using namespace std;

#include <cstdlib>
#include <cstring>

typedef long long ll;


int main()
{
    ll n;
    cin >> n;

    string s;
    cin>>s;

    ll a[300];

    memset(a, 0, sizeof a);         //

    for(ll i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);     //
        a[s[i]]++;              //
    }

    for(ll i=97;i<=122;i++)     //
    {
        if(a[i]==0){
            printf("NO\n");
            return 0;           //
        }
    }
    printf("YES\n");
}




//OR...............



#include <stdio.h>
#include <string.h>

int main()
{
    int num,i;
    int a,s,d,f,g,l,k,j,h,
        q,w,e,r,t,y,p,o,ii,u,
        z,x,c,v,b,m,n;

    char str[100000];

    while(scanf("%d %s", &num, str)==2){

        a=0,s=0,d=0,f=0,g=0,l=0,k=0,j=0,h=0,
        q=0,w=0,e=0,r=0,t=0,y=0,p=0,o=0,ii=0,u=0,
        z=0,x=0,c=0,v=0,b=0,m=0,n=0;


        for(i=0; i<num; i++){

            if(str[i]>=97 && str[i]<=122){
                str[i]=str[i]-32;
            }

            if(str[i]=='A')
                a++;
            else if(str[i]=='B')
                b++;
            else if(str[i]=='C')
                c++;
            else if(str[i]=='D')
                d++;
            else if(str[i]=='E')
                e++;
            else if(str[i]=='F')
                f++;
            else if(str[i]=='G')
                g++;
            else if(str[i]=='H')
                h++;
            else if(str[i]=='I')
                ii++;
            else if(str[i]=='J')
                j++;
            else if(str[i]=='K')
                k++;
            else if(str[i]=='L')
                l++;
            else if(str[i]=='M')
                m++;
            else if(str[i]=='N')
                n++;
            else if(str[i]=='O')
                o++;
            else if(str[i]=='P')
                p++;
            else if(str[i]=='Q')
                q++;
            else if(str[i]=='R')
                r++;
            else if(str[i]=='S')
                s++;
            else if(str[i]=='T')
                t++;
            else if(str[i]=='U')
                u++;
            else if(str[i]=='V')
                v++;
            else if(str[i]=='W')
                w++;
            else if(str[i]=='X')
                x++;
            else if(str[i]=='Y')
                y++;
            else if(str[i]=='Z')
                z++;

        }

        if(a==0||b==0||c==0||d==0||e==0||f==0||g==0||h==0||ii==0||j==0||k==0||l==0||m==0||n==0||o==0||p==0||q==0||r==0||s==0||t==0||u==0||v==0||w==0||x==0||y==0||z==0)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}

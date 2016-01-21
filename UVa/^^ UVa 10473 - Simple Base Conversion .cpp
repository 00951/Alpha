#include<stdio.h>
#include<stdlib.h>
int main()
{
    long a;
    char b[35];
    while(gets(b))
    {
        if(b[0]=='0' && b[1]=='x')
            {
                a=strtol(b,NULL,16);
                printf("%ld\n",a);
            }
        else
        {
            a=atol(b);
            if(a<0)
                break;
            else printf("0x%X\n",a);
        }
    }
    return 0;
}





----------------------------------------------



#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)


LL pown(LL b, LL p){
    LL ans=1;
    rep(i,1,p){
        ans*=b;
    }
    return ans;
}

int main()
{
    char n[1234567];
    LL l;

    while(gets(n)){

        if(n[0]=='-')
            break;

        if(n[0]=='0' && n[1]=='x'){

            l=strlen(n);
            LL k=0, sum=0, dig;

            rev(i,l-1,2){

                if(n[i]=='A')      dig=10;
                else if(n[i]=='B') dig=11;
                else if(n[i]=='C') dig=12;
                else if(n[i]=='D') dig=13;
                else if(n[i]=='E') dig=14;
                else if(n[i]=='F') dig=15;
                else dig=n[i]-48;

                sum+=dig*pown(16, k++);
            }
            cout << sum << endl;

        }else{

            LL num=0, k=0;
            LL l=strlen(n);

            rev(i,l-1,0)
              num+=(n[i]-48)*pown(10,k++);

           k=0;
           char hexa[12345];

            while(num>0){

                if(num%16==10)      hexa[k++]='A';
                else if(num%16==11) hexa[k++]='B';
                else if(num%16==12) hexa[k++]='C';
                else if(num%16==13) hexa[k++]='D';
                else if(num%16==14) hexa[k++]='E';
                else if(num%16==15) hexa[k++]='F';
                else hexa[k++]=num%16+48;

                num/=16;
            }

            cout << "0x";

            rev(i,k-1,0)
                cout << hexa[i];

            cout << endl;
        }
    }
    return 0;
}

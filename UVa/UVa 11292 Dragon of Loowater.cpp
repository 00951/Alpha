#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int main()
{

    LL fl,hd,knt,sum;

    while(cin>>hd>>knt)
    {
        LL hdd[hd+2],kntt[knt+2];

        if(hd==0 && knt==0)
            break;

        fl=0;

        rep(i,1,hd)
            cin>>hdd[i];
        rep(i,1,knt)
            cin>>kntt[i];

        sort(hdd+1, hdd+hd+1);
        sort(kntt+1, kntt+knt+1);

        if(knt==hd){
            sum=0;
            rep(i,1,hd){
                if(kntt[i]<hdd[i]){
                        fl=1;
                        break;
                }else
                    sum+=kntt[i];
            }
        }else if(knt>hd){
            sum=0;
            LL sz=1;
            rep(i,1,hd){
                fl=1;
                rep(j,sz,knt){
                    if(hdd[i]<=kntt[j]){
                        sum+=kntt[j];
                        sz=j+1;
                        fl=0;
                        break;
                    }
                }
                if(fl==1)
                    break;
            }
        }
        else
            fl=1;

        if(fl==1)
            cout << "Loowater is doomed!" << endl;
        else if(fl==0)
            cout << sum << endl;

    }
    return 0;
}






#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,t,n,a,b,x[100000],y[100000];
    
    cin>>n;
    
    for(i=0;i<n;i++)
        scanf("%d%d",&x[i],&y[i]);
    
    sort(x,x+n);
    sort(y,y+n);
    
    int l=abs(x[0]-x[n-1]);
    int w=abs(y[0]-y[n-1]);
    int area=l*w;
    
    if(n==1 || area==0)
        cout<<"-1"<<endl;
    else
        cout<<area<<endl;
        
    return 0;
}




--------------------------------------------------



#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int x[10] , y[10];

int main()
{
    int n;
    cin>>n;
    rep(i,1,n){
        cin>>x[i]>>y[i];
    }

    if(n<=1){
        puts("-1");
        return 0;
    }

    if(n==2){

        if( x[1]==x[2] || y[1]==y[2] ) puts("-1");
        else {
            int a = (x[2]-x[1]) * (y[2]-y[1]);
            if(a<0) a = -a;
            cout<<a<<endl;
        }

        return 0;
    }

    rep(i,1,n){
        rep(j,i+1,n){

            if(x[i]!=x[j] && y[i]!=y[j]){
                int a = (x[i]-x[j]) * (y[i]-y[j]);
                if(a<0) a = -a;
                cout<<a<<endl;

                return 0;
            }
        }
    }

    return 0;
}

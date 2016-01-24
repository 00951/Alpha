https://www.codechef.com/AUST2016/problems/AUSASA

// find lexographically shortest array after k swap .. only adjecent elements can be swapped.


#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll t,i,j,cs,n,m,p,q,a[1005],idx,mn,cnt;
//char c[1005][1005];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++)
        cin>>a[i];

         cnt=m;

        for(i=1;i<=n;i++)
        {
            mn=a[i];
            for(j=i+1;j<=cnt+i && j<=n;j++)
            {
                if(a[j]<mn)
                {
                    mn=a[j];
                    idx=j;
                }
            }

            while(idx-1>=i){
            swap(a[idx],a[idx-1]);
            idx--;
            cnt--;
            }
        }

        for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
}




#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
ll a[1000005];
int main()
{
    int T,n,l;
    cin>>T;
    for(int t=0;t<T;t++ )
    {
    	cin>>n>>l;

    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	for(int i=0;i<n;i++)
    	{
    		int pos=i;
    		for(int j=i+1;j<n;j++)
			{
				if(j-i>l)
					break;
				if(a[pos]>=a[j])
					pos=j;
			}
			if(i!=pos)
			{
				for(int k=pos;k>i;k--)
					swap(a[k],a[k-1]);
				l-=(pos-i);
			}
    	}
    	for(int i=0;i<n;i++)
    		cout<<a[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}

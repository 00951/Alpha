***//ncr using recursion....

-------------------------------------------/
int ncr(int n,int r)
{
	if(n==r) return 1;
	if(r==1) return n;
	return ncr(n-1,r) + ncr(n-1,r-1);
}
-------------------------------------------/

int main()
{
	int n,r;
	while(scanf("%d %d",&n,&r)==2){
        printf("%d\n",ncr(n,r));
	}
	return 0;
}


***//Calculating nCr......

------------------------------/
#include<stdio.h>

unsigned int P(int n,int r)
{
    unsigned int p=1;
    while(r--)
        p*=n--;
    return p;
}
--------------------------------/
int main()
{
    int n,r;
    while(cin>>n)
        cout << P(n,r) << endl;
}

--------------------------------/
--------------------------------/

int nCr(int n,int r){
    int i,d,ans=1;
    d=n-r;
    if(d<r)
        r=d;

    for(i=0;i<r;i++)
         ans=(ans*(n-i)/(i+1))%M;
    return ans;
}

/**********************************/

int main()
    {
        int n,r;
        scanf("%d %d",&n,&r);
        printf("%d",nCr(n,r));
    return 0;
}

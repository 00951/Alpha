vector<int>factors;
void factorize( int n ) {
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                factors.push_back(prime[i]);
            }
            sqrtn = sqrt ( n );
        }
    }
    if ( n != 1 ) {
        factors.push_back(n);
    }
}

----------------------------------------------------------------



#include <stdio.h>
#include <math.h>
#include <string.h>

int primes[7000];
bool a[60000];

int primeGen(int n)
{
    int i, j, k;
    memset(a,true,n);
    a[0]=a[1]=false;

    for(i=4;i<n;i+=2){
        a[i]=false;
    }
    for(i=3;i*i<n;i+=2){
        if(a[i]==true){
            for(j=i*i;j<n;j+=(2*i)){
                a[j]=false;
            }
        }
    }
    for(j=0,i=2;i<=n;i++){
        if(a[i]==true){
            primes[j++]=i;
        }
    }
    return j-1;
}

int main(){

    int i,j,n;

    int prm_lim=primeGen(60000);

    while(scanf("%d",&n) && n)
    {
        printf("%d =",n);

        if(n<0){
          printf(" -1 x");
          n=-n;
        }

        if(n==1){
            printf(" 1\n");
            continue;
        }

        for(j=0; primes[j]<n && j<prm_lim; j++)
        {
            while(n%primes[j]==0)
            {
                n/=primes[j];

                if(n>1)
                    printf(" %d x",primes[j]);
                else
                    printf(" %d",primes[j]);

            }
        }

        if(n>1)
            printf(" %d",n);

        printf("\n");
    }
    return 0;

}

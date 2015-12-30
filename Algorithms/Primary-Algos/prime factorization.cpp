int primes[7000];
bool a[60000];

int primeGen(int n){.......}

int main(){

    int i,j,n;

    int prm_lim=primeGen(60000);        //sqrt of limit 

    while(scanf("%d",&n) && n)
    {
        for(j=0; primes[j]<n && j<prm_lim; j++)
        {
            while(n%primes[j]==0)
            {
                n/=primes[j];
                printf(" %d",primes[j]);
            }
        }

        if(n>1)
            printf(" %d\n",n);
    }
    return 0;

}


/////////////////////////////////////////////////////////////////



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


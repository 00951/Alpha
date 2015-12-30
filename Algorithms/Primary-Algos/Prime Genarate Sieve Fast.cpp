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

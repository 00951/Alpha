// Cumulative Sum Demo 


    scanf("%d", &n);
    sum[0]=0;
    
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
        sum[i]=sum[i-1]+arr[i];
    }
    
    scanf("%d%d", &l, &r);
    cout<< "Sum from index" << l << "to index" << r << "is " << sum[r] - sum[l-1] << endl;





//Find Number of Prime Numbers Within a given range using cumulative sum

#include <stdio.h>
#include <string.h>

int main()
{
    int MAX=100000;
    int a, i, j, k, n,l,r, sum[MAX], arr[MAX];

    memset(arr, 0, sizeof arr);
    k=0;
    for(i=2; i<=MAX; i++){
        if(arr[i]==0){
            for(j=2*i; j<=MAX; j+=i){
                arr[j]=1;
            }
        }

/*************************************************/
        if(arr[i]==0)
            sum[i]=sum[i-1]+1;
        else
            sum[i]=sum[i-1];
    }
/*************************************************/

    printf("Enter the Range Within which you want to count the prime numbers: ");

    while(scanf("%d%d", &l, &r)==2){
        printf("%d\n", sum[r]-sum[l-1]);
    }

    return 0;
}

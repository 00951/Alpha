#include <stdio.h>

int main()
{
    long long n,T,a,b,jor,bijor,i,arr[10000], ans;

    while(scanf("%lld", &T)==1){

        a=0, b=0;

        for(i=1; i<=T; i++){
            scanf("%lld", &arr[i]);
            if(arr[i]%2==0){
                jor=i;
                a++;
              //printf("jor %lld  pos= %lld\n", arr[i], jor);
            }

            else{
                bijor=i;
                b++;
               //printf("bijor %lld  pos= %lld\n", arr[i], bijor);
            }

        }

        if(a>b)
            ans=bijor;
        else
            ans=jor;

        printf("%lld\n", ans);
    }
    return 0;
}


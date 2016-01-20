#include <stdio.h>

int main()
{
    int n, arr[100000], x, count, zero, one, i;

    while(scanf("%d", &n)==1){
                count=0;
        for(i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        for(i=0; i<n; i++){

            if(arr[i]==1)
                    count++;
            if(arr[i]==1 && arr[i+1]== 0 && arr[i+2]==1){
                count++;
            }
        }
        printf("%d\n", count);
        }
    return 0;
}

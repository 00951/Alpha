

/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int temp, arr[100000],count,i,j,n;

    while(scanf("%d", &n)==1){
            count=0;
        for(i=1; i<=n; i++){
            scanf("%d", &arr[i]);
        }

        for(i=1; i<=n-1; i++){
            for(j=n; j>i ; j--){
                if(arr[j]<arr[j-1]){
                    temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                    count++;
                }
            }
        }

        printf("Minimum exchange operations : %d\n", count);
    }
    return 0;
}

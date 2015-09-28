/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
 
int main()
{
    int T,m,n,i,x,arr[100000],flag;
    scanf("%d", &T);
 
    printf("Lumberjacks:\n");
 
    while(T--){
 
        flag=0;
 
        for(i=0; i<10; i++){
            scanf("%d", &arr[i]);
        }
 
        if(arr[0]>arr[1]){
 
            for(m=0; m<i-1; m++){
 
                for(n=m+1; n<i; n++){
 
                    if(arr[m]<arr[n]){
                        flag=1;
                        break;
                    }
                }
              }
        }else{
 
             for(m=0; m<i-1; m++){
                for(n=m+1; n<i; n++){
 
                    if(arr[m]>arr[n]){
                        flag=1;
                        break;
                    }
                }
              }
 
        }
 
        if(flag==0)
            printf("Ordered\n");
        else if(flag==1)
            printf("Unordered\n");
 
    }
    return 0;
}

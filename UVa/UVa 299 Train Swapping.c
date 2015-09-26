
/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int T,n,i,j,temp,count,train[100000];
    
    scanf("%d", &T);

    while(T--){
            
            count=0;
            scanf("%d", &n);

            for(i=0; i<n; i++){
                scanf("%d", &train[i]);
            }


            for(i=0; i<n-1; i++){

              for(j=i+1; j<n; j++){

                if(train[i] > train[j])
                    count++;

              }
              
            }

            printf("Optimal train swapping takes %d swaps.\n",count);
        }
    return 0;
}


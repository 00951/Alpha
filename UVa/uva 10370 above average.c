/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int T,T1,num,sum;
    int calc[10000];
    scanf("%d",&T);

    while(T--){
        scanf("%d", &T1);
        int i,sum=0;

        for(i=0; i<T1; i++){
            scanf("%d", &num);
            calc[i]=num;
            sum=sum+num;
        }
        
        int avg=sum/T1;
        int j,count=0;

       for(i=0;i<T1;i++){
            if(calc[i]>avg)
                count++;
        }
        
        double ans;
        ans=(count*100.00)/(double)T1;

       printf("%.3lf%%\n",ans);
    }
    return 0;
}

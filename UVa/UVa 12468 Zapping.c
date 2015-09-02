/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include < stdio.h >

int main()
{
    int a,b,ans1,ans2,fin_ans,max,min;

    while(1)
        {
            scanf("%d %d",&a ,&b);
            if(a==-1 && b==-1)
                break;
            if(a>b){
                max=a;
                min=b;
            }else{
                max=b;
                min=a;
            }
            ans1=max-min;
            ans2=(min-0)+(100-max);

            if(ans1>ans2)
                fin_ans=ans2;
            else
                fin_ans=ans1;

            printf("%d\n", fin_ans);
        }
    return 0;
}

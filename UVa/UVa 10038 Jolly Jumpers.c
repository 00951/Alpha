#include <stdio.h>
#include <math.h>

int main()
{
    long long n,t,i,j,p,flag,q,arr[100000],arr2[100000],temp;

    while(scanf("%lld", &n)==1)
    {
        j=0, flag=5;

// take arr input

        for(i=0; i<n; i++)
        {
            scanf("%lld", &arr[i]);
        }

//new arr2 of abs difference

        for(i=0; i<n-1; i++)
        {
            arr2[j]=abs(arr[i]-arr[i+1]);
            j++;
        }

        if(n==1)
        {
            printf("Jolly\n");
            continue;
        }
        else if(n==2)
        {
            if(arr2[0]==1)
            {
                printf("Jolly\n");
                continue;
            }
            else
            {
                printf("Not jolly\n");
                continue;
            }

        }

// sort new arry

        for(p=0; p<j-1; p++)
        {
            for(q=p+1; q<j; q++)
            {
                if(arr2[p]>arr2[q])
                {
                    temp=arr2[p];
                    arr2[p]=arr2[q];
                    arr2[q]=temp;
                }
            }
        }

// find jolly-not jolly from sorted array

        for(i=0; i<j; i++)
        {

            if(i+1==j)
                continue;

            if(arr2[i]+1==arr2[i+1])
            {
                flag=0;
            }
            else
            {

                flag=5;
                break;
            }
        }


        if(flag==5)
            printf("Not jolly\n");
        else if(flag==0)
            printf("Jolly\n");

    }

    return 0;
}

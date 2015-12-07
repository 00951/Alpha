#include<stdio.h>

int bsearch(int l,int h,int a[],int c)
{
    int pos;
    while(l<=h)
    {
        pos=(l+h)/2;
        if(a[pos]==c)
            return pos;
        else if(a[pos]<c)
            l=pos+1;
        else
            h=pos-1;
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int lh,fh,lm,fm,ans;

    while(scanf("%d %d %d %d", &fh, &fm, &lh, &lm)==4){

            ans=0;

         if(lm==0 && lh==0 && fm==0 && fh==0)
                break;

        if(lh==0) lh=24;
        if(fh==0) fh=24;

        if(lh==fh){
                if(lm>=fm)
                    ans=lm-fm;
                else if(fm>lm)
                    ans=23*60+(60-(fm-lm));
        }
        else if(lh>fh){
            if(lm>=fm)
                ans=(lh-fh)*60+(lm-fm);
            else if(lm<fm)
                ans=(lh-fh)*60-(fm-lm);
        }
        else if(fh>lh){
            if(lm>=fm)
                ans=(24 * 60 - (fh-lh)*60) + (lm-fm);
            else if(fm>lm)
                ans=24 * 60 - (fh-lh)*60 - (fm-lm);
        }
        printf("%d\n", ans);
    }
    return 0;
}




//  Alternate Solution......



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour1, hour2, minute1, minute2, time_sleep, time_start, time_end;

    while(scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2)==4)
    {
        if(hour1==0 && minute1==0 && hour2==0 && minute2==0)
            break;

        time_start=((hour1*60)+minute1);
        time_end=((hour2*60)+minute2);


        time_sleep=abs(time_end-time_start);

        if(time_start>time_end)
        {
            time_sleep=1440-time_sleep;
        }
        else if(time_start==time_end)
        {
            time_sleep=1440;
        }

        printf("%d\n", time_sleep);
    }
}

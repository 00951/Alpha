/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <math.h>

int main()
{
    double m1,m2,m3,sm,area;

    while(scanf("%lf %lf %lf", &m1, &m2, &m3)==3){

        sm=(m1+m2+m3)/2.0;
        area=(4.0/3.0)*sqrt(sm*(sm-m1)*(sm-m2)*(sm-m3));

        if(area>0)
            printf("%.3lf\n", area);
        else
            printf("-1.000\n");

    }
    return 0;
}





/*
Median of a triangle divides the triangle into two equal areas.

Use formula:
Area of Triangle=(4/3)sqrt[s⋅(sm−m1)⋅(sm−m2)⋅(sm−m3)]

where
m1 = Length of 1st median
m2 = Length of  2nd median
m3 = Length of 3rd median
sm=(m1+m2+m3)/2

*/

/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

	
#include <stdio.h>
#include <math.h>
#define pi 2 * acos (0)

int main(void)
{
    double r, N, polygon_area;

    while(scanf("%lf %lf",&r ,&N)==2){

            /*
             triangle area= 1/2*( ab sin C )   --- where the angle at center is (2*pi)/n
             multply triangle area with total sides of triangle -- then u'll get total area
            */

            polygon_area = N * 1/2 * r * r * sin( (2*pi)/N );

            printf("%.3lf\n", polygon_area);
        }
     return 0;
}

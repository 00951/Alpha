/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/



Problem: http://codeforces.com/problemset/problem/500/A



#include <bits/stdc++.h>
using namespace std;

int a[1234567];               //*

int main() {
  int n, t;
  scanf("%d %d", &n, &t);
  for (int i = 1; i < n; i++) {
    scanf("%d", a + i);             //*
  }
  int x = 1;
  while (x < t) {
    x += a[x];                 //*
  }
  puts(x == t ? "YES" : "NO");      //*
  return 0;
}




// or.......




#include <stdio.h>

int main()
{
    long long i, pos, current, cell, dest, arr[100000];

    while(scanf("%I64d%I64d", &cell, &dest)==2){

        for(i=1; i<=cell-1; i++){
            scanf("%I64d", &arr[i]);
        }

        pos=1;

        while(pos<dest){
            current=pos+arr[pos];          // x += a[x];
            pos=current;
        }

        if(current==dest)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;


int main() {
    int arr[123456], sum[123456], t, n, sl, sr, flg;
    cin >> t;
    while(t--){
        flg=0;
        cin >> n;
        sum[0]=0;
        
        for(int i=1; i<=n; i++){
            cin >> arr[i];
            sum[i]=sum[i-1]+arr[i];
          //  cout << sum[i] <<" ";
            
        }
     //   cout << endl;
        
        for(int i=1; i<=n; i++){
           
            sl = sum[i-1] - sum[0];     //sum of 0 to i-1    ->  sum[r] - sum[l-1]
            sr = sum[n] - sum[i];       // sum of i+1 to n
            
        //    cout <<sl << " " << sr <<  endl;
            
            if(sl==sr){
                flg=1;
                break;
            }
            
        }
        if(flg==1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}

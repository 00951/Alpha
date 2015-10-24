/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/



// Selection Sort (Ascending)

for(i=1; i<=n-1; i++){
    for(j=n; j>i ; j--){
          if(arr[j]<arr[j-1]){
              temp=arr[j];
              arr[j]=arr[j-1];
              arr[j-1]=temp;
          }
      }
  }
        
        
        
  // Bubble Sort (Ascending)
  
  for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){
          if(arr[j]<arr[j-1]){
              temp=arr[j];
              arr[j]=arr[j-1];
              arr[j-1]=temp;
          }
      }
  }

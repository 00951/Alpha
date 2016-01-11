// Buble Sort (Adjecent Cell)

for(i=1; i<=n-1; i++){
    for(j=n; j>i ; j--){
          if(arr[j]<arr[j-1])
             swap(a[j],a[j-1]);
      }
  }
        
        
        
  // Selection Sort (Not Adjecent)
  
  for(i=0; i<n; i++){
      for(j=i+1; j<n; j++){
          if(a[i]>a[j])
            swap(a[i],a[j]);
      }
  }
  
  
  // xtra adjecent .. dorkar nai.. surute bubble sort
  
  for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){
          if(arr[j]<arr[j-1]){
              temp=arr[j];
              arr[j]=arr[j-1];
              arr[j-1]=temp;
           }
       }
    }

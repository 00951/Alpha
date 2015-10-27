***// Find the Number of digits in any positive number

numdigit= (n>0) ? (int) log10 ((double) n) + 1 : 1;



***// A Recursive Function to return 10 for input 1, to return 100 for input 2 & to return 1000 for 3


long long x100for2_1000for3_func(int x)
{
    if(x==0)
        return 1;
    else
        return 10*x100for2_1000for3_func(x-1);
}

int main()
{
    int n,i,j,k;
    cin>>n;
    cout<<x100for2_1000for3_func(n)<<endl;
    main();
}



***// Find Leap Year or Not

const string L = "Leap Year";

 if( ( yr%4==0 && yr%100!=0 ) || yr%400==0 ) 
            
            cout<< L <<endl;
    


***// Modulus of a string number 

ll mod(string num, ll m){

    ll mod21=0, len=num.size();

    for(ll i=0; i<len; i++){
        mod21=((mod21*10) + num[i]-'0') % m;
    }
    return mod21;
}


            

***// 

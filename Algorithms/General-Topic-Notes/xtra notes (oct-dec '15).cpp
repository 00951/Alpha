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



***// 

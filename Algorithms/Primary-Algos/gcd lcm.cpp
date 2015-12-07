int gcd(int a, int b)
{
    if (b==0) 
        return a;
        
    return gcd(b,a%b);
}

-------------------------------------------------

int lcm(int a, int b)
{
    return (b*a)/gcd(a,b);
}

-------------------------------------------------

The GCD of more than two numbers: -> gcd(a,b,c) = gcd(gcd(a,b),c)

--------------------------------------------------

int gcd_slow(int num1, int num2){
  
  int mn=min(num1,num2);
  
  for(i=mn;i>=1;--i)
  {
      if(num1%i==0 && num2%i==0)
      {
          printf("HCF of %d and %d is %d", num1, num2,i);
           break;
      }
  }
}

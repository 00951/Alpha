The GCD of more than two numbers can be calculated as

GCD(a,b,c) = GCD(GCD(a,b),c)



Normal GCD Algorithm

int main()
{
  scanf("%d %d", &num1, &num2);
  min=(num1>num2)?num2:num1;
  
  for(i=min;i>=1;--i)
  {
      if(num1%i==0 && num2%i==0)
      {
          printf("HCF of %d and %d is %d", num1, num2,i);
           break;
      }
  }
  return 0;
}




Euclidean GCD Algorithm

    int gcd(a, b) {
        
        if(a>b) swap(a,b);
        
        while (b != 0) {
            t = b;
            b = a % b; \\ a mod b
            a = t;
        }
        
        return a;
    }




GCD Recursive version  

    int gcd(a, b) {
        
        if(a>b) swap(a,b);
        
        if (b == 0) 
            return a;
        else
            return gcd(b, a % b);
    }

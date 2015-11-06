The GCD of more than two numbers can be calculated as

GCD(a,b,c) = GCD(GCD(a,b),c)


Euclidean GCD Algorithm

    int gcd(a, b) {
        while (b != 0) {
            t = b;
            b = a % b; \\ a mod b
            a = t;
        }
        return a;
    }



GCD Recursive version  

    int gcd(a, b) {
        if (b = 0) 
            return a;
        else
            return gcd(b, a % b);
    }

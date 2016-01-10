// palindrome checking with recursion


int isPali(char *s, int l, int r)
{
    return ((l >= r) || (s[l] == s[r] && isPali(s, l+1, r-1)));
}

int main()
{
    char str[1234];
    
    scanf("%s", str);

    if(isPali(str, 0, strlen(str)-1))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0 ;
}

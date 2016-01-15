//int to string

string int2str(int k)
{
    if (k == 0)
        return "0";
    
    string s = "";
    while (k > 0)
        s += '0' + k % 10, k /= 10;    
    reverse(all(s));
    return s;
}

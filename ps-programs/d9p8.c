int trailingZeroes(int n){
    for(int i=1;i<=n;i++)
    {int fact=fact*i;}    
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}

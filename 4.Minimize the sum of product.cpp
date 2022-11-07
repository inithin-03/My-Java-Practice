class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n,greater<long long int>());
        long long int minsum=0;
        for(long long int i=0;i<n;i++)
        {
            minsum+=a[i]*b[i];
        }
        return minsum;
    }
};

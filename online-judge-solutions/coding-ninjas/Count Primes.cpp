vector<int> countPrimes(int n)
{
    vector<int> ans;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ans.push_back(i);
            while (n % i == 0) {
                n = n / i;
            }
        }
    }
    if (n != 1) {
        ans.push_back(n);
    }
    
    return ans;
}
#include <iostream>

void evendigits(long long int&, int&);

int main()
{
    int ans = 0;
    int* pans = &ans;
    long long int n = 9223372036854775806;
    std::cout << ans << std::endl;
    
    evendigits(n, ans);
    
    std::cout << ans << std::endl;
}

void evendigits(long long int &n, int& ans)
{
    int temp;
    while (n)
    {
        temp = n % 10;
        
        if (temp % 2 == 0)
        {
            ans+=1;
        }
        n /= 10;
        
    }
}

#include <iostream>

void evendigits(long long, int&);

int main()
{
    int ans = 0;
    long long n = 9223372036854775806;
    std::cout << ans << std::endl;
    
    evendigits(9223372036854775806, ans);
    
    std::cout << ans << std::endl;
}

void evendigits(long long n, int& ans)
{
    while (n)
    {
        int temp = n % 10;
        if (temp % 2 == 0)
            ans++;

        evendigits(n / 10, ans);
    }
    
    /*while (n)
    {
        temp = n % 10;
        
        if (temp % 2 == 0)
        {
            ans+=1;
        }
        n /= 10; 
        
    }*/
}

#include <iostream>
#include <cassert>

void evendigits(long long&, int&);

int main()
{
    int ans = 0;
    long long n = 9223372036854775806;
    std::cout << ans << std::endl;
    
    evendigits(n, ans);
    
    std::cout << ans << std::endl;
}

void evendigits(long long& n, int& ans)
{
    
    while(n)
    {
        int temp = n % 10;\
        if (temp % 2 == 0)
        {
            ans++;
        }
        if (temp==9) break;
        n /= 10;
              
        evendigits(n, ans);
        
    }
    
    /*while (n)
    {
        int temp = n % 10;
        
        if (temp % 2 == 0)
        {
            ans++;
        }
        n /= 10; 
        
    }*/
}

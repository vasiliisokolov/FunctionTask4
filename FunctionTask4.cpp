#include <iostream>

void evendigits(long&, int*);

int main()
{
    int ans = 0;
    long n = 9223372036854775806;
    evendigits(n, &ans);
    std::cout << ans;
}

void evendigits(long &n, int *ans)
{
    std::cout << n << std::endl;
    std::cout << ans << std::endl;
}

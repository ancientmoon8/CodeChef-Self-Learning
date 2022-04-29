#include <iostream>
#define distance (abs(c - a) + abs(d - b))

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int a = 0, b = 0, c = 0, d = 0, K = 0;
        std::cin >> a >> b >> c >> d >> K;
        if (K >= distance && ((distance & 1) == (K & 1)))
        {
            std::cout << "Yes" << '\n';
        }
        else
        {
            std::cout << "No" << '\n';
        }
    }
}
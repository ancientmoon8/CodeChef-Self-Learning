#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int D = 0, L = 0, R = 0;
        std::cin >> D >> L >> R;
        if (D >= L && D <= R)
        {
            std::cout << "Take second dose now" << '\n';
        }
        else if (D > R)
        {
            std::cout << "Too Late" << '\n';
        }
        else if (D < R)
        {
            std::cout << "Too Early" << '\n';
        }
    }
}
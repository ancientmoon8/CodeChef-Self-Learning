#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int x = 0;
        std::cin >> x;
        if (x >= 1 && x < 100)
        {
            std::cout << "Easy" << '\n';
        }
        else if (x >= 100 && x < 200)
        {
            std::cout << "Medium" << '\n';
        }
        else if (x >= 200 && x <= 300)
        {
            std::cout << "Hard" << '\n';
        }
    }
}
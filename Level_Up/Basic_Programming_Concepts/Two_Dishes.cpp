#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, A = 0, B = 0, C = 0;
        std::cin >> N >> A >> B >> C;
        if (B >= N && N <= (A + C))
        {
            std::cout << "YES" << '\n';
        }
        else
        {
            std::cout << "NO" << '\n';
        }
    }
}
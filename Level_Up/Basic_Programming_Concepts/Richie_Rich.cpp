#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int A = 0, B = 0, X = 0;
        std::cin >> A >> B >> X;
        std::cout << (B - A) / X << '\n';
    }
    return 0;
}

#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        long S = 0, A = 0, B = 0;
        int C = 0;
        std::cin >> S >> A >> B >> C;
        S += S * C * 0.01;
        std::cout << ((S >= A && S <= B) ? "Yes" : "No") << '\n';
    }
}
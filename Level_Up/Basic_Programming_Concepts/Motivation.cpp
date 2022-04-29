#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, X = 0, maxR = 0;
        std::cin >> N >> X;
        for (int i = 0; i < N; ++i)
        {
            int S = 0, R = 0;
            std::cin >> S >> R;
            if (S <= X && R > maxR)
            {
                maxR = R;
            }
        }
        std::cout << maxR << '\n';
    }
}
#include <climits>
#include <iostream>
#include <vector>

int chefAndLinearChess(int &K, std::vector<int> &P)
{
    int min = INT_MAX, player = -1;
    for (int i = 0; i < P.size(); ++i)
    {
        if (K % P[i] == 0)
        {
            if (min > (K / P[i]))
            {
                min = (K / P[i]);
                player = P[i];
            }
        }
    }
    return player;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, K = 0;
        std::cin >> N >> K;
        std::vector<int> P(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> P[i];
        }
        std::cout << chefAndLinearChess(K, P) << '\n';
    }
}
#include <iostream>
#include <vector>

long collegeLife2(std::vector<int> &Q, std::vector<std::vector<int>> &L)
{
    long duration = 0;
    for (int i = 0; i < L.size(); ++i)
    {
        for (int j = 0; j < L[i].size(); ++j)
        {
            duration += L[i][j];
        }
        if (L[i].size() > 1)
        {
            duration -= Q[i] * (L[i].size() - 1);
        }
    }
    return duration;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int S = 0;
        std::cin >> S;
        std::vector<int> Q(S);
        for (int i = 0; i < S; ++i)
        {
            std::cin >> Q[i];
        }
        std::vector<std::vector<int>> L(S);
        for (int i = 0; i < S; ++i)
        {
            int E = 0;
            std::cin >> E;
            std::vector<int> temp(E);
            for (int j = 0; j < E; ++j)
            {
                std::cin >> temp[j];
            }
            L[i] = temp;
        }
        std::cout << collegeLife2(Q, L) << '\n';
    }
}
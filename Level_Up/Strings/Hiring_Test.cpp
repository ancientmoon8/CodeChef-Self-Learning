#include <iostream>
#include <vector>

std::string hiringTest(int &X, int &Y, std::vector<std::string> &C)
{
    std::string result = "";
    for (int i = 0; i < C.size(); ++i)
    {
        int P = 0, F = 0;
        for (int j = 0; j < C[i].size(); ++j)
        {
            if (C[i][j] == 'P')
            {
                P++;
            }
            if (C[i][j] == 'F')
            {
                F++;
            }
        }
        if ((F >= X) || ((F >= (X - 1)) && (P >= Y)))
        {
            result += '1';
        }
        else
        {
            result += '0';
        }
    }
    return result;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, M = 0, X = 0, Y = 0;
        std::cin >> N >> M >> X >> Y;
        std::vector<std::string> C;
        for (int i = 0; i < N; ++i)
        {
            std::string R;
            std::cin >> R;
            C.push_back(R);
        }
        std::cout << hiringTest(X, Y, C) << '\n';
    }
}
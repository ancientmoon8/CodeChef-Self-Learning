#include <iostream>
#include <vector>

int copsAndTheThiefDevu(int &x, int &y, std::vector<int> &H)
{
    std::vector<bool> safeHouses(101, true);
    for (int i = 0; i < H.size(); ++i)
    {
        int from = (H[i] - (x * y));
        int to = (H[i] + (x * y));
        if (from < 1)
        {
            from = 1;
        }
        if (to > 100)
        {
            to = 100;
        }
        for (int j = from; j <= to; ++j)
        {
            safeHouses[j] = false;
        }
    }
    int count = 0;
    for (int i = 1; i < safeHouses.size(); ++i)
    {
        if (safeHouses[i] == true)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int M = 0, x = 0, y = 0;
        std::cin >> M >> x >> y;
        std::vector<int> H(M);
        for (int i = 0; i < M; ++i)
        {
            std::cin >> H[i];
        }
        std::cout << copsAndTheThiefDevu(x, y, H) << '\n';
    }
}
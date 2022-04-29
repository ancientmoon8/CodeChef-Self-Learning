#include <iostream>
#include <map>
#include <utility>
#include <vector>

int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0;
        std::cin >> N;
        std::vector<std::pair<int, int>> V;
        std::map<int, int> mapX;
        std::map<int, int> mapY;
        for (int i = 0; i < 4 * N - 1; ++i)
        {
            int x = 0, y = 0;
            std::cin >> x >> y;
            mapX[x]++;
            mapY[y]++;
        }
        int temp1 = 0;
        for (auto itX = mapX.begin(); itX != mapX.end(); ++itX)
        {
            if ((itX->second & 1) == 1)
            {
                temp1 = itX->first;
                break;
            }
        }
        int temp2 = 0;
        for (auto itY = mapY.begin(); itY != mapY.end(); ++itY)
        {
            if ((itY->second & 1) == 1)
            {
                temp2 = itY->first;
                break;
            }
        }
        std::cout << temp1 << ' ' << temp2 << '\n';
    }
}
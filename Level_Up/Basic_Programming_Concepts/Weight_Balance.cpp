#include <iostream>

int main()
{
    int T = 0, flag = 1;
    std::cin >> T;
    while (T--)
    {
        int w1 = 0, w2 = 0, x1 = 0, x2 = 0, M = 0;
        std::cin >> w1 >> w2 >> x1 >> x2 >> M;
        for (int i = x1 * M; i <= x2 * M; ++i)
        {
            if ((w2 - w1) == i)
            {
                std::cout << "1\n";
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            std::cout << "0\n";
        }
        flag = 1;
    }
}

#include <iostream>
#include <vector>

int gasolineIntroduction(std::vector<int> &f)
{
    int fuel = 0, dist = 0;
    for (int i = 0; i < f.size(); ++i)
    {
        fuel += f[i];
        if (fuel > 0)
        {
            dist += 1;
            fuel -= 1;
        }
        else
        {
            return dist;
        }
    }
    dist += fuel;
    return dist;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0;
        std::cin >> N;
        std::vector<int> f(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> f[i];
        }
        std::cout << gasolineIntroduction(f) << '\n';
    }
}
#include <iostream>
#include <vector>

int chefInVaccinationQueue(int &P, int &X, int &Y, std::vector<int> &vac)
{
    int time = 0;
    for (int i = 0; i < vac.size(); ++i)
    {
        if (i == P)
        {
            break;
        }
        if (vac[i] == 0)
        {
            time += X;
        }
        else
        {
            time += Y;
        }
    }
    return time;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, P = 0, X = 0, Y = 0;
        std::cin >> N >> P >> X >> Y;
        std::vector<int> vac(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> vac[i];
        }
        std::cout << chefInVaccinationQueue(P, X, Y, vac) << '\n';
    }
}
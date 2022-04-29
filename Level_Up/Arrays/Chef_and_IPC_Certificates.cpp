#include <iostream>
#include <vector>

int chefAndIPCCertificates(int &N, int &M, int &K, std::vector<std::vector<int>> &stu)
{
    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        int duration = 0;
        if (stu[i][K] > 10)
        {
            continue;
        }
        for (int j = 0; j < K; ++j)
        {
            duration += stu[i][j];
        }
        if (duration >= M)
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
    int N = 0, M = 0, K = 0;
    std::cin >> N >> M >> K;
    std::vector<std::vector<int>> stu(N);
    for (int i = 0; i < N; ++i)
    {
        std::vector<int> temp(K + 1);
        for (int j = 0; j < K + 1; ++j)
        {
            std::cin >> temp[j];
        }
        stu[i] = temp;
    }
    std::cout << chefAndIPCCertificates(N, M, K, stu) << '\n';
}
#include <iostream>
#include <vector>

std::vector<int> indivisiblePermutation(int &N)
{
    std::vector<int> result;
    for (int i = 1; i <= N; ++i)
    {
        result.push_back(i);
    }
    if ((N & 1) == 0)
    {
        for (int i = 0; i < N; i += 2)
        {
            std::swap(result[i], result[i + 1]);
        }
    }
    else
    {
        for (int i = 1; i < N; i += 2)
        {
            std::swap(result[i], result[i + 1]);
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
        int N = 0;
        std::cin >> N;
        std::vector<int> result = indivisiblePermutation(N);
        for (int i = 0; i < result.size(); ++i)
        {
            std::cout << result[i] << ' ';
        }
        std::cout << '\n';
    }
}
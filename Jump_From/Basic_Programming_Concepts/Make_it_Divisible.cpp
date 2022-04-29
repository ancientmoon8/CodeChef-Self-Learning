#include <iostream>

std::string makeItDivisible(int &N)
{
    if (N == 1)
    {
        return "3";
    }
    std::string result = "";
    result += "1";
    for (int i = 0; i < N - 2; ++i)
    {
        result += "0";
    }
    result += "5";
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
        std::cout << makeItDivisible(N) << '\n';
    }
}
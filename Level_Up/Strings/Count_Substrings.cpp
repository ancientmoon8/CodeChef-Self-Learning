#include <iostream>

long countSubstrings(std::string &S)
{
    long count = 0;
    for (int i = 0; i < S.length(); ++i)
    {
        if (S[i] == '1')
        {
            count++;
        }
    }
    return ((count * (count + 1)) / 2);
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
        std::string S;
        std::cin >> S;
        std::cout << countSubstrings(S) << '\n';
    }
}
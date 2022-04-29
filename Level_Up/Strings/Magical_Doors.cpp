#include <iostream>

int magicalDoors(std::string &S)
{
    int count = 1;
    for (int i = 1; i < S.length(); ++i)
    {
        if (S[i] != S[i - 1])
        {
            count++;
        }
    }
    return (S[0] == '1') ? count - 1 : count;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        std::string S;
        std::cin >> S;
        std::cout << magicalDoors(S) << '\n';
    }
}
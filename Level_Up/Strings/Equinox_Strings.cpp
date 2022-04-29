#include <iostream>
#include <unordered_set>
#include <vector>

std::string equinoxStrings(long &A, long &B, std::vector<std::string> &S)
{
    long sar = 0, anu = 0;
    std::unordered_set<char> us = {'E', 'Q', 'U', 'I', 'N', 'O', 'X'};
    for (int i = 0; i < S.size(); ++i)
    {
        if (us.find(S[i][0]) != us.end())
        {
            sar += A;
        }
        else
        {
            anu += B;
        }
    }
    if (sar == anu)
    {
        return "DRAW";
    }
    else if (sar > anu)
    {
        return "SARTHAK";
    }
    else
    {
        return "ANURADHA";
    }
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
        long A = 0, B = 0;
        std::cin >> A >> B;
        std::vector<std::string> S(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> S[i];
        }
        std::cout << equinoxStrings(A, B, S) << '\n';
    }
}
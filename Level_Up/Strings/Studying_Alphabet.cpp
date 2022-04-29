#include <iostream>
#include <unordered_set>

bool studyingAlphabet(std::string &S, std::string &W)
{
    std::unordered_set<char> us;
    for (int i = 0; i < S.length(); ++i)
    {
        us.insert(S[i]);
    }
    for (int i = 0; i < W.length(); ++i)
    {
        if (us.find(W[i]) == us.end())
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::string S;
    std::cin >> S;
    int N = 0;
    std::cin >> N;
    std::string W;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> W;
        std::cout << (studyingAlphabet(S, W) ? "Yes" : "No") << '\n';
    }
}
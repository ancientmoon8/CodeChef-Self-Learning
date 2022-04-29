#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, K = 0;
        std::cin >> N >> K;
        std::vector<int> S(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> S[i];
        }
        std::vector<bool> B(*std::max_element(S.begin(), S.end()) + 1, false);
        for (int i = 0; i < S.size(); ++i)
        {
            B[S[i]] = true;
        }
        int mex = 0;
        for (mex = 0; mex < B.size(); ++mex)
        {
            if (K == 0 && B[mex] == false)
            {
                break;
            }
            if (B[mex] == false)
            {
                K--;
            }
        }
        std::cout << mex + K << '\n';
    }
}

#include <algorithm>
#include <iostream>
#include <vector>

int aSubtaskProblem(int &M, int &K, std::vector<int> &A)
{
    bool flag = true;
    int passed = 0, firstM = 0, score = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] == 1)
        {
            if (flag == true)
            {
                flag = true;
                firstM++;
            }
            passed++;
        }
        else
        {
            flag = false;
        }
    }
    if (passed == A.size())
    {
        score = 100;
    }
    else if (passed != A.size() && firstM >= M)
    {
        score = K;
    }
    return score;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, M = 0, K = 0;
        std::cin >> N >> M >> K;
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << aSubtaskProblem(M, K, A) << '\n';
    }
}
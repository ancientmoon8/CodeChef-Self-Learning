#include <iostream>
#include <map>
#include <vector>

int averageFlex(std::vector<int> &A)
{
    std::map<int, int> freq;
    for (int i = 0; i < A.size(); ++i)
    {
        freq[A[i]]++;
    }
    int ans = 0, count = 0;
    for (int i = 0; i < freq.size(); ++i)
    {
        count += freq[i];
        if (count > A.size() - count)
        {
            ans += freq[i];
        }
    }
    return ans;
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
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << averageFlex(A) << '\n';
    }
}
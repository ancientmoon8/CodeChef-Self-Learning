#include <iostream>
#include <unordered_map>
#include <vector>

#define int long long
using namespace std;

bool sortChecker(std::vector<int> &A, std::vector<int> &B)
{
    std::unordered_map<int, int> uma;
    std::unordered_map<int, int> umb;
    for (int i = 0; i < A.size(); ++i)
    {
        uma[A[i]]++;
        umb[B[i]]++;
    }
    for (auto it1 = uma.begin(); it1 != uma.end(); ++it1)
    {
        if (umb[it1->first] != it1->second)
        {
            return false;
        }
    }
    for (int i = 1; i < A.size(); ++i)
    {
        if (B[i] < B[i - 1])
        {
            return false;
        }
    }
    return true;
}

int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        long N = 0;
        std::cin >> N;
        std::vector<int> A(N);
        std::vector<int> B(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        for (int i = 0; i < N; ++i)
        {
            std::cin >> B[i];
        }
        std::cout << (sortChecker(A, B) ? "yes" : "no") << '\n';
    }
}
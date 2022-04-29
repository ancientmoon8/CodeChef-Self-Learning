#include <algorithm>
#include <iostream>
#include <vector>

#define int long long
using namespace std;

void countingSort(std::vector<int> &A)
{
    std::vector<int> index(*std::max_element(A.begin(), A.end()) + 1);
    std::vector<int> sorted(A.size());
    for (int i = 0; i < A.size(); ++i)
    {
        index[A[i]]++;
    }
    for (int i = 1; i < index.size(); ++i)
    {
        index[i] += index[i - 1];
    }
    for (int i = 0; i < A.size(); ++i)
    {
        sorted[index[A[i]] - 1] = A[i];
        index[A[i]]--;
    }
    for (int i = 0; i < A.size(); ++i)
    {
        A[i] = sorted[i];
    }
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
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        countingSort(A);
        for (int i = 0; i < N; ++i)
        {
            std::cout << A[i] << ' ';
        }
        std::cout << '\n';
    }
}
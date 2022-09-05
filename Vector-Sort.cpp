//#include <cmath>
//#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, x;
    vector<int> v;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++)
    {
        std::cout << v[i] << " ";
    }
    return 0;
}

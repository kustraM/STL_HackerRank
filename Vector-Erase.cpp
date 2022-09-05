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
    int remove;
    std::cin >> remove;
    v.erase(v.begin() + remove - 1);

    int range_begin, range_end;
    std::cin >> range_begin >> range_end;
    v.erase(v.begin() + range_begin - 1, v.begin() + range_end - 1);
    std::cout << v.size() << std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
}

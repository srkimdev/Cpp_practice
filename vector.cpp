#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
                                                        
    for(unsigned i = 0; i < v.size(); i++)
       std::cout << v[i] << " ";
    std::cout << std::endl;

    v[0] = 10;
    int n = v[2];
    v.at(2) = 5;

    for (auto& i : v) // 범위 기반의 for문
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

void print(int value) {
    std::cout << value << " ";
}

bool isEven(int value) {
    return (value % 2 == 0);
}

int main() {
    std::vector<int> vec;

    vec.push_back(17); 
    vec.push_back(10);
    vec.push_back(13); 
    vec.push_back(10);
    vec.push_back(15); 
    vec.push_back(11);

    std::cout << "원본 벡터" << std::endl;
    std::for_each(vec.begin(), vec.end(), print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "오름차순으로 정렬된 벡터" << std::endl;
    std::sort(vec.begin(), vec.end());
    std::for_each(vec.begin(), vec.end(), print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "역순으로 벡터 원소 출력" << std::endl;
    std::reverse(vec.begin(), vec.end());
    std::for_each(vec.begin(), vec.end(), print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "2 회전 후 벡터 원소 출력" << std::endl;
    std::rotate(vec.begin(), vec.begin()+2, vec.end()); 
    for_each(vec.begin(), vec.end(), print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "임의 순서로 정렬 된 벡터 원소 출력" << std::endl;
    std::random_shuffle(vec.begin(), vec.end()); 
    for_each(vec.begin(), vec.end(), print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "원소 값 10의 개수: ";
    std::cout << count(vec.begin(), vec.end(), 10);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "짝수 값을 갖는 원소 개수: ";
    std::cout << count_if(vec.begin(), vec.end(), isEven); //isEven이 참인 원소의 개수를 반환
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Found 15 in vector? " << std::boolalpha;
    std::cout << binary_search(vec.begin(), vec.end(), 15) << std::endl; //이진 탐색

    return 0;
}

#include <iostream>

class BaseArray {
    int capacity;
    int *mem;

    protected:
        BaseArray(int capacity = 100) {
            this -> capacity = capacity;
            mem = new int[capacity];
        }
        ~BaseArray() {
            delete [] mem;
        }
        void put(int index, int val) {
            mem[index] = val;
        }
        int get(int index) {
            return mem[index];
        }
        int getCapacity() {
            return capacity;
        }
};

class MyQueue : public BaseArray {
    int size; // 원소의 개수

    public:
        MyQueue() : BaseArray(), size(0) {}
        void put_queue(int i, int val);
        void show_queue();
        void delete_queue();
        int getSize();
};

void MyQueue::put_queue(int index, int val) {
    put(index, val);
    size ++;
}

void MyQueue::show_queue() {
    std::cout << "큐의 용량 : " << getCapacity() << ", 큐의 크기 : " << getSize() << std::endl;
}

void MyQueue::delete_queue() {
    std::cout << "큐의 원소를 순서대로 제거하여 출력한다 >> ";
    int size1 = getSize();
    for (int i = 0; i < getSize(); i++) {
        std::cout << get(i) << " ";
        size1--;
    }
    std::cout << std::endl;
    size = size1;
}

int MyQueue::getSize() {
    return size;
}

int main() {
    int num;
    int q_num;

    std::cout << "큐에 삽입할 정수개수를 입력하세요 >> ";
    std::cin >> num;

    MyQueue queue;

    for(int i = 0; i < num; i++) {
        std::cout << i+1 << " ) ";
        std::cin >> q_num;
        queue.put_queue(i, q_num);
    }
    queue.show_queue();
    queue.delete_queue();

    std::cout << "큐의 현재 크기 : " << queue.getSize() << std::endl;
    return 0;
}
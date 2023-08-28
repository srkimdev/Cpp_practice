#include <iostream>

template <typename T>
class Stack {
    T *ptr;
    int capacity;
    int size;

    public:
        Stack(int capacity);
        ~Stack();
        void push(const T& element);
        T pop();
};

template <typename T>
void Stack <T>::push(const T& element) {
    if (size < capacity) {
        ptr[size] = element;
        size++;
    }
    else    
        std::cout << "stack is full" << std::endl;
        return;
}

template <typename T>
Stack <T>::Stack(int cap) : capacity(cap), size(0) {
    ptr = new T[capacity];
}

template <typename T>
Stack <T>::~Stack() {
    delete ptr;
}

template <typename T>
T Stack <T>::pop() {
    if (size > 0) {
        T temp = ptr[size - 1];
        size--;
        return temp;
    }
    else {
        std::cout << "stack is empty" << std::endl;
        return 0;
    }
}

int main() {
    Stack<int> stack(10);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(3);
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    return 0;
}
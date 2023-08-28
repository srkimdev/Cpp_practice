#include <iostream>

template <typename T1, typename T2>
class GClass {
    T1 data1;
    T2 data2;

    public:
        GClass(T1 a, T2 b);
        void set(T1 a, T2 b);
        void get(T1& a, T2& b);
};

template <class T1, class T2>
GClass<T1, T2>::GClass(T1 a, T2 b) : data1(a), data2(b) {}

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    data1 = a;
    data2 = b;
}

template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
    a = data1;
    b = data2;
}

int main() {
    int a;
    double b;

    GClass<int, double> x(30, 3.5);
    x.get(a, b);
    std::cout << "a = " << a << '\t' << "b = " << b << std::endl;
    x.set(2, 0.5);

    char c;
    float d;

    GClass<char, float> y('c', 3.4);
    y.get(c, d);
    std::cout << "c = " << c << '\t' << "d = " << d << std::endl;

    y.set('m', 12.5);
    y.get(c, d);
    std::cout << "c = " << c << '\t' << "d = " << d << std::endl;

    return 0;
}
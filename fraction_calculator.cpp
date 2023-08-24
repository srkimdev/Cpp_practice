#include <iostream>

class Fraction {
    int numer;
    int denom;
    int max;

    public:
        Fraction(int num, int den) : numer(num), denom(den) {
            normalize();
        }
        Fraction() {};
        ~Fraction() {};

        int getNumer();
        int getDenom();

        void print();

    private:
        void normalize();
        int gcd(int n, int m);
};

void Fraction::normalize() {
    int devision = gcd(numer, denom);
    numer = numer / devision;
    denom = denom / devision;
}

int Fraction::gcd(int n, int m) {
    for(int i = 1; i <= n && i <= m; i++) {
        if((n % i == 0) && (m % i == 0)) {
            max = i;
        }
    }
    return max;
}

void Fraction::print() {
    std::cout << numer << "/" << denom << std::endl;
}

int Fraction::getNumer() {
    return numer;
}

int Fraction::getDenom() {
    return denom;
}

Fraction& findlargest (Fraction& fr1, Fraction& fr2, Fraction& fr3) {
    int a, b, c, a1, b1, c1, max;

    a = fr1.getDenom();
    b = fr2.getDenom();
    c = fr3.getDenom();

    a1 = fr1.getNumer() * b * c;
    b1 = fr2.getNumer() * a * c;
    c1 = fr3.getNumer() * a * b;

    max = (a1 > b1) ? (a1 > c1 ? a1 : c1) : (b1 > c1 ? b1 : c1); 
    
    if (max == a1) {
        return fr1;
    }
    else if (max == b1) {
        return fr2;
    }
    else if (max == c1) {
        return fr3;
    }
}

Fraction add (Fraction& fr1, Fraction& fr2) {
    int a, b;
    a = fr1.getNumer() * fr2.getDenom() + fr2.getNumer() * fr1.getDenom();
    b = fr1.getDenom() * fr2.getDenom();
    Fraction fr4(a, b);

    return fr4;
}

Fraction multiple (Fraction& fr1, Fraction& fr2) {
    int a, b;
    a = fr1.getNumer() * fr2.getNumer();
    b = fr1.getDenom() * fr2.getDenom();
    Fraction fr5(a, b);

    return fr5;
}

int main() {

    Fraction fract1(12, 15);
    Fraction fract2(6, 9);
    Fraction fract3(4, 11);
    Fraction fract4(1, 6);
    Fraction fract5(3, 5);
    Fraction product;
    
    std::cout << "다음과 같은 분수에서 가장 큰 분수를 찾습니다" << std::endl;

    std::cout << "fract1: ";
    fract1.print();
    std::cout << "fract2: ";
    fract2.print();
    std::cout << "fract3: ";
    fract3.print();

    std::cout << "가장 큰 분수: ";
    findlargest(fract1, fract2, fract3).print();
    std::cout << std::endl;
    std::cout << "다음과 같은 분수에 대하여 곱셈과 덧셈 연산을 합니다" << std::endl;
    std::cout << "fract4: ";
    fract4.print();
    std::cout << "fract5: ";
    fract5.print();

    std::cout << "곱셈 결과: ";
    product = multiple(fract4, fract5);
    product.print();
    
    std::cout << "덧셈 결과: ";
    product = add(fract4, fract5);
    product.print();

    return 0;
}


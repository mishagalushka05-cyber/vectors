#include <iostream>

typedef struct {
    float n1, n2;
} vec2; 

vec2 operator+(vec2 &a, vec2 &b) {
    return vec2{a.n1 + b.n1, a.n2 + b.n2};
};

vec2 operator*(vec2 &a, vec2 &b) {
    return vec2{a.n1 * b.n1, a.n2 * b.n2};
};

std::ostream & operator<<(std::ostream &os, vec2 &a) {
    os << a.n1 << " " << a.n2;
    return os;
};

int main() {
    vec2 a = {12, 4};
    vec2 b = {45, -20};

    auto c = a + b;
    std::cout << c << std::endl;

    return 0;
}


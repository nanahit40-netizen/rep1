#include <iostream>

class Point {
public:
    int x;
    int y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    Point operator+(Point p) {
        Point r;
        r.x = x + p.x;
        r.y = y + p.y;
        return r;
    }

    Point operator-(Point p) {
        Point r;
        r.x = x - p.x;
        r.y = y - p.y;
        return r;
    }

    void print() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point a(3, 5);
    Point b(1, 2);

    Point c = a + b;
    Point d = a - b;

    a.print();
    b.print();
    c.print();
    d.print();

    return 0;
}

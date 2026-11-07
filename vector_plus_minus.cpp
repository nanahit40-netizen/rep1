#include <iostream>

class Vec {
private:
    int* data;
    int n;

public:
    Vec(int size) {
        n = size;
        data = new int[n];
        for (int i = 0; i < n; i++)
            data[i] = 0;
    }

    Vec(const Vec& other) {
        n = other.n;
        data = new int[n];
        for (int i = 0; i < n; i++)
            data[i] = other.data[i];
    }

    ~Vec() {
        delete[] data;
    }

    Vec& operator=(const Vec& other) {
        if (this == &other)
            return *this;
        delete[] data;
        n = other.n;
        data = new int[n];
        for (int i = 0; i < n; i++)
            data[i] = other.data[i];
        return *this;
    }

    void set(int i, int v) {
        data[i] = v;
    }

    Vec operator+(Vec other) {
        Vec r(n);
        for (int i = 0; i < n; i++)
            r.data[i] = data[i] + other.data[i];
        return r;
    }

    Vec operator-(Vec other) {
        Vec r(n);
        for (int i = 0; i < n; i++)
            r.data[i] = data[i] - other.data[i];
        return r;
    }

    void print() {
        std::cout << "[ ";
        for (int i = 0; i < n; i++)
            std::cout << data[i] << " ";
        std::cout << "]" << std::endl;
    }
};

int main() {
    Vec a(3);
    Vec b(3);

    a.set(0, 1);
    a.set(1, 4);
    a.set(2, 7);

    b.set(0, 2);
    b.set(1, 3);
    b.set(2, 1);

    Vec s = a + b;
    Vec d = a - b;

    a.print();
    b.print();
    s.print();
    d.print();

    return 0;
}

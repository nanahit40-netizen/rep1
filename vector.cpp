#include <iostream>

template <typename T>
class Vector {
private:
    T* data;
    int size;
    int capacity;

public:
    Vector() {
        data = nullptr;
        size = 0;
        capacity = 0;
    }

    Vector(int n) {
        size = n;
        capacity = n;
        data = new T[capacity];
        for (int k = 0; k < size; k++) {
            data[k] = T();
        }
    }

    Vector(const Vector& src) {
        size = src.size;
        capacity = src.capacity;
        data = new T[capacity];
        for (int k = 0; k < size; k++) {
            data[k] = src.data[k];
        }
    }

    ~Vector() {
        delete[] data;
    }

    Vector& operator=(const Vector& src) {
        if (this == &src) {
            return *this;
        }
        delete[] data;
        size = src.size;
        capacity = src.capacity;
        data = new T[capacity];
        for (int k = 0; k < size; k++) {
            data[k] = src.data[k];
        }
        return *this;
    }

    void push_back(T value) {
        if (size == capacity) {
            int grownLimit;
            if (capacity == 0) {
                grownLimit = 1;
            } else {
                grownLimit = capacity * 2;
            }
            T* biggerBuf = new T[grownLimit];
            for (int k = 0; k < size; k++) {
                biggerBuf[k] = data[k];
            }
            delete[] data;
            data = biggerBuf;
            capacity = grownLimit;
        }
        data[size] = value;
        size++;
    }

    void pop_back() {
        if (size == 0) {
            std::cout << "Error: vector is empty" << std::endl;
            return;
        }
        size--;
    }

    T& operator[](int pos) {
        return data[pos];
    }

    T& at(int pos) {
        if (pos < 0 || pos >= size) {
            std::cout << "Error: index out of range" << std::endl;
            return data[0];
        }
        return data[pos];
    }

    Vector operator+(const Vector& src) {
        Vector merged;
        for (int k = 0; k < size; k++) {
            merged.push_back(data[k]);
        }
        for (int k = 0; k < src.size; k++) {
            merged.push_back(src.data[k]);
        }
        return merged;
    }

    Vector& operator+=(const Vector& src) {
        Vector snapshot(src);
        for (int k = 0; k < snapshot.size; k++) {
            push_back(snapshot.data[k]);
        }
        return *this;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    void print() {
        std::cout << "[ ";
        for (int k = 0; k < size; k++) {
            std::cout << data[k] << " ";
        }
        std::cout << "]  size = " << size << ", capacity = " << capacity << std::endl;
    }
};

int main() {
    Vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.print();

    nums.pop_back();
    nums.print();

    nums[0] = 99;
    std::cout << "a[0] = " << nums[0] << std::endl;
    std::cout << "a.at(1) = " << nums.at(1) << std::endl;

    Vector<int> cloned(nums);
    cloned.push_back(777);
    nums.print();
    cloned.print();

    Vector<int> assigned;
    assigned = nums;
    assigned += cloned;
    assigned.print();

    Vector<int> combined = nums + cloned;
    combined.print();

    Vector<double> reals;
    reals.push_back(1.5);
    reals.push_back(2.5);
    reals.print();

    return 0;
}

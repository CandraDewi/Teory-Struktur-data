#include <iostream>

// Fungsi rekursif untuk menghitung faktorial
unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> num;

    // Memastikan input adalah bilangan non-negatif
    if (num < 0) {
        std::cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << std::endl;
    } else {
        unsigned long long result = factorial(num);
        std::cout << "Faktorial dari " << num << " adalah " << result << std::endl;
    }

    return 0;
}

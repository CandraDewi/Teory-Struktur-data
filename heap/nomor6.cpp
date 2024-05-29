#include <iostream>
#include <vector>

// Fungsi untuk mempertahankan sifat max-heap pada subtree yang di-root-kan di indeks i
void heapify(std::vector<int>& arr, int n, int i) {
    int largest = i; // Inisialisasi terbesar sebagai root
    int left = 2 * i + 1; // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // Jika anak kiri lebih besar dari root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Jika anak kanan lebih besar dari yang terbesar sejauh ini
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Jika yang terbesar bukan root
    if (largest != i) {
        std::swap(arr[i], arr[largest]);

        // Heapify ulang subtree yang terpengaruh
        heapify(arr, n, largest);
    }
}

// Fungsi untuk membangun max-heap dari array
void buildMaxHeap(std::vector<int>& arr) {
    int n = arr.size();

    // Indeks non-leaf node terakhir adalah n/2 - 1
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

int main() {
    std::vector<int> arr = {5, 2, 4, 6, 1, 3};

    buildMaxHeap(arr);

    std::cout << "Max-Heap dari array adalah: ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}

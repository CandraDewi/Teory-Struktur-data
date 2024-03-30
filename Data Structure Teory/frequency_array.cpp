#include <iostream>

bool cekDuplikat(int arr[], int panjangArr = 4) {
    int freq[panjangArr + 1] = {0};
    for (int i = 0; i < panjangArr; i++) {
        if (freq[arr[i]] == 0) {
            freq[arr[i]] += 1;
        } else {
            return true;
        }
    }
    return false;
}

int main(void) {
    int arr[] = {2, 1, 3, 1};
    int panjangArr = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The duplicate element: " << cekDuplikat(arr, panjangArr) << std::endl;
}
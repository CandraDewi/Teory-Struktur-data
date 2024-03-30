#include <iostream>
#include <unordered_map>

bool cekDuplikat(int arr[], int panjangArr = 4) {
    std::unordered_map <int, int> elementCount;
    for (int i = 0; i < panjangArr; i++) {
        if (elementCount[arr[i]] > 0) {
            return true; 
        }
        elementCount[arr[i]]++;
    }
    return false;
}

int main() {
    int arr[] = {2, 1, 3, 1};
    int panjangArr = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The duplicate element: " << cekDuplikat(arr, panjangArr) << std::endl;
    return 0;
}
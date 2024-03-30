#include <iostream>
#include <algorithm>

bool cekDuplikat(int arr[], int panjangArr = 4) {
    std::sort(arr, arr + panjangArr);
    for(int i = 0; i < panjangArr - 1; i++) {
        if(arr[i] == arr[i+1]) {
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
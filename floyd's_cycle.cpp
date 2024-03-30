#include <iostream>

bool cekDuplikat(int arr[], int panjangArr = 4) {
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main(void) {
    int arr[] = {2, 1, 3, 1};
    int panjangArr = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The duplicate element: " << cekDuplikat(arr, panjangArr) << std::endl;
}
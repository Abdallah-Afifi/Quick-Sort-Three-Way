#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void partition(int a[], int l, int r, int& i, int& j) {
    int pivot = a[l];
    i = l + 1;
    j = r;
    
    while (i <= j) {
        if (a[i] < pivot) {
            swap(a[i], a[l]);
            i++;
        }
        else if (a[i] > pivot) {
            swap(a[i], a[j]);
            j--;
        }
        else {
            i++;
        }
    }
    
    i--;
    j++;
}

void quicksort(int a[], int l, int r) {
    if (l < r) {
        int i, j;
        partition(a, l, r, i, j);
        quicksort(a, l, i);
        quicksort(a, j, r);
    }
}

int main() {
    int a[] = {9, 2, 5, 1, 7, 6, 8};
    int n = sizeof(a) / sizeof(a[0]);
    
    std::cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    
    quicksort(a, 0, n - 1);
    
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

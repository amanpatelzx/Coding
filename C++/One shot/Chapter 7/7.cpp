#include <iostream>

int multiply(int array[], int n) {
    int product = 1;
    for (int i = 0; i < n; ++i) {
        product *= array[i];
    }
    return product;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Product of array elements: " << multiply(array, n) << std::endl;
    return 0;
}

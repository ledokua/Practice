#include <iostream>
using namespace std;

int main() {
    // масив
    const int size = 5;
    double arr[size] = {1.2, -3.4, 5.6, -7.8, 9.1};

    double sum = 0.0; // Сума
    double* ptr = arr; // Вказівник на початок масиву

    // Проходимо по масиву з вказівником
    for (int i = 0; i < size; ++i) {
        if (*ptr > 0) { // Перевірка
       	 sum += *ptr;
        }
        ptr++; // наступний елемент
    }

    cout << "Sum: " << sum << endl;
    return 0;
}

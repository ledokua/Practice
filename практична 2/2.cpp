#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int size1, size2;

    // Input first vector
    cout << "Enter the size of the first vector: ";
    cin >> size1;
    vector<int> vector1(size1);
    cout << "Enter elements of the first vector:\n";
    for (int i = 0; i < size1; i++) {
        cin >> vector1[i];
    }

    // Input second vector
    cout << "Enter the size of the second vector: ";
    cin >> size2;
    vector<int> vector2(size2);
    cout << "Enter elements of the second vector:\n";
    for (int i = 0; i < size2; i++) {
        cin >> vector2[i];
    }

    // Use a set to store unique common elements
    set<int> commonElements;

    // Find common elements
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (vector1[i] == vector2[j]) {
                commonElements.insert(vector1[i]);
            }
        }
    }

    // Print the result
    if (!commonElements.empty()) {
        cout << "Common elements:\n";
        for (const int& elem : commonElements) {
            cout << elem << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements found." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Initialization - 1D Array
    int arr[5] = {1, 2, 3, 4, 5};

    // Initialization - 2D Array
    int brr[2][2] = {{1, 2}, {3, 4}};

    // Initialization - 1D Vector
    vector<int> vec = {1, 2, 3};

    // Initialization - 2D Vector
    vector<vector<int>> v(2, vector<int>(2));

    cout << "\n***** Built-in Functions *****\n";
    sort(vec.begin(), vec.end());  // Sort

    // Reverse
    reverse(vec.begin(), vec.end());

    // Size
    cout << vec.size() << '\n';

    // Push
    vec.push_back(5);

    cout << "\n***** Accessing and Traversing Array/Vector *****\n";
    // 1D Vector
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    return 0;
}
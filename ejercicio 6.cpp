#include <iostream>
#include <vector>

using namespace std;

bool searchValue(vector<int>& L, int v) {
    int n = L.size();
    int left = 0;
    int right = n - 1;
    int comparisons = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (L[mid] == v) {
            cout << "Value " << v << " found in " << comparisons << " comparisons" << endl;
            return true;
        } else if (L[mid] < v) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        comparisons++;
    }

    cout << "Value " << v << " no encontrado en" << comparisons << " comparaciones" << endl;
    return false;
}

int main() {
    vector<int> L = {1, 3, 4, 7, 8, 10, 11, 15, 17, 19, 20, 28, 26, 35, 47, 78, 98, 96};
    int v = 98;
    searchValue(L, v);

    return 0;
}
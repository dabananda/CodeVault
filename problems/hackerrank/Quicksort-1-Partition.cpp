#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pivot = arr[0];
    vector<int> left;
    vector<int> right;
    for(int i = 1; i < n; i++) {
        if(arr[i] > pivot) {
            right.push_back(arr[i]);
        } else if(arr[i] < pivot) {
            left.push_back(arr[i]);
        }
    }
    for(int i = 0; i < left.size(); i++) {
        cout << left[i] << " ";
    }
    cout << pivot << " ";
    for(int i = 0; i < right.size(); i++) {
        cout << right[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int gifts[n], giftsCopied[n];
    for (int i = 0; i < n; i++) {
        cin >> gifts[i];
        giftsCopied[i] = gifts[i];
    }
    sort(giftsCopied, giftsCopied+ n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(giftsCopied[i] == gifts[j]) {
                cout << j + 1 << " ";
            }
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> frequency;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        frequency[s]++;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> s;
        cout << frequency[s] << endl;
    }

    return 0;
}

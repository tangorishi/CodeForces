#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        string num;
        cin >> num;
        int i = 0;
        while (i < n && num[i] - '0' >= d) {
            i++;
        }
        if (i == n) {
            cout << num << d << endl;
        } else {
            num.insert(i, to_string(d));
            cout << num << endl;
        }
    }
    return 0;
}

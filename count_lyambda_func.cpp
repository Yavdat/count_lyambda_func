#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool Lt2(int x) {
    if (x < 4) {
        return true;
    }
    return false;
}

void Print(const vector<int>& v, const string& title) {
    cout << title << ": ";
    // always use const with non-changed vars
    for (const auto& i: v) {
        cout << i << ' ';
    }
    cout << endl;
}

int main() {
    vector<int> v {
        1, 2, 3, 5, 4
    };

    Print(v, "init");

    for (auto& i : v) {
        ++i;
    }

    int thr = 2;
    cout << count_if(begin(v), end(v), [thr](int x) {
        if (x > thr) {
            return true;
        }
        return false;
    }) << endl;

    Print(v, "inc ");
    return 0;
}

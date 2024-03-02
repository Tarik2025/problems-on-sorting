#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int a[] = {5, 3, 6, 8};
    int n = sizeof(a) / sizeof(a[0]);
    
    // main logic
    double kmin = INT_MIN;
    double kmax = INT_MAX;
    bool flag = true;

    for (int i = 0; i < n - 1; i++) {
        double mid = (a[i] + a[i + 1]) / 2.0; // Calculate the midpoint
        if (a[i] >= a[i + 1]) {
            kmin = max(kmin, mid);
        } else {
            kmax = min(kmax, mid);
        }
        if (kmin > kmax) {
            flag = false;
            break;
        }
    }

    if (!flag) {
        cout << -1;
    } else if (kmin == kmax) {
        if (kmin - (int)kmin == 0) {
            cout << "k is " << kmin << endl;
        } else {
            cout << -1;
        }
    } else {
        cout << "range of k is: [" << kmin << ", " << kmax << "]" << endl;
    }

    return 0;
}

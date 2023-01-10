#include "aka.h"

void bruteForce(string p, string t) {
    int i=0; int j = 0;
    int n = t.length(); int m = p.length();

    for (i=0; i<= n-m; i++) {
        j = 0;
        while (j < m && p[j] == t[i+j]) {
            j++;
        }
        if (j == m) {
            cout << endl << "Pattern found at index\t: " << i;
        }
    }
    cout << endl;
}

#include "aka.h"

void boyerMoore(string s, int size, int badchar[no_char]){
    int i;
    for (i=0; i < no_char; i++) {
        badchar[i] = -1;
    }
    for (i=0; i < size; i++) {
        badchar[(int) s[i]] = i;
    }
};

void searchBM(string p, string t){
    int m = p.length();
    int n = t.length();
    int badchar[no_char];

    boyerMoore(p, m, badchar);
    int s = 0;
    while (s <= (n-m)) {
        int j = m - 1;
        while (j >= 0 && p[j] == t[s+j]) {
            j--;
        }
        if (j < 0) {
            cout << endl << "Pattern found at index\t: " << s << endl;
            if (s+m < n) {
                s += m-badchar[t[s+m]];
            }else{
                s = 1;
            }

        }else{
            s += max(1, j - badchar[t[s+j]]);
        }
    }

};

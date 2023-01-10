#include "aka.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // include vector
    vector <int> values(10000);

    string t = "TUGAS BESAR ANALISIS KOMPLEKSITAS ALGORITMA KELOMPOK 7";
    string p = "RITMA";

    auto f = []() -> int { return rand() % 10000; };

    // include algorithm
    generate(values.begin(), values.end(), f);

    auto start = high_resolution_clock::now();
    sort(values.begin(), values.end());
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "===== Boyer Moore =====" << endl;
    searchBM(p, t);
    cout << "Time taken by function\t: " << duration.count() << "ms" << endl;

    return 0;
}

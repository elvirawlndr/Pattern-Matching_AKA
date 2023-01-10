#ifndef AKA_H_INCLUDED
#define AKA_H_INCLUDED

#define no_char 256
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void boyerMoore(string s, int size, int badchar[no_char]);
void searchBM(string p, string t);

#endif // AKA_H_INCLUDED

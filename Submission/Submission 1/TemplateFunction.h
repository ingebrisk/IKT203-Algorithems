#pragma once
#include <iostream>
using namespace std;


/* -----------------------------------------------------
                Step 1: C++ Template Mastery
   -----------------------------------------------------     */

// -------- Basic Template Functions -------------
// a)
template <typename T>
void PrintTypeSize(T v){
    cout << v << ", is containing " << sizeof(v) << " bytes" << endl;
}

// b)
template <typename T>
T GetMax(T a, T b) {
    // make an if loops that checks for the biggest value between two values
    if (a > b){
        return a;
    }else {
        // we use else instead of else if because if a is not bigger then b, b will be the max value.         
        return b;
    } 
}
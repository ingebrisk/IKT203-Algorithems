// Submission 1: Master of Templates and Callbacks
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


/* ------------------------------------------------------------------
                Step 2: Global Callbacks (No Templates)
   ------------------------------------------------------------------     */


int main(){
    cout << " ---------------------------------------------- " << endl;
    cout << "a) Function that printes the byte size of input: " << endl;
    cout << " ---------------------------------------------- " << endl;
    PrintTypeSize(453);
    PrintTypeSize("a");
    PrintTypeSize(3.14);
    cout << " --------------------------------------------- " << endl;

    cout << "b) Functions that tell us biggest value between two values: " << endl;
    cout << " --------------------------------------------- " << endl;

    GetMax(5,16);
    cout << GetMax(5,16) << ", is the biggest value" << endl;
    cout << " -------------------------------- " << endl; 

    return 0;
}


#pragma once
#include <iostream>
#include <tuple>
using namespace std;


/* -----------------------------------------------------
                Step 1: C++ Template Mastery
   -----------------------------------------------------     */

// 1. -------- Basic Template Functions -------------

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

// c) the Twist
struct TStudent{
private:
    int grade;
public:
    void SetGrade(int newGrade){
        if (newGrade < 0){
            cout << "Error, not a valid value" << endl;
        }else if (newGrade > 6){
            cout << "Error, not a valid value" << endl;
        }else{
            grade = newGrade ;
        }
    }
    int GetGrade(){
        return grade;
    }

    bool operator>(const TStudent& other) const {
        return grade > other.grade;
    }
};

// 2. -------- Advanced Templates (Variadic and Non-Type) -------------

// a) 

template <typename... Args>
struct TDataPack{
    tuple<Args...> values;
};

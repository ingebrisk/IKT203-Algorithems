#pragma once
#include <iostream>
using namespace std;


/* -----------------------------------------------------
                Step 1: C++ Template Mastery
   -----------------------------------------------------     */

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

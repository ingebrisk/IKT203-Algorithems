// Submission 1: Master of Templates and Callbacks
#include <iostream>
#include "TemplateFunction.h"
#include "TStudent.h"

using namespace std;


/* -----------------------------------------------------
                Step 1: C++ Template Mastery
   -----------------------------------------------------    
        1: BASIC TEMPLATE FUNCTIONS 
            // a) and b) is in TemplateFunction.h
            // c) is in TStudent.h 
        
        2: ADVANCED TEMPLATES (Variadic and Non-Type)   
            // a)  */

/* ------------------------------------------------------------------
                Step 2: Global Callbacks (No Templates)
   ------------------------------------------------------------------     */


int main(){
    cout << " ---------------------------------------------- " << endl;
    cout << "a) Function that printes the byte size of input: " << endl;
    cout << " ---------------------------------------------- " << endl;
    PrintTypeSize(453);  // integer
    PrintTypeSize('a');  // char Note: 'a' -> char, "a" -> string
    PrintTypeSize(3.14); // double
    cout << " --------------------------------------------- " << endl;

    cout << "b) Functions that tell us biggest value between two values: " << endl;
    cout << " --------------------------------------------- " << endl;

    GetMax(5,16);
    cout << GetMax(5,16) << ", is the biggest value" << endl;
    cout << " ---------------------------------------------- " << endl; 

    cout << "c) The twist: " << endl;
    cout << " --------------------------------------------- " << endl;
    TStudent student1;
    student1.SetGrade(5);
    TStudent student2;
    student2.SetGrade(3);
    cout << GetMax(student1, student2).GetGrade() << ", is the highest grade" << endl;
    cout << " ---------------------------------------------- " << endl; 


    return 0;
}


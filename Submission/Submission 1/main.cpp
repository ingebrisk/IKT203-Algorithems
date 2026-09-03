// Submission 1: Master of Templates and Callbacks
#include <iostream>
#include "Step1-CppTemplateMastery.h"

using namespace std;


/* -----------------------------------------------------
                Step 1: C++ Template Mastery
   -----------------------------------------------------    
        1: BASIC TEMPLATE FUNCTIONS 
            // a) b) and c) in Step1-CppTemplateMastery.h
        
        2: ADVANCED TEMPLATES (Variadic and Non-Type)   
            // a) b) and c) in Step1-CppTemplateMastery.h

/* ------------------------------------------------------------------
                Step 2: Global Callbacks (No Templates)
   ------------------------------------------------------------------     */


int main(){
    cout << " ---------------------------------------------- " << endl;
    cout << "       1. a) Function that printes the byte size of input: " << endl;
    cout << " ---------------------------------------------- " << endl;
    cout << "  " << endl;

    PrintTypeSize(453);  // integer
    PrintTypeSize('a');  // char Note: 'a' -> char, "a" -> string
    PrintTypeSize(3.14); // double
    cout << "  " << endl;

    cout << " --------------------------------------------- " << endl;
    cout << "       1. b) Functions that tell us biggest value between two values: " << endl;
    cout << " --------------------------------------------- " << endl;
    cout << "  " << endl;

    GetMax(5,16);
    cout << GetMax(5,16) << ", is the biggest value" << endl;
    cout << "  " << endl;

    cout << " ---------------------------------------------- " << endl; 
    cout << "           1. c) The twist: " << endl;
    cout << " --------------------------------------------- " << endl;
    cout << "  " << endl;

    TStudent student1;
    student1.SetGrade(5);
    TStudent student2;
    student2.SetGrade(3);
    cout << GetMax(student1, student2).GetGrade() << ", is the highest grade" << endl;
    cout << "  " << endl;

    cout << " ---------------------------------------------- " << endl; 
    cout << "        2. a) Verdict Struct " << endl;
    cout << " --------------------------------------------- " << endl;
    cout << "  " << endl;

    TDataPack<int, string, double> pack;
    pack.values = make_tuple(5, "hello", 3.14);

    cout << get<0>(pack.values) << endl;
    cout << get<1>(pack.values) << endl;
    cout << get<2>(pack.values) << endl;
    cout << "  " << endl;

    cout << " --------------------------------------------- " << endl;
    cout << "          2. b) Template Array " << endl;
    cout << " --------------------------------------------- " << endl;
    cout << "  " << endl;


    TStaticArray<int, 5> myArray;
    myArray.Populate(0, 1);   
    myArray.Populate(1, 2); 
    myArray.Populate(2, 3); 
    myArray.Print();

    return 0;
}


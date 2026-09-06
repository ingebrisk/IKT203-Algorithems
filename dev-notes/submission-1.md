# Submission 1:  Master of Templates and Callbacks


## Step 1: C++ Template Mastery

### 1. Basic Template Functions:

#### 1.1.a. 
*Create a generic template function that accepts any data type and prints its size in bytes to the console (hint: use `sizeof()`). Test it with an `int`, a `double`, and a custom struct.*

To solve this task I started with understanding how a template worked. 

**Templates** is a method that can be used to **prevent code duplication**. It can make your functions use different types of input, without making separate code that handles `int`, `double` or `float` inputs. In short it works as a blueprint for a function and prevent redundant of code. ![Dev.to](https://dev.to/bashtech1/c-templates-from-code-duplication-to-generic-programming-h2o)(accessed: September 3. 2026)

Then i tried implementing a template that worked for the task that was given, and chould be seen in the file `Step1-CppTemplateMastery.h`. Which mada a void function that does not return anything but it prints put the byte size of the input (regardless of type). 

#### 1.1.b. 
*GetMax(T a, T b): Create a generic template function that returns the larger of two variables.*

simmelar to task [1.1.a.](#1.1.a) a generic template function were made to take in two variables, and return the lagest one. Here the difference were that it is made to take in two values and return a value. 

#### 1.1.c. The twist
*The twist: You must successfully pass a custom struct into `GetMax` (e.g., a `TStudent` struct with a grade integer). For the template to compile, you will need to overload the `>` operator inside your custom struct!*

Simmelar to task [1.1.a.](#1.1.a), start by understanding what the task want us to make. So What is a struct? 

**Struct** is an efficent way to group up information in one place with various data types. It can contain bouth variables and functions. in cpp it is also possible to manage access with `public` and `private`.  ![geeks for geeks](https://www.geeksforgeeks.org/cpp/structures-in-cpp/)


Then implement it with our solution, starting with defining `int grade` as a private variable. Then the functions that sets the grade, `SetGrade(int newGrade)`, if the number of the grade is grater then 0 and less or the same as 6. Nex function is get grade, to make it possible to read the private variable `grade`. The last function is the boolean function that compairs students with eachother. 

### 2. Advanced Templates (Variadic and Non-Type)

#### 1.2.a. Variadic Template Struct
*Variadic Template Struct: Create a struct called TDataPack that can hold an arbitrary number of different data types (e.g., `template <typename... Args>`). This acts like a custom Tuple.*

variadic class template is

simmelar to a struct a **tuple** is a container that can store multiple elements of different data types. However a tuple is fixed size, and the task is to make a costume tuple that can take arbitrary numbers of values with differnt data types. ![geeks for geeks - tuples](https://www.geeksforgeeks.org/cpp/tuples-in-c/)


To make that, start simmelar to make a template that makes.  

#### 1.2.b. Template array 
*Template Array: Create a TStaticArray class where both the data type and the array size are known at compile time. This requires a non-type template parameter (e.g., `template <typename T, int Size>`). Implement a method to populate it and a method to print its contents.*

#### 1.2.c. Template-Template Parameters
*Template-Template Parameters: Create a function that accepts another template as its parameter. For example, create a `PrintContainer` function that specifically accepts your `TStaticArray` blueprint. (Hint: the syntax looks like `template <template <typename, int> class Container, typename T, int N>`).*


## Step 2:


### 2. 
**Aliases** there is two types of aliases, there is `using` and there is `typedef`. `using` is the more modern version of `typedef`, while `typedef` is the standard methode. `using` is what we used for the following task in this submission. 

![using vs typedef](https://www.geeksforgeeks.org/cpp/cpp-using-vstypedef/)

### 3. 

![kilde](https://textbooks.cs.ksu.edu/cis308/7-chapter/7_3-arraysfnptrs/)


## Step 3: 

### 1. 
Now we ar going to create a templated type alias named FActionFunc. This makes us need to keep using `using` since, `typedef` does not support being used with templates. 
#include <iostream> // a header file library that lets you work with input and output objects
using namespace std; // means that we can use names for objects and variables from the standard library.

int main() { // Any code inside its curly brackets {} will be executed
  
  cout << "Hello World!"; // (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text.
  cout << "Hello World!" << endl; // a way to insert a new line, is with the endl
  
  int myNum = 15; // type variableName = value;
  // or
  int myNum;
  myNum = 15;
  // To declare many
  int x = 5, y = 6, z = 50;
  
  int minutesPerHour = 60; // naming style
  
  const int myNum = 15;  // myNum will always be 15
  myNum = 10;  // error: assignment of read-only variable 'myNum'
  
  cin >> x; // Get user input from the keyboard
  
  return 0; // return 0 ends the main function.
}

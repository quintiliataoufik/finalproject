// This is a C++ program to demonstrate how to use arrays and pointers

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5}; // array of five integers
  int* ptr; // pointer to an integer

  ptr = &arr[0]; // initialize the pointer to point to the first element of the array

  cout << "The value of the first element is: " << *ptr << endl; // print the value of the first element

  ptr++; // increment the pointer by one position

  cout << "The value of the second element is: " << *ptr << endl; // print the value of the second element

  return 0;
}

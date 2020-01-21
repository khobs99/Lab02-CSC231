/*********************************
 * Lab 02
 * Created by Kenneth Hobday & Elvet Potter II       01/21/2020
 *********************************/

#include <iostream>
using namespace std;

#include "Bushel.h"

// Main program

void main()
{ class bushel a,b,c;

// Initialize bushels

  a = bushel(3,8);
  b = bushel(2,6);

/* Step 9
// Get bushels

  cout << "Enter bushel A (apples,oranges):";
  a.get(cin);
  cout << "Enter bushel B (apples,oranges):";
  b.get(cin);
*/

// Output bushels

  cout << "A: ";  a.put(cout);  cout << endl;
  cout << "B: ";  b.put(cout);  cout << endl;


// Bushel compare 1

  if(a==b)
    cout << "Bushel A == B" << endl;
  else
    cout << "Bushel A != B" << endl;



// Bushel compare 2

  if(a.lesser(b))
    cout << "Bushel A < B" << endl;
  else if(a.greater(b))
    cout << "Bushel A > B" << endl;
  else
    cout << "Bushel A ? B" << endl;

}

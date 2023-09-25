#include <iostream>
using namespace std;
/*
csc 134
M3T3 - simple menu
HinsonC
9/25/23
*/

// List of functions
// Declare
void Question1();
void Question2();
void Question3();

int main() {
  cout << "Main Menu" << endl;


  cout << "1. Question 1" << endl;
  cout << "2. Question 2" << endl;
  cout << "3. Question 3" << endl;
  cout << "Your choice? ";

  int choice ;
  cin >> choice;
  cout << "you choose: " << choice << endl;



  if (1 == choice) {
    Question1();
  }
  else if (2 == choice) {
    Question2();
  }
  else if (3 == choice) {
    Question3();
  }
  else {
    cout << "sorry, that is not a valid choice. " << endl;
  }
}

//The full functions
//define'
void Question1() {
  cout << "Question 1" << endl;
}
void Question2() {
  cout << "Question 2" << endl;
}

void Question3() {
  cout << "Question 3" << endl;
}

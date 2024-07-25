#include <iostream>

using namespace std;

int main() {
  int x = 0; 
  int numStatements;
  cout << "Enter the number of statements in the program: ";
  cin >> numStatements;

  
  for (int i = 0; i < numStatements; i++) {
    char operation;


    cout << "Enter statement " << i + 1 << " (e.g., ++X or --X): ";
    cin >> operation;
    cin.ignore(); 
    if (operation == '+') {
      x++; 
    } else if (operation == '-') {
      x--; 
    } else {
      cout << "Invalid operation!" << endl; 
  }

  cout << "Final value of x: " << x << endl;

  return 0;
}

}
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int num1;
int num2;
char equation;
string calculation;

int main(void){
    do {
    string displayawnser;
    cout << "Input first number: ";
    cin >> num1;


    cout << "Input second number: ";
    cin >> num2;


   
    cout << "Input letter connected to the equation:\n(A) Addition\n(B) Subtraction\n(C) Multiplication\n(D) Division\n " << "History Input: (h)"<< endl;
    cin >> equation;  
    int awnser;

    if (equation == 'h' && num1 == 0 && num2 == 0){
      cout << calculation;
      continue;
    }
    else{
      if (equation == 'A'){
        awnser = num1 + num2;
        displayawnser = displayawnser + to_string(num1) + '+' + to_string(num2) + '=' + to_string(awnser);
        calculation= calculation + to_string(num1) + '+' + to_string(num2) + '=' + to_string(awnser) + '\n';
        cout << displayawnser << endl;
        continue;
      }
      else if (equation == 'B'){
        awnser = num1 - num2;
        displayawnser = displayawnser + to_string(num1) + '+' + to_string(num2) + '=' + to_string(awnser);
        calculation= calculation + to_string(num1) + '-' + to_string(num2) + '=' + to_string(awnser) + '\n';
        cout << displayawnser << endl;
        continue;
      }
      else if (equation == 'C'){
        awnser = num1 * num2;
        displayawnser = displayawnser + to_string(num1) + '+' + to_string(num2) + '=' + to_string(awnser);
        calculation= calculation + to_string(num1) + '*' + to_string(num2) + '=' + to_string(awnser) + '\n';
        cout << displayawnser << endl;
        continue;
      }
      else if (equation == 'D'){
        awnser = num1 / num2;
        displayawnser = displayawnser + to_string(num1) + '+' + to_string(num2) + '=' + to_string(awnser);
        calculation= calculation + to_string(num1) + '/' + to_string(num2) + '=' + to_string(awnser) + '\n';
        cout << displayawnser << endl;
        continue;
      }
      else{
        cout << "Invalid Input" << endl;
        continue;
      }
      
      }
    }
      while (equation != 'h');
   
  return 0;
}

# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {
    
    case '+':
    //Addition
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
    //Substraction
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
    //Multiplication
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
    //Division
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

   
    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
#include <iostream>

int main() {
  std::cout << "PROMPTING COMPUTING\nTERMINAL QWAKULATOR BOOTING...";
  
  int num1, num2;
  char op;
  std::cout << "\nINPUT FIRST DIGIT ";
  std::cin >> num1;
  std::cout << "INPUT SECOND DIGIT ";
  std::cin >> num2;
  std::cout << "SELECT OPERATION ";
  std::cin >> op;

  switch (op) {
    case '+':
      std::cout << num1 + num2 << std::endl;
      break;
    case '-':
      std::cout << num1 - num2 << std::endl;
      break;
    case '*':
      std::cout << num1 * num2 << std::endl;
      break;
    case '/':
      if (num2 == 0) {
        std::cout << "ERROR: CAN NOT DIVIDE BY ZERO" << std::endl;
      } else {
        std::cout << num1 / num2 << std::endl;
      }
      
    default:
      std::cout << "ERROR: INVALID OPERATOR" << std::endl;
  }


}

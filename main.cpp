#include <iostream>
#include <string>
#include <vector>
#include "calc.hpp"

int main() {
  std::cout << "Welcome to StackCalculator!" << std::endl;
  std::cout << "Enter an arithmetic expression (or type 'exit' to quit):" << std::endl;

  std::string input;
  while (true) {
    std::cout << "\n> ";
    std::getline(std::cin, input);

    if (input == "exit") break;

    try {
      // Tokenise
      std::vector<Calc::Token> tokens = Calc::tokenise(input);
      std::cout << "Tokens: ";
      for (const auto& t : tokens) {
        std::cout << t << " ";
      }
      std::cout << std::endl;

      // Convert to postfix
      std::vector<Calc::Token> postfix = Calc::infixToPostfix(tokens);
      std::cout << "Postfix: ";
      for (const auto& t : postfix) {
        std::cout << t << " ";
      }
      std::cout << std::endl;

      // Evaluate
      int result = Calc::evalPostfix(postfix);
      std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
  }

  std::cout << "Goodbye!" << std::endl;
  return 0;
}

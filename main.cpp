#include <iostream>
#include <math.h>

int NumberFromUser1(int number_1);
int NumberFromUser2(int number_2);
int NumberFromUser3(int number_3);
void PrintCountHypotenuse (int number_1, int number_2);
void PrintCountOneSide (int number_3, int number_1);
void ListOperations();
void CalculateResult(char option_2, int number_1, int number_2, int number_3);


//void PowNumber1(double number_1, double number_2);
//void PowNumber2(double number_1, double number_2);

int main() {
  
  int number_1;
  int number_2;
  int number_3;
  char option_2;
  ListOperations();
  std::cin >> option_2; 
    if (option_2 == 'a') {
      number_1 = NumberFromUser1(number_1);
      number_2 = NumberFromUser2(number_2);
      }else if (option_2 == 'b') {
        number_3 = NumberFromUser3(number_3);
        number_1 = NumberFromUser1(number_1);
      }
  
  CalculateResult(option_2, number_1, number_2, number_3);
  
  
  
}

int NumberFromUser1(int number_1) {
    std::cout << "Add meg az egyik befogó hosszúságát: " << std::endl;
    std::cin >> number_1;
    return number_1;
}
int NumberFromUser2(int number_2) {
  std::cout << "Add meg a másik befogó hosszúságát: " << std::endl;
  std::cin >> number_2;
  return number_2;
}
int NumberFromUser3(int number_3) {
  std::cout << "Add meg az átfogó hosszúságát: " << std::endl;
  std::cin >> number_3;
  return number_3;
}
void PrintCountHypotenuse (int number_1, int number_2) {
  std::cout << number_1 << "^2 + " << number_2 << "^2 = " << pow(number_1, 2) << " + " << pow(number_2, 2) << " = " << pow(number_1, 2) + pow(number_2, 2) << std::endl;
  std::cout << pow(number_1, 2) + pow(number_2, 2) << " √ = " << sqrt(pow(number_1, 2) + pow(number_2, 2)) << std::endl; 
}
void PrintCountOneSide (int number_3, int number_1) {
  std::cout << number_3 << "^2 - " << number_1 << "^2 = " << pow(number_3, 2) << " - " << pow(number_1, 2) << " = " << pow(number_3, 2) - pow(number_1, 2) << std::endl;
  std::cout << pow(number_3, 2) - pow(number_1, 2) << " √ = " << sqrt(pow(number_3, 2) - pow(number_1, 2)) << std::endl; 
}
void CalculateResult(char option_2, int number_1, int number_2, int number_3) {
  if (option_2 == 'a') {
    PrintCountHypotenuse(number_1, number_2);
  } else if (option_2 == 'b') {
    PrintCountOneSide(number_3, number_1);
  }
}
void ListOperations() {
  std::cout << "A derékszögű háromszög melyik oldalát szeretnéd kiszámolni?" << std::endl;
        std::cout << "\ta.) - Az átfogót." << std::endl;
        std::cout << "\tb.) - Az egyik befogót." << std::endl;
}

//void PowNumber1(double number_1, double number_2) {

  
//void PowNumber2(double number_1, double number_2);
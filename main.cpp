#include <iostream>
#include <math.h>

int NumberFromUser1(int number_1);
int NumberFromUser2(int number_2);
void CountPower (int number_1, int number_2);



//void PowNumber1(double number_1, double number_2);
//void PowNumber2(double number_1, double number_2);

int main() {
  
  int number_1;
  int number_2;

  
  number_1 = NumberFromUser1(number_1);
  number_2 = NumberFromUser2(number_2);
  CountPower(number_1, number_2);
  
}

int NumberFromUser1(int number_1) {
    std::cout << "Add meg az első számot: " << std::endl;
    std::cin >> number_1;
    return number_1;
}
int NumberFromUser2(int number_2) {
  std::cout << "Add meg a második számot: " << std::endl;
  std::cin >> number_2;
  return number_2;
}
void CountPower (int number_1, int number_2) {
  std::cout << number_1 << "^2 + " << number_2 << "^2 = " << pow(number_1, 2) << " + " << pow(number_2, 2) << " = " << pow(number_1, 2) + pow(number_2, 2) << std::endl;
  std::cout << pow(number_1, 2) + pow(number_2, 2) << " √ = " << sqrt(pow(number_1, 2) + pow(number_2, 2)) << std::endl; 
}

//void PowNumber1(double number_1, double number_2) {

  
//void PowNumber2(double number_1, double number_2);
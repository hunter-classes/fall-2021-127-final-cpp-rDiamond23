#include <iostream>
//Question 1
void isRightTriangle(int s1, int s2, int h){
  std::cout << "Is right triangle?\n";
  if(s1 * s1 + s2 * s2 == h * h){
    std::cout << "True\n" << std::endl;
  } else {
    std::cout << "False\n" << std::endl;
  }

}
//Question 2
void fizzbuzz(int num){
  int number = 1;
  for(number = 1; number < num; ++number){
    if(number % 3 == 0 and number % 5 == 0){
      std::cout << number;
      std::cout << ": fizzbuzz\n";
    } else if(number % 3 == 0) {
      std::cout << number;
      std::cout << ": fizz\n";
    } else if(number % 5 == 0) {
      std::cout << number;
      std::cout << ": buzz\n";
    } else{
      std::cout << "";
    }
  }
}

int main(){
  std::cout << "Question 1: \n";
  isRightTriangle(3,4,5);
  
  std::cout << "Question 2: \n";
  fizzbuzz(22);
}
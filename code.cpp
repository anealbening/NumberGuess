// Example program
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
  cout << "Guess a whole number between 1 and 30";
  int answer;
  cin >> answer;
  bool guessedAnswer = false;
  while (guessedAnswer == false){
  if (answer !=20){
      cout << "Guess again";
      cin >> answer;
  }
  else{
      cout << "Correct the answer was 20";
      guessedAnswer = true;
  
  }
  }
}

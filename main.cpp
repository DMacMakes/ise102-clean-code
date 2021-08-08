#include <iostream>
#include <string>
#include "include/ise102.h"
using namespace std;

int get_fromuser()
{
  string Error;  // string for an error


  int guess_;
  do {
    if (Error != "") print(Error);
    print("Enter a number between 10 and 15 > "); cin >> guess_;
    
    if
    (guess_ >=10 && guess_ <= 15) {
      Error = ""; } 
    else {
      Error = "Welp, you had one job. Try again.\n"; }
  }
  while (Error != "");


  return (guess_);
}

int main() {
  clearScreen();

  print("Welcome to guessy world!\n\n")
  ;

  int input = get_fromuser();

  auto TITLE_STYLE = makeStyle( color::dark_violet,
                                color::powder_blue,
                                emphasis::bold ); 
  
  std::string var = "Damo";  // Create a string called var 


  print(TITLE_STYLE, "So, {0}.. You're going with {1}, is that right?\n", var, input);
  delay  (500);
  print("Nice to meet you anyway.\n\n"); }

#include <string>
#include <iostream>

using namespace std;
int oops(int lower, int upper, string inputMessage, string error) {
   int inputInt;
   string input;
   while (true) {
      cout << inputMessage;
      cin >> input;
      if (input == "default") {
         cout << "The value chosen by the user is " << ((upper - lower) / 2) <<  endl;
         return ((upper - lower) / 2);
      }else if (input == "exit") {
         return 0;
      } else if (isdigit(input[0])){
         inputInt = stoi(input);
         if (lower <= inputInt  && inputInt <= upper) {
            cout << "The value chosen by the user is " << input <<  endl;
            return inputInt;
         }
      }
      else {
         cout << error << endl;
      }
   }

}

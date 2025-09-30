#include <string>
#include <iostream>

using namespace std;
int oops(int lower, int upper, string inputMessage, string error) {
   int input;

   while (true) {
      cout << inputMessage;
      cin >> input;
      if (lower <= input  && input <= upper) {
         cout << "The value chosen by the user is " << to_string(input) <<  endl;
         return input;
      }
      cout << error << endl;
   }

}

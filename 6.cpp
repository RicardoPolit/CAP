#include <iostream>
#include <string>

using namespace std;

int main( ){

  string one,two;
  cin >> one;
  cin >> two;

  for(int i = 0; i < one.length(); i++) {

    if(one[ i ] < 97)
      one[ i ] = one[ i ] + 32;

    if(two[ i ] < 97)
      two[ i ] = two[ i ] + 32;

  }

  if(one < two)
    cout << "-1";
  else if(one > two)
    cout << "1";
  else
    cout << "0";

  return 0;
}

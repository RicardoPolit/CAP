#include <iostream>
#include <string>

using namespace std;

int main( ){

  string word;

  cin >> word;

  for(int i = 0; i < word.length(); i++) {

    if(word[ i ] < 97)
      word[ i ] = word[ i ] + 32;

    if(word[ i ] != 'a' && word[ i ] != 'o' && word[ i ] != 'y' && word[ i ] != 'e' && word[ i ] != 'u' && word[ i ] != 'i')
      cout << "." << word[ i ];

  }

  return 0;
}

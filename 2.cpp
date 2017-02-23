#include <iostream>
#include <string>

using namespace std;

int main() {

  string entrada;
  int uno = 0,dos = 0,tres = 0,mas = 0,x = 0;
  cin >> entrada;

  for(int i = 0; i < entrada.length(); i++) {

    switch (entrada[i]) {

      case '1':
        uno++;
        break;

      case '2':
        dos++;
        break;

      case '3':
        tres++;
        break;

      default:
        mas++;
    }
  }

  for(int i = 0; i < uno; i++) {

    cout << "1";

      if(mas-- > 0)
        cout << "+";
    }

    for(int i = 0; i < dos; i++){

      cout << "2";

      if(mas-- > 0)
        cout << "+";
    }

    for(int i = 0; i < tres; i++){

      cout << "3";

      if(mas-- > 0)
        cout << "+";
    }

  return 0;
}

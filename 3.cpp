#include <iostream>

using namespace std;

int main( ) {

  int w;
  cin >> w;

  for(int uno = 2; uno < 100; uno+=2 )
    for(int dos = 2; dos < 100; dos+=2 )
      if((uno + dos) == w) {
        cout << "YES";
        return 0;
      }

  cout << "NO";

  return 0;
}

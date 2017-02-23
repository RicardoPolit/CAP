#include <iostream>
#include <cmath>

using namespace std;

int main( ) {
  int res;
  for(int i = 0; i < 5; i++)
    for(int j = 0; j < 5; j++){
      int x;
      cin >> x;
      if(x == 1)
        res = abs(3-(i+1))+abs(3-(j+1));
    }
    cout << res;
  return 0;
}

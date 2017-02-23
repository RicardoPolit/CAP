//numero diferentes

#include <iostream>

using namespace std;

int main( ) {
  int num;
  cin >> num;
  int numl[num];
  int numaux[num];
  for(int i = 0; i < num; i++)
    cin >> numl[i];
  for(int i = 0; i < num; i++)
    numaux[numl[i]-1] = i+1;
  for(int i = 0; i < num; i++)
    cout << numaux[i] << " ";
  return 0;
}

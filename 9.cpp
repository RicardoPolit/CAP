#include <iostream>
#include <string>

using namespace std;

int main( ){
  string number;
  cin >> number;
  bool lucky = true;
  for(int i = 0; i < number.length(); i++) {
    if(number[i]!='4'&&number[i]!='7')
      lucky = false;
  }
  if(!lucky){
    int n = stoi(number);
    if(n%4==0||n%7==0||n%47==0)
      lucky = true;
  }
  if(lucky)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}

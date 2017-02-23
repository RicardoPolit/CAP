#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main( ) {

    string aux;
    vector < string > words;
    int num,x;

    cin >> num;
    x=num;

    while (x--) {
      cin >> aux;
      words.push_back(aux);
    }

    for(x = 0; x < num; x++) {
      int y = words[x].length();
      if(y>10){
        cout << words[x][0];
        cout << y-2;
        cout << words[x][y-1] << endl;
      }
      else{
        cout << words[x] << endl;
      }
    }


  return 0;
}

#include <iostream>
#include <vector>
#include <cstdlib>


using namespace std;

int main() {

  vector<int> v(1);
  pair <string,long long int> var0("HOLA",123425342);
  for (int i = 0; i < 10; i++) {
    v.push_back(rand()%10);
  }

  for (int i = 0; i < 10; i++) {
    cout << i+1 << ".- " << v[i] << endl;
  }

  cout << var0.first;
}

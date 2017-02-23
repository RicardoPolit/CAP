#include <iostream>
#include <string>

using namespace std;
//hello
int main() {
  string word;
  cin >> word;
  for(int i = 0; i < word.length(); i++) {
    if(word[i]=='h')
        for(int j = i+1; j < word.length(); j++) {
          if(word[j]=='e')
            for(int z = j+1; z < word.length(); z++){
              if(word[z]=='l')
                for(int e = z+1; e < word.length(); e++){
                  if(word[e]=='l')
                    for(int x = e+1; x < word.length(); x++){
                      if(word[x]=='o'){
                        cout << "YES";
                        return 0;
                      }

                    }

                }

            }

        }
  }
  cout << "NO";
  return 0;
}

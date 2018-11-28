#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
  const int press[] = { 1, 2, 3,
                        1, 2, 3,
                        1, 2, 3,
                        1, 2, 3,
                        1, 2, 3,
                        1, 2, 3, 4,
                        1, 2, 3,
                        1, 2, 3, 4 };
  int T;
  while( scanf("%d", &T) != EOF ){
    string text;
    getline(cin, text); // get \n

    for( int i = 1 ; i <= T; ++i ){
      getline(cin, text);

      int pressCount = 0;
      for( int j = 0 ; j < text.length() ; ++j ){
        if( text[j] == ' ' ){
          ++pressCount;
          continue;
        }
        pressCount += press[(int)(text[j]-'a')];
      }

      printf("Case #%d: %d\n", i, pressCount);
    }
  }
  return 0;
}

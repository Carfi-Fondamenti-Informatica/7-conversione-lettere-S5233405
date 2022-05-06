#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char x;
    cin >> x;
    if (number(x)==1 && x>=97 && x<=122){
        cout << char (x-32);
    } else if (number(x)==1 && x>=65 && x<=90 ){
        cout << char (x+32);
    } else {
        cout <<"errore";
    }
  return 0;
}

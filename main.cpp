#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char n;
    cin >> n;
    if (number(n)==1 && n>=97 && n<=122){
        cout << char (n-32);
    } else if (number(n)==1 && n>=65 && n<=90 ){
        cout << char (n+32);
    } else {
        cout <<"errore";
    }
  return 0;
}

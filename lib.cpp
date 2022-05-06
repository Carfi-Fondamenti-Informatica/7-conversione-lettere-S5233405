#include "lib.h"

bool number (int a){
    if ((a>=65 && a<=90) | (a>=97 && a<=122)){
        return 1;
    } else {
        return 0;
    }
}

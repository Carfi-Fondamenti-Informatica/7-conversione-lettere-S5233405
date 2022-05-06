#include "lib.h"

bool number (int x){
    if ((x>=65 && x<=90) | (x>=97 && x<=122)){
        return 1;
    } else {
        return 0;
    }
}

#include <iostream>
#include "easy.h"
using namespace std;
int itc_revnbr(int num){
    cout << num % 10 << num % 100 / 10 << num / 100;
    return num;

}

#include "factorial.h"

int factorial (int n){
  int result = 1;
  while (n > 0){
    result = result * n;
    n =  n-1;
  }
  return result;
}

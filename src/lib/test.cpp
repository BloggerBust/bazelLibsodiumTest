#include <iostream>
#include "test.h"

using namespace std;
                   
TestLibSodium::TestLibSodium(){
  if(sodium_init() < 0) {
    cout << "panic! the library couldn't be initialized, it is not safe to use" 
      }
}

#include <iostream>
#include "test.h"

using namespace std;
                   
TestLibsodium::TestLibsodium(){

  if(sodium_init() < 0) {
    cout << "panic! the library couldn't be initialized, it is not safe to use";
  }
  else{
    cout << "W00t! the libsodium library has been initialized";
  }
}

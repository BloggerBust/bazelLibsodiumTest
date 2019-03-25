#include <iostream>
#include "TestLibsodium.h"

using namespace std;
                   
TestLibsodium::TestLibsodium(){

  if(sodium_init() < 0) {
    cout << "///////////////////////////////////////////////////////////////////////" << endl
         << "// panic! the library couldn't be initialized, it is not safe to use //" << endl
         << "///////////////////////////////////////////////////////////////////////" << endl;
  }
  else{
    cout << "//////////////////////////////////////////////////////" << endl
         << "// W00t! the Libsodium library has been initialized //" << endl
         << "//////////////////////////////////////////////////////" << endl;
  }
}

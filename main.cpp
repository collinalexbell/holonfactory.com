#include <iostream>
#include "holon_factory.h"

int main() {

  Factory f("Tree");
  cout << "Welcome to the factory town of " << f.getName() << endl;

}

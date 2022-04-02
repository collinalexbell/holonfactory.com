#include "holon_factory.h"
#include <string>

Factory::Factory(string name): name(name){
}

std::string Factory::getName() {
  return name;
}


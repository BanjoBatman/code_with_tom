#include "myClass.h" 
String myClass::getName(){
  return name;
}
myClass::myClass(String x)
{
  name=x;
}

myClass::~myClass(){}

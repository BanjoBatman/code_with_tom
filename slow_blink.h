#ifndef abstract_h
#define abstract_h
#include "abstract_blink.h"
#endif
class slow_blink : public abstract_blink
{
  public:
  void doBlink();
};

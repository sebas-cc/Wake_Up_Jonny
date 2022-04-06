#ifndef ENETITY_H
#define ENTITY_H

#include <iostream>

class Entity{
private:
  double hitPoints;
  int stamina;
public:
  Entity();
  virtual int fight()=0;
  virtual void movement()=0;
};

#endif

#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "velocity.h"

class FlyingObject
{
protected: //allow those who inherit this class to handle private vars.
   bool alive;
   Point point;
   Velocity velocity;

public:
   FlyingObject()
   {
      this->velocity = velocity;
      this->point = point;      
   }

   Point getPoint();
   Velocity getVelocity();
   void setPoint(Point point);
   void setVelocity(Velocity velocity);

   bool isAlive();
   void kill();
   virtual void advance();

   // The limit coordinates of the screen
   Point topLeft;
   Point bottomRight;
};

#endif
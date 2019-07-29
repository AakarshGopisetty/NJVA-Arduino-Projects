

#include <Servo.h>  // servo library

 

Servo base;  // servo control object
Servo bottom;
Servo top;
Servo claw;

void setup()
{
  // We'll now "attach" the servo1 object to digital pin 9.
  // If you want to control more than one servo, attach more
  // servo objects to the desired pins (must be digital).

  // Attach tells the Arduino to begin sending control signals
  // to the servo. Servos require a continuous stream of control
  // signals, even if you're not currently moving them.
  // While the servo is being controlled, it will hold its 
  // current position with some force. If you ever want to
  // release the servo (allowing it to be turned by hand),
  // you can call servo1.detach().

  base.attach(6);
  bottom.attach(9);
  top.attach(10);
  claw.attach(11);
}


void loop()
{
  int position;
  
  // To control a servo, you give it the angle you'd like it
  // to turn to. Servos cannot turn a full 360 degrees, but you
  // can tell it to move anywhere between 0 and 180 degrees.

  // Change position at full speed:
base.write(90);
delay(1000);
bottom.write(90);
delay(1000);
top.write(90);
delay(1000);
claw.write(90);
  
  
  // Change position at a slower speed:

  // To slow down the servo's motion, we'll use a for() loop
  // to give it a bunch of intermediate positions, with 20ms
  // delays between them. You can change the step size to make 
  // move faster than its full speed, and you won't be able
  // the servo slow down or speed up. Note that the servo can't
  // to update it any faster than every 20ms.

  // Tell servo to go to 180 degrees, stepping by two degrees 
   for(position = 0; position < 180; position += 2)
  {
    base.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }

  // Tell servo to go to 0 degrees, stepping by one degree

  for(position = 180; position >= 0; position -= 1)
  {                                
    base.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }





 for(position = 0; position < 180; position += 2)
  {
    bottom.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }

  // Tell servo to go to 0 degrees, stepping by one degree

  for(position = 180; position >= 0; position -= 1)
  {                                
    bottom.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }






 for(position = 0; position < 180; position += 2)
  {
    top.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }

  // Tell servo to go to 0 degrees, stepping by one degree

  for(position = 180; position >= 0; position -= 1)
  {                                
    top.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }








 
 for(position = 0; position < 180; position += 2)
  {
    claw.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }

  // Tell servo to go to 0 degrees, stepping by one degree

  for(position = 180; position >= 0; position -= 1)
  {                                
    claw.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }
}


 
 
 






 #include <Stepper.h> 

int numberofstep = 48*64; 
                                  

Stepper motor(numberofstep,8,9,10,11);          
void setup() 
{ 
 
  motor.setSpeed(9); // we set motor speed at 9
}
void loop() 
{ 
  motor.step(600); // the motor will run during 600 step (you can change the step)
  motor.step(-800); // the motor will run during 800 step in reverse (you can change the step)

}

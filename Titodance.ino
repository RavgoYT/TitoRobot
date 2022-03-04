#include <Servo.h>

Servo R_leg;
Servo R_foot;
Servo L_leg;
Servo L_foot;

void walk();
void home();
void stop();
void dance();


void setup() { // from the back perspective
  R_leg.attach(8);
  L_leg.attach(11);
  R_foot.attach(10);
  L_foot.attach(9);

}

void loop() {




}

void home() {
  R_leg.write(90);
  L_leg.write(90);
  R_foot.write(90);
  L_foot.write(90);


}

void dance() {
  
  home();
  delay(500);
  L_foot.write(130);
  R_foot.write(55);
  delay(500);
  R_foot.write(160);
  delay(300);
  R_foot.write(40);
  delay(300);
  R_foot.write(160);
  delay(300);
  R_foot.write(40);
  delay(300);
  R_foot.write(160);
  delay(300);
  R_foot.write(40);
  delay(1000);
  home();
  delay(500);
  R_foot.write(130);
  L_foot.write(55);
  delay(500);
  L_foot.write(160);
  delay(300);
  L_foot.write(40);
  delay(300);
  L_foot.write(160);
  delay(300);
  L_foot.write(40);
  delay(300);
  L_foot.write(160);
  delay(300);
  L_foot.write(40);
  delay(300);
  
  
  }
void stop() {

  delay(999999999999);

}

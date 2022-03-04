//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Otto avoid obstacles with ultrasonic sensor sample sketch code
//-- Otto DIY invests time and resources providing open source code and hardware, 
//-- please support by purchasing kits from https://www.ottodiy.com/
//-- Make sure to have installed all libraries: https://github.com/OttoDIY/OttoDIYLib
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <Otto.h>
Otto Otto;  //This is Otto!
//----------------------------------------------------------------------
#define LeftLeg 11 
#define RightLeg 8
#define LeftFoot 9 
#define RightFoot 10 
#define Buzzer  13 
#define trigPin 2 // ultrasonic sensor trigger pin
#define echoPin 3 // ultrasonic sensor echo pin

long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement



void setup() {
  Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer); //Set the servo pins and Buzzer pin
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
//  Serial.begin(9600);
//  Serial.println("Begin:"); // print some text in Serial Monitor

}

void loop() {


//  digitalWrite(trigPin, LOW);
//  delayMicroseconds(2);
//  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
//  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(trigPin, LOW);
//  // Reads the echoPin, returns the sound wave travel time in microseconds
//  duration = pulseIn(echoPin, HIGH);
//  // Calculating the distance
//  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
//  // Displays the distance on the Serial Monitor 
//  Serial.println(distance);
//    if (distance <= 15) {
////      Serial.println("Aha!");
//      Otto.sing(S_surprise);
//      Otto.playGesture(OttoConfused);
//      Otto.walk(5,1000,1); // BACKWARD x2
//   //   Otto.turn(3,1000,-1); // LEFT x3
//    }
//    Otto.walk(1,1000,-1); // FORWARD x1

Otto.home();

}

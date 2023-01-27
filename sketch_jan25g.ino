#include <Servo.h> //Servo motor library
#include <NewPing.h> //Ultrasonic sensor function library

const int LeftForward = 11;// L298N control pins
const int LeftBackward = 12;
const int RightForward = 9;
const int RightBackward = 10;

#define trig_pin 7 //sensor pins - analog input 1
#define echo_pin 8 //analog input 2
#define maximum_distance 200

boolean goesForward = false;
int distance = 100;
char val;

NewPing sonar(trig_pin, echo_pin, maximum_distance); //sensor function
Servo servo_motor; //servo name

void setup(){
  Serial.begin(9600);
  pinMode(RightForward, OUTPUT);
  pinMode(LeftForward, OUTPUT);
  pinMode(LeftBackward, OUTPUT);
  pinMode(RightBackward, OUTPUT);
  servo_motor.attach(3); //servo pin
  servo_motor.write(115);
  delay(2000);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
}

void loop(){
  program_bt();
  // program_ultrasonic();
}
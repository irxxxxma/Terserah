#include <NewPing.h> // Library sensor PING

#define TRIGGER_PIN 7 // Pin trigger HC-SR04
#define ECHO_PIN 8 // Pin echo HC-SR04
#define MAX_DISTANCE 200 // Jarak maksimum yang dapat diukur, maks 400 cm

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // Inisialisasi sensor
//Starting of Program
int m1a = 9;
int m1b = 10;
int m2a = 11;
int m2b = 12;
int kecepatan_motor = 90; // max 255
char val;

void setup() 
{  
pinMode(m1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(m2b, OUTPUT);  // Digital pin 13 set as output Pin
Serial.begin(9600);


pinMode(TRIGGER_PIN, OUTPUT);
pinMode(ECHO_PIN, INPUT);
Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
  {
  // delay(50);
  // Serial.print("Jarak = "); 
  // Serial.print(sonar.ping_cm());
  // Serial.println("cm"); 
  }

  if( val == 'U' || val == 'u' )
    {
     if (sonar.ping_cm() < 10) {
       maju(kecepatan_motor);
     }
     else {
       mundur(kecepatan_motor);
       delay(1000);
       stop();
     }
    }

  if(val == 'D' || val == 'd') // Backward
    {
     mundur(kecepatan_motor);
    }
  
  if(val == 'L' || val == 'l') //Left
  {
    kiri(kecepatan_motor);
  }
  if(val == 'R' || val == 'r') //Right
    {
     kanan(kecepatan_motor);
    }
    
  if(val == 'T' || val == 't') //Stop
  {
    stop();
  }
  if(val == 'F' || val == 'f') //Forward Right
  {
    maju_kanan(kecepatan_motor);
  }
  if(val == 'H' || val == 'h') //Backward Right
  {
    mundur_kiri(kecepatan_motor);
  }
  if(val == 'E' || val == 'e') //Forward Left
    {
     maju_kiri(kecepatan_motor);
    }
  if(val == 'G' || val == 'g') //Backward Left
    {
     mundur_kiri(kecepatan_motor);
    }
}    

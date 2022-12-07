#define D1 11
#define D2 12
#define D3 13
#define D7 10
#define D4 9
#define D5 8
#define D6 7
#define CMDE 4
#include <IRremote.h>

IRrecv receiver(CMDE); // create a receiver object of the IRrecv class
decode_results results; // create a results object of the decode_results class
unsigned long key_value = 0; // variable to store the pressed key value


/* Broches */
const byte PIN_LED_R = 6;
const byte PIN_LED_G = 3;
const byte PIN_LED_B = 5;
void setup() {
//Led rgb
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);
Serial.begin(9600); // begin serial communication with a baud rate of 9600
 receiver.enableIRIn(); // enable the receiver
 //leds
  pinMode(11,1);
   pinMode(12,OUTPUT);
   pinMode(13,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(CMDE,INPUT);//commande IR
pinMode(7,OUTPUT);//led
 digitalWrite(D1,0);
   digitalWrite(D2,0);
   digitalWrite(D3,0);
   digitalWrite(D4,0);
   digitalWrite(D5,0);
   digitalWrite(D6,0);
   digitalWrite(D7,0);


}

void loop() {
  int randonNB = random(1,6);
  if (digitalRead(CMDE) == 0) {
if (randonNB== 1 ){one();
}
if (randonNB== 2 ){two();
}
if (randonNB== 3){tree();
}
if (randonNB== 4 ){four();}
if (randonNB== 5 ){five();
}
if (randonNB== 6 ){six();
}
digitalWrite(3,1);
//led rgb 
displayColor(random(0,255),random(0,255),random(0,255));//couleur sous format rgb 


}
digitalWrite(PIN_LED_G,0);
digitalWrite(PIN_LED_R,0);
digitalWrite(PIN_LED_B,0);
}




void one(){
  digitalWrite(D7,1);
  delay(500);
  digitalWrite(D7,0);
}
void two(){
   digitalWrite(D1,1);
   digitalWrite(D6,1);
   delay(500);
    digitalWrite(D1,0);
   digitalWrite(D6,0);  
}
void tree(){
  digitalWrite(D1,1);
   digitalWrite(D6,1);
   digitalWrite(D7,1);
   delay(500);
   digitalWrite(D1,0);
   digitalWrite(D6,0);
   digitalWrite(D7,0);
}
void four(){
   digitalWrite(D1,1);
   digitalWrite(D4,1);
   digitalWrite(D3,1);
   digitalWrite(D6,1);
   delay(500);
   digitalWrite(D1,0);
   digitalWrite(D4,0);
   digitalWrite(D3,0);
   digitalWrite(D6,0);
}
void five(){
     digitalWrite(D1,1);
    digitalWrite(D4,1);
   digitalWrite(D3,1);
   digitalWrite(D6,1);
   digitalWrite(D7,1);
   delay(500);
   digitalWrite(D1,0);
   digitalWrite(D4,0);
   digitalWrite(D3,0);
   digitalWrite(D6,0);
   digitalWrite(D7,0);
}
void six(){
     digitalWrite(D1,1);
   digitalWrite(D2,1);
    digitalWrite(D4,1);
   digitalWrite(D3,1);
   digitalWrite(D5,1);
   digitalWrite(D6,1);
delay(500);
   digitalWrite(D1,0);
   digitalWrite(D2,0);
    digitalWrite(D4,0);
   digitalWrite(D3,0);
   digitalWrite(D5,0);
   digitalWrite(D6,0);
}
void displayColor(byte r, byte g, byte b) {

  // Assigne l'état des broches
  // Version cathode commune
  //analogWrite(PIN_LED_R, r);
  //analogWrite(PIN_LED_G, g);
  //analogWrite(PIN_LED_B, b);

  // Version anode commune
  analogWrite(PIN_LED_R, ~r);
  analogWrite(PIN_LED_G, ~g);
  analogWrite(PIN_LED_B, ~b);
}

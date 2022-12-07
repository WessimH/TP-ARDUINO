void setup(){
  pinMode(11,1);
   pinMode(12,OUTPUT);
   pinMode(13,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(7,OUTPUT);
   //eteindre un pin
   digitalWrite(11,0);
   digitalWrite(12,0);
   digitalWrite(13,0);
   digitalWrite(10,0);
   digitalWrite(9,0);
   digitalWrite(8,0);
   digitalWrite(7,0);
} 
void loop() {

int random_nb = random(1,7);

Serial.print(random_nb,DEC);
if (random_nb == 1)
   digitalWrite(11,1);
  
if (random_nb == 2){
   digitalWrite(11,1);
   digitalWrite(12,1);
  } 
  if (random_nb == 3){
   digitalWrite(11,1);
   digitalWrite(12,1);
   digitalWrite(13,1);
  } 
  if (random_nb == 4){
   digitalWrite(11,1);
   digitalWrite(12,1);
   digitalWrite(13,1);
   digitalWrite(10,1);
  } 
  if (random_nb == 5){
   digitalWrite(11,1);
   digitalWrite(12,1);
   digitalWrite(13,1);
   digitalWrite(10,1);
   digitalWrite(9,1);
  } 
  if (random_nb == 6){
   digitalWrite(11,1);
   digitalWrite(12,1);
   digitalWrite(13,1);
   digitalWrite(10,1);
   digitalWrite(9,1);
   digitalWrite(8,1);
  } 
  if (random_nb == 7){
   digitalWrite(11,1);
   digitalWrite(12,1);
   digitalWrite(13,1);
   digitalWrite(10,1);
   digitalWrite(9,1);
   digitalWrite(8,1);
   digitalWrite(7,1);
  }
 }


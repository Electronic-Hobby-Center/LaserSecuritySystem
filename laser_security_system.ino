///*********  AUTHOR :: Param Parekh  *********///
/*
    Project::Laser based Security System is a type of security and alarm system that uses laser light and a light sensor. A security system protects our homes, offices, banks, lockers etc.Here,We try to implement L.S.S(Laser security System) using Arduino,LDR sensor and Laser sensor.

  componenets Used:
  1) Laser Tx Module KY-008
  2) LDR(light dependent Module)
  3) Buzzer
  4) LED(green)
  5) ARDUINO UNO 
*/

int laser=2;     
int buzzer=3;
void setup() 
{
  pinMode(A0,INPUT);
  pinMode(laser,OUTPUT);
  Serial.begin(9600);
  pinMode(7,HIGH);
}
void loop() 
{
       int i=analogRead(A0);
       digitalWrite(laser,HIGH);
       delay(100);
       Serial.println(i);
       if(i>=100)
         {
            digitalWrite(7,HIGH);
            delay(100);
            tone(buzzer,1000);
            delay(100);
         }
       else
         {
            noTone(buzzer);
            delay(1000);
            digitalWrite(7,LOW);
            delay(100);
         }
}

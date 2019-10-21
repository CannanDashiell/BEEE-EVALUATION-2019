void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(2,INPUT);
  pinMode(1,INPUT);
}
void loop(){
  Serial.begin(9600);
   float d,t;
   digitalWrite(11,LOW);
   digitalWrite(11,HIGH);
   delayMicroseconds(10);
   digitalWrite(11,LOW);
   t=pulseIn(2,HIGH);
   d=0.017*t;
   Serial.print(d);
   if(d<=100)
   {  
     analogWrite(11,HIGH);
     {digitalWrite(13,HIGH);
      delay(50);
     digitalWrite(13,LOW);
           delay(50);
   }
   }
   else if(d>20)
   {
     analogWrite(11,0);
   }
  float a,b;
   digitalWrite(10,LOW);
   digitalWrite(10,HIGH);
   delayMicroseconds(10);
   digitalWrite(10,LOW);
   t=pulseIn(1,HIGH);
   a=0.017*b;
   Serial.print(a);
   if(a<=100)
   {
     
     analogWrite(10,HIGH);
     {digitalWrite(12,HIGH);
      delay(50);
     digitalWrite(12,LOW);
           delay(50);
   }
   }
   else if(a>20)
   {
     analogWrite(10,0);
   }
}

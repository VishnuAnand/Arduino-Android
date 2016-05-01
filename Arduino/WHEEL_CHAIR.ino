int LM1 = 6;
int LM2 = 7;
int RM1 = 10;
int RM2 = 11;
int ALM = 12;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
  pinMode(ALM, OUTPUT);  
  pinMode(LM1, OUTPUT);  
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())  
  {  
   int val = Serial.read();
   delay(20);  
   switch (val)
    {
      case 1: 
        digitalWrite(LM1, 0);  
        digitalWrite(RM1, 0); 
        digitalWrite(LM2, 1);  
        digitalWrite(RM2, 1);  
        delay(200);
        digitalWrite(LM1, LOW);  
        digitalWrite(RM1, LOW); 
        digitalWrite(LM2, LOW);  
        digitalWrite(RM2, LOW);  
        Serial.println("FORWARD");
        break;
      case 2 : 
        digitalWrite(LM1,HIGH);
        digitalWrite(LM2,LOW);
        digitalWrite(RM1,1);
        digitalWrite(RM2,0);    
        Serial.println("BACKWARD");
        delay(200);
        digitalWrite(LM1, LOW);  
        digitalWrite(RM1, LOW); 
        digitalWrite(LM2, LOW);  
        digitalWrite(RM2, LOW); 
        break;
      case 4 :
        digitalWrite(LM1,1);
        digitalWrite(LM2,0);
        digitalWrite(RM1,0);
        digitalWrite(RM2,1); 
        delay(200);
        digitalWrite(LM1, LOW);  
        digitalWrite(RM1, LOW); 
        digitalWrite(LM2, LOW);  
        digitalWrite(RM2, LOW);   
        Serial.println("LEFT TURN");
        break;
      case 3 :
        digitalWrite(LM1,0);
        digitalWrite(LM2,1);
        digitalWrite(RM1,1);
        digitalWrite(RM2,0);   
        delay(200);
        digitalWrite(LM1, LOW);  
        digitalWrite(RM1, LOW); 
        digitalWrite(LM2, LOW);  
        digitalWrite(RM2, LOW);
        Serial.println("RIGHT TURN");
        break;
      case 5 : 
        digitalWrite(ALM,HIGH);
        delay(200);
        digitalWrite(ALM,LOW);   
      }  
    }
}

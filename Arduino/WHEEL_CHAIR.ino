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

}

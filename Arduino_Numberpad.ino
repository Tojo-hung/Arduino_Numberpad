#define R1 3
#define R2 5
#define R3 6
#define R4 9
#define C1 A1
#define C2 A2 
#define C3 A3
#define C4 A4

int R1_data;
int R2_data;
int R3_data;
int R4_data;
int C1_data;
int C2_data;
int C3_data;
int C4_data;

int R = 0;
int C = 0;

void setup() {
  Serial.begin(9600);
  pinMode(R1, INPUT);
  pinMode(R2, INPUT);
  pinMode(R3, INPUT);
  pinMode(R4, INPUT);
  
  analogWrite(R1, 255);
  analogWrite(R2, 255);
  analogWrite(R3, 255);
  analodWrite(R4, 255);
  
}

void loop() {
  
  R1_data = digitalRead(R1);
  R2_data = digitalRead(R2);
  R3_data = digitalRead(R3);
  R4_data = digitalRead(R4);
  
  C1_data = analogRead(C1);
  C2_data = analogRead(C2);
  C3_data = analogRead(C3);
  C4_data = analogRead(C4);
  
  if(R1_data == LOW){
    R = 1;
  }
  if(R2_data == LOW){
    R = 2;
  }
  if(R3_data == LOW){
    R = 3;
  }
  if(R4_data == LOW){
    R = 4;
  }
  
  if(C1_data > 0){
    C = 1;
  }
  if(C2_data > 0){
    C = 2;
  }
  if(C3_data > 0){
    C = 3;
  }
  if(C4_data > 0){
    C = 4;
  }
  
  Serial.println("............................");
  Serial.println("R");
  Serial.println("C");
}

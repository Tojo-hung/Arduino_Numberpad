int x;
int y;

void setup() {
  pinMode(10, INPUT);
  Serial.begin(9600);
  analogWrite(10, 255);
}

void loop() {
  analogWrite(10, 255);
  x = analogRead(A1);
  y = digitalRead(10);
  Serial.println(".......................");
  Serial.println(x);
  Serial.println(y);
  
}

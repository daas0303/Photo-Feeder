const byte motorSignal_PIN = D2;

void setup() {
  // put your setup code here, to run once:

  // pinMode(A0, INPUT); // Light sensor
  
  pinMode(motorSignal_PIN, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(10000);
  digitalWrite(motorSignal_PIN, HIGH);
  delay(3000);
  digitalWrite(motorSignal_PIN, LOW);
  Serial.println("Working >B)");

}

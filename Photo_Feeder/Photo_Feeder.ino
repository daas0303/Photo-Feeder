const byte motorSignal_PIN = D2;
const byte sensor_PIN = A2;
const int pictureRead_DELAY = 5000; // (ms) delay until checking the sensor again, allows for the picture to get into the scanner before the motor cuts
const int sensor_THRESHOLD = 512; // Max of 1024, min of 0

void setup() {
  // put your setup code here, to run once:

  // pinMode(A0, INPUT); // Light sensor
  
  pinMode(motorSignal_PIN, OUTPUT);
  pinMode(sensor_PIN, INPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (analogRead(sensor_PIN) > sensor_THRESHOLD) {
    // If it is bright (no picture in slot)
    delay(2000);
    digitalWrite(motorSignal_PIN, HIGH);
  }
  
  else {
    // If there is a picture in da way
    delay(pictureRead_DELAY);
    digitalWrite(motorSignal_PIN, LOW);
  }

  Serial.println("Working >B)");

}

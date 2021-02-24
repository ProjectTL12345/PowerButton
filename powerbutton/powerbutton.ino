int power = 13;
int powerButton = 7;

void setup() {
  pinMode(powerButton, INPUT);
  pinMode(power, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  Serial.begin(400); // 0.4 Second
  if (digitalRead(powerButton)) {
    digitalWrite(power, HIGH);
  } else {
    digitalWrite(power, LOW);
  }

  Serial.println("Power Status:" + power);
}

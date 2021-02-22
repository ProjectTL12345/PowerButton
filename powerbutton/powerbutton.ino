int power = 13;
int powerButton = 7;

int reset = 12;
int resetButton = 6;

void getButtonPush(int powerType, int buttonType);

void setup() {
  pinMode(power, OUTPUT);
  pinMode(powerButton, INPUT);
  pinMode(reset, OUTPUT);
  pinMode(resetButton, INPUT);
}

void loop() {
  int getPowerButton = digitalRead(7);
  int getResetButton = digitalRead(8);
  
  getButtonPush(power, getPowerButton);
  getButtonPush(power, getResetButton);
}

void getButtonPush(int powerType, int buttonType) {
  digitalWrite(powerType, buttonType);
}

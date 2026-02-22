#define RELAY 7

void setup() {
  pinMode(RELAY, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "on") {
      digitalWrite(RELAY, HIGH);
      Serial.println("Device ON");
    }
    else if (command == "off") {
      digitalWrite(RELAY, LOW);
      Serial.println("Device OFF");
    }
  }
}

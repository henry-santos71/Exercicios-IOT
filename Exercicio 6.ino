int estadoBotao = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  estadoBotao = digitalRead(2);

  if (estadoBotao == HIGH) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
}
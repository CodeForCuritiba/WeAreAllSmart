int pino = 1;
int outroPino = 2;
int sensor = 0;
void setup() {
  pinMode(pino, INPUT);
  pinMode(outroPino, OUTPUT);

}

void loop() {
  digitalWrite(outroPino, LOW);
  sensor = digitalRead(pino);
}

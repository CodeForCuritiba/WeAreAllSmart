void setup() {
  // put your setup code here, to run once:

}

int porta = A0;
int outraPorta = A10;
int sensorValor = 0;

void loop() {
  sensorValor = analogRead(porta);
  digitalWrite(outraPorta, sensorValor);
}

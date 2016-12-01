//Isso é um comentário e o arduino vai ignorar ele!

//Configura o arduino: portas, serial etc:
void setup() {
  //Configura a velocidade da seria(usb):
  Serial.begin(9600);
}

void loop() {
  //Exeplos de como mandar mensagens para o pc:
  Serial.print("Estou na mesma linha!");
  Serial.println("Hey, estou em uma linha nova!");
}

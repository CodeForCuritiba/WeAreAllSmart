//Isso é um comentário e o arduino vai ignorar ele!
void setup() {
  // put your setup code here, to run once:

}

float media = (7.4 + 5.6 + 8 + 9) / 4;

void loop() {
 //Decide a situação do aluno:
 if(media >= 7){
    Serial.println("Aprovado!");
 }else if (media >= 4 and media < 7) {
    Serial.println("Final!"); 
 }else{
    Serial.println("Reprovado!"); 
 }

 //Dá os parabéns caso tire dez:
 if(media == 10){
    Serial.println("Parabéns!"); 
 }
}

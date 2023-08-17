const int ledPin = 13; // Pino digital onde o LED está conectado

void setup() {
  pinMode(ledPin, OUTPUT); // Configura o pino do LED como saída
}

void loop() {
  digitalWrite(ledPin, HIGH); // Liga o LED
  delay(1000);               // Espera por 1 segundo
  digitalWrite(ledPin, LOW);  // Desliga o LED
  delay(1000);               // Espera por 1 segundo
}

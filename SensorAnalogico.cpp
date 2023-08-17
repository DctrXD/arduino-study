const int sensorPin = A0; // Pino analógico onde o sensor está conectado

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Lê o valor do sensor
  Serial.print("Valor do sensor: ");
  Serial.println(sensorValue); // Imprime o valor no monitor serial
  delay(1000); // Pequena pausa
}

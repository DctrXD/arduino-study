#include <Servo.h>

Servo myservo;  // Objeto do servo

void setup() {
  myservo.attach(9); // Pino onde o servo está conectado
}

void loop() {
  for (int angle = 0; angle <= 180; angle += 1) {
    myservo.write(angle); // Define o ângulo do servo
    delay(15);            // Pequena pausa para mover suavemente
  }
  for (int angle = 180; angle >= 0; angle -= 1) {
    myservo.write(angle);
    delay(15);
  }
}

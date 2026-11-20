// Practica 06 - Semaforo 1
// Proyecto realizado en Wokwi con ESP32.
// Secuencia: rojo (2 segundos), verde (2 segundos), amarillo (0,5 segundos).

const int rojo = 12;
const int amarillo = 10;
const int verde = 8;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);

  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, LOW);
}

void loop() {
  digitalWrite(rojo, HIGH);
  delay(2000);
  digitalWrite(rojo, LOW);

  digitalWrite(verde, HIGH);
  delay(2000);
  digitalWrite(verde, LOW);

  digitalWrite(amarillo, HIGH);
  delay(500);
  digitalWrite(amarillo, LOW);
}

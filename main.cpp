// Proyecto: Semaforo con ESP32 en Wokwi
// Conexiones: LED rojo al GPIO 25, amarillo al GPIO 26 y verde al GPIO 27.

const int ledRojo = 25;
const int ledAmarillo = 26;
const int ledVerde = 27;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Luz roja: detenerse
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, LOW);
  delay(5000);

  // Luz verde: avanzar
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(5000);

  // Luz amarilla: precaucion
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000);
}
// Declaração de variáveis
const int relePin = A0; // Pino ao qual o relé está conectado = A0

// Função setup()
void setup() {
  // Configura o pino como saída
  pinMode(relePin, OUTPUT);
}

// Função loop()
void loop() {
   // Aguarda 5 segundos
  delay(5000);
  // Aciona o relé
  digitalWrite(relePin, HIGH);
  // Aguarda 60 segundos
  delay(60000);
  // Desativa o relé
  digitalWrite(relePin, LOW);
  // Aguarda 8 horas segundos
  delay(28800000);
}

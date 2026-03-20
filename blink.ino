/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
// Semáforo com 3 LEDs

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Verde
  pinMode(8, OUTPUT);           // Vermelho
  pinMode(7, OUTPUT);           // Amarelo
}

void loop() {
  // VERDE ligado
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(3000); // 3 segundos

  // AMARELO ligado
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(2000); // 2 segundos

  // VERMELHO ligado
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(3000); // 3 segundos
}

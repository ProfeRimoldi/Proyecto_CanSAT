/*
  Autor:  Prof. Damián Rimoldi
          UTN FRH - GLT
          Mayo 2025

*/

#include <SPI.h>
#include <LoRa.h>

#define SS 5
#define DI0 17

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("Iniciando receptor LoRa...");
  
  LoRa.setPins(SS, -1, DI0);  // -1 para indicar que no se usa el pin RESET

  if (!LoRa.begin(433E6)) {
    Serial.println("Fallo en la inicialización de LoRa!");
    while (1);
  }

  Serial.println("Receptor LoRa inicializado correctamente.");
}

void loop() {
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    String mensaje = "";
    while (LoRa.available()) {
      mensaje += (char)LoRa.read();
    }
    Serial.print("Mensaje recibido: ");
    Serial.println(mensaje);
  }
}

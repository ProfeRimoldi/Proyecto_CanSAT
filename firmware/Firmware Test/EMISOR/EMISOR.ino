/*
  Autor:  Prof. Damián Rimoldi
          UTN FRH - GLT
          Mayo 2025

*/


#include <SPI.h>
#include <LoRa.h>

#define SS 5
#define RST 2
#define DI0 17

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("Iniciando transmisor LoRa...");
  
  LoRa.setPins(SS, RST, DI0);

  if (!LoRa.begin(433E6)) {
    Serial.println("Fallo en la inicialización de LoRa!");
    while (1);
  }

  Serial.println("Transmisor LoRa inicializado correctamente.");
}

void loop() 
{
  if (Serial.available()) 
  {
    String mensaje = Serial.readString();
    
    Serial.print("Enviando mensaje: ");
    Serial.println(mensaje);
    
    LoRa.beginPacket();
    LoRa.print(mensaje);
    LoRa.endPacket();
  }
  for (int A=0; A<10000; A=A+1)
  {
        LoRa.beginPacket();
    LoRa.print(A);
    LoRa.endPacket();
    Serial.println(A);
    delay(500);
  }
}

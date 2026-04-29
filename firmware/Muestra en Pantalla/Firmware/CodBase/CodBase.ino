/*
  Autor:  Prof. Damián Rimoldi
          UTN FRH - GLT
          Mayo 2025

*/
#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

// Variables para acumular los ángulos de inclinación
float angleX = 0;
float angleY = 0;
float angleZ = 0;

// Variable para almacenar el tiempo previo
unsigned long lastTime;

void setup() {
  Serial.begin(57600);  // Reducir velocidad de transmisión
  while (!Serial)
    delay(10);

  if (!mpu.begin()) {
    Serial.println("No se encontró MPU6050, verifique la conexión!");
    while (1)
      yield();
  }

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

  Serial.println("MPU6050 listo!");
  
  // Inicializar el tiempo previo
  lastTime = millis();
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Calcular el tiempo transcurrido (dt) en segundos
  unsigned long currentTime = millis();
  float dt = (currentTime - lastTime) / 1000.0;
  lastTime = currentTime;

  // Acumular los ángulos de rotación basados en las velocidades angulares
  angleX += g.gyro.x * dt;
  angleY += g.gyro.y * dt;
  angleZ += g.gyro.z * dt;

  // Enviar datos acumulados en una sola línea separados por comas
  Serial.print(a.acceleration.x); Serial.print(",");
  Serial.print(a.acceleration.y); Serial.print(",");
  Serial.print(a.acceleration.z); Serial.print(",");
  Serial.print(angleX); Serial.print(",");
  Serial.print(angleY); Serial.print(",");
  Serial.println(angleZ);  // Terminar la línea con un salto de línea

  Serial.flush();  // Asegurarse de que todos los datos se enviaron
  delay(50);  // Reducir el tiempo de espera entre envíos de datos
}

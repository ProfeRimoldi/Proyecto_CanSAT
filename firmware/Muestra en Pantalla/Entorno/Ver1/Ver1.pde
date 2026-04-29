/*
  Autor:  Prof. Damián Rimoldi
          UTN FRH - GLT
          Mayo 2025

*/
import processing.serial.*;

Serial myPort;  // Puerto serie
String[] data;  // Datos recibidos
float ax, ay, az, gx, gy, gz;  // Aceleración y giroscopio

float alpha = 0.9;  // Factor de suavizado (entre 0 y 1)

void setup() {
  size(800, 600, P3D);
  frameRate(60);

  String portName = "COM6";  // Puerto donde está conectado el ESP32
  myPort = new Serial(this, portName, 57600);  // Reducir velocidad de transmisión
  myPort.buffer(1024);  // Aumentar el buffer a 1024 bytes
  myPort.bufferUntil('\n');
}

void draw() {
  background(200);

  // Dibujar el cohete
  pushMatrix();
  translate(width/2 , height/2);
  rotateZ(gy);
  rotateY(gx);
  rotateX(gz);
  fill(255, 0, 0);
  box(50, 200, 50);
  popMatrix();
}

void serialEvent(Serial myPort) {
  String input = myPort.readStringUntil('\n');
  input = trim(input);
  data = split(input, ',');

  if (data.length == 6) {
    try {
      ax = lerp(ax, float(data[0]), alpha);
      ay = lerp(ay, float(data[1]), alpha);
      az = lerp(az, float(data[2]), alpha);
      gx = lerp(gx, float(data[3]), alpha);
      gy = lerp(gy, float(data[4]), alpha);
      gz = lerp(gz, float(data[5]), alpha);
    } catch (Exception e) {
      println("Error en la conversión de datos: " + e);
    }
  } else {
    println("Datos incompletos recibidos");
    delay(50);  // Retraso para evitar acumulación de datos
  }
}

# Firmware – Proyecto CanSat

Esta carpeta contiene el desarrollo de firmware y software auxiliar utilizado para validación, pruebas de laboratorio y futuras implementaciones del sistema CanSat.

Actualmente se incluyen códigos base, pruebas funcionales y herramientas de visualización para distintos subsistemas del proyecto.

---

## Contenido actual

```text
firmware/
├── EMISOR.ino
├── RECEPTOR.ino
├── CodBase.ino
├── TestLED.ino
├── Ver1.pde
└── README.md
```

---

## Descripción de archivos

---

### EMISOR.ino

Código de prueba para transmisión LoRa utilizando ESP32 + módulo SX1278 (433 MHz).

### Función

Permite enviar datos por comunicación LoRa desde la estación emisora hacia el receptor.

### Características

* inicialización de módulo LoRa
* frecuencia configurada en 433 MHz
* transmisión de mensajes desde monitor serie
* envío automático de secuencia numérica incremental
* validación básica de enlace inalámbrico

### Objetivo

Verificar estabilidad y alcance inicial de la comunicación LoRa entre nodos.

---

### RECEPTOR.ino

Código de prueba para recepción LoRa utilizando ESP32 + módulo SX1278 (433 MHz).

### Función

Recibe paquetes enviados por el transmisor y los muestra por puerto serie.

### Características

* inicialización de receptor LoRa
* recepción de paquetes
* reconstrucción de mensajes
* monitoreo por Serial Monitor

### Objetivo

Validar la recepción correcta de telemetría y pruebas de enlace.

---

### CodBase.ino

Código base para adquisición de datos utilizando sensor MPU6050 + ESP32.

### Función

Lee aceleración y velocidad angular del MPU6050 y transmite los datos por puerto serie.

### Características

* lectura de acelerómetro
* lectura de giroscopio
* integración temporal de velocidades angulares
* cálculo de ángulos acumulados
* envío de datos seriales en formato CSV

### Variables transmitidas

* aceleración X
* aceleración Y
* aceleración Z
* ángulo X
* ángulo Y
* ángulo Z

### Objetivo

Base de pruebas para sistemas de navegación, orientación e inclinación del vehículo.

---

### Ver1.pde

Visualización 3D en Processing para representación de orientación del sistema.

### Función

Recibe datos seriales desde el ESP32 y representa gráficamente la inclinación del cohete en tiempo real.

### Características

* comunicación serial con Processing
* lectura de datos CSV
* suavizado mediante filtro simple
* representación 3D con entorno P3D
* simulación visual del movimiento del cohete

### Objetivo

Visualizar rápidamente el comportamiento dinámico del sistema durante pruebas de sensores.

---

### TestLED.ino

Código de testeo funcional para la Earth Station Dev Board.

### Función

Permite verificar salidas digitales, buzzer, relay y conexiones principales de la placa.

### Características

* test secuencial de GPIOs
* activación progresiva de pines
* validación visual y sonora
* múltiples velocidades de prueba
* chequeo de líneas asociadas a GPS, MPU, buzzer y relay

### Objetivo

Confirmar funcionamiento eléctrico inicial de la placa fabricada.

---

## Próximas etapas

El firmware definitivo evolucionará hacia:

* máquina de estados de misión
* adquisición de sensores de vuelo
* altimetría
* detección de eventos (ignición, apogeo, despliegue)
* telemetría LoRa
* almacenamiento de datos
* comunicación con estación terrestre
* lógica de seguridad redundante

---

## Objetivo general

Mantener trazabilidad y evolución progresiva del firmware desde pruebas iniciales hasta la versión final de vuelo.


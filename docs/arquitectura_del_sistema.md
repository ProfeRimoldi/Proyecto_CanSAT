# Arquitectura del Sistema – Proyecto CanSat

## 1. Descripción general

El sistema CanSat se organiza en dos bloques principales:

* Onboard Computer (OBC)
* Earth Station Dev Board

El OBC corresponde al sistema embarcado, encargado de adquirir datos, procesar información de sensores, ejecutar la lógica de misión y transmitir telemetría.

La Earth Station Dev Board corresponde al sistema de tierra, orientado a recibir datos, visualizar información, validar comunicaciones y asistir durante pruebas de laboratorio o campo.

---

## 2. Bloques principales

### 2.1 Onboard Computer

Funciones principales:

* adquisición de sensores
* procesamiento de datos
* comunicación inalámbrica
* gestión de eventos de misión
* almacenamiento o transmisión de telemetría
* integración con firmware ESP32

### 2.2 Earth Station Dev Board

Funciones principales:

* recepción de telemetría
* monitoreo de datos
* pruebas de enlace LoRa
* asistencia durante validaciones
* interfaz con computadora o sistema de visualización

---

## 3. Arquitectura funcional

```text
[Sensores] 
    ↓
[Onboard Computer - ESP32]
    ↓
[Comunicación LoRa]
    ↓
[Earth Station Dev Board]
    ↓
[PC / Visualización / Registro]
```

---

## 4. Relación hardware-firmware

El hardware proporciona las interfaces físicas necesarias para sensores, comunicación, alimentación y señales auxiliares.

El firmware define el comportamiento lógico del sistema, incluyendo:

* inicialización de periféricos
* lectura de sensores
* procesamiento de datos
* comunicación LoRa
* lógica de misión
* gestión de estados
* transmisión de telemetría

---

## 5. Estado actual

Actualmente el proyecto cuenta con:

* PCB del Onboard Computer fabricada y documentada como `Rev_A`
* PCB de Earth Station fabricada y documentada como `Rev_A`
* firmware de prueba para LoRa, sensores y visualización
* validación de comunicación LoRa
* documentación inicial de arquitectura y trazabilidad

---

## 6. Próximas etapas

Las próximas etapas técnicas incluyen:

* consolidar firmware base
* definir máquina de estados de misión
* integrar sensores principales
* registrar pruebas de laboratorio
* documentar cambios entre revisiones
* avanzar hacia una versión estable de vuelo

---

## 7. Objetivo de arquitectura

Definir una estructura clara que permita evolucionar el sistema desde pruebas parciales hacia un sistema integrado, manteniendo trazabilidad entre diseño electrónico, firmware, fabricación y validación experimental.

# Proyecto CanSat – Base Aérea El Palomar

Sistema electrónico para misión tipo CanSat desarrollado en la EEST N°4 I Brigada Aérea El Palomar, orientado al diseño, validación y documentación de hardware y firmware para sistemas embarcados aeroespaciales.

Este repositorio centraliza el desarrollo de:

* Onboard Computer (OBC)
* Earth Station Dev Board
* Firmware ESP32
* Documentación técnica
* Revisiones de fabricación de PCB

---

## Estructura del proyecto

```text
Proyecto_CanSAT/
├── hardware/
│   ├── Onboard_Comp/
│   │   ├── kicad/
│   │   ├── outputs/
│   │   │   └── Rev_A/
│   │   └── docs/
│   │
│   └── Earth_Station/
│       ├── kicad/
│       ├── outputs/
│       └── docs/
│
├── firmware/
│
├── docs/
│
└── README.md
```

---

## Hardware

### Onboard Computer (OBC)

Computadora principal embarcada encargada de:

* adquisición de sensores
* telemetría
* control de misión
* gestión de eventos de vuelo
* integración con estación terrestre

Actualmente cuenta con:

* diseño PCB en KiCad
* esquemático jerárquico
* revisión formal de fabricación `Rev_A`
* Gerbers
* Drill files
* BOM
* PDF de esquemático
* renders e imágenes técnicas

---

### Earth Station Dev Board

Placa de desarrollo para estación terrestre destinada a:

* recepción de telemetría
* configuración de parámetros
* validación de comunicaciones
* integración de subsistemas

Actualmente cuenta con:

* diseño PCB en KiCad
* documentación estructurada
* preparación para revisión formal de fabricación

---

## Firmware

Desarrollo basado en ESP32 para:

* adquisición de datos
* control de sensores
* comunicaciones
* telemetría
* lógica de misión

La estructura de firmware se encuentra en evolución y será versionada junto con las revisiones de hardware.

---

## Gestión de revisiones

Las revisiones de fabricación se organizan mediante:

```text
outputs/Rev_A/
outputs/Rev_B/
outputs/Rev_C/
```

permitiendo trazabilidad completa entre:

* diseño fuente
* fabricación real
* validaciones de laboratorio
* mejoras de revisión

---

## Objetivo

Mantener una metodología de desarrollo profesional para proyectos electrónicos aeroespaciales, con trazabilidad completa de hardware, firmware y documentación técnica.

---

## Autor

Damián Rimoldi
Ingeniería Electrónica – UTN FRH
GLT – Grupo de Lanzadores Tecnológicos
EEST N°4 I Brigada Aérea El Palomar

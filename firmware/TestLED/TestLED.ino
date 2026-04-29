//      Código de Testeo para la placa Earth Station Dev. Board.
//                  
//Prof. Damián Rimoldi              Oct. 21, 2024

#define RxGPS 25
#define TxGPS 26

#define HMOSI 13
#define HMISO 12

#define BUZZ 0

#define VMISO 19
#define VMOSI 23

#define SDAMPU 21

#define RELAY 2

int tiempo1 =500;
int tiempo2 =200;
int tiempo3 =100;
int tiempo4 =50;
int tiempo5 =20;
int veces =5;
void setup() {
  pinMode(RxGPS, OUTPUT);
  pinMode(TxGPS, OUTPUT);
  pinMode(HMOSI, OUTPUT);
  pinMode(HMISO, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(VMISO, OUTPUT);
  pinMode(VMOSI, OUTPUT);
  pinMode(SDAMPU, OUTPUT);
  pinMode(RELAY, OUTPUT);
  

  Serial.begin(9600);
}

void loop() {
 /* Serial.println("Indique el tiempo de secuencia: ");
  while(Serial.available()) {};
  tiempo = Serial.parseInt();
  Serial.println("Indique las repeticiones de secuencia: ");
  while(Serial.available()) {};
  veces = Serial.parseInt();*/
  for(int i=0; i<veces; i++)
    {
      digitalWrite(VMOSI, HIGH);
      delay (tiempo1);
      digitalWrite(VMOSI, LOW);
      digitalWrite(BUZZ, HIGH);
      delay (tiempo1);
      digitalWrite(BUZZ, LOW);
      digitalWrite(VMISO, HIGH);
      delay (tiempo1);
      digitalWrite(VMISO, LOW);
      digitalWrite(SDAMPU, HIGH);
      delay (tiempo1);
      digitalWrite(SDAMPU, LOW);
      digitalWrite(TxGPS, HIGH);
      delay (tiempo1);
      digitalWrite(TxGPS, LOW);
      digitalWrite(RxGPS, HIGH);
      delay (tiempo1);
      digitalWrite(RxGPS, LOW);
      digitalWrite(HMOSI, HIGH);
      delay (tiempo1);
      digitalWrite(HMOSI, LOW);
      digitalWrite(HMISO, HIGH);
      delay (tiempo1);
      digitalWrite(HMISO, LOW);
      digitalWrite(RELAY, HIGH);
      delay (tiempo1);
      digitalWrite(RELAY, LOW);
      }
  for(int i=0; i<veces; i++)
    {
      digitalWrite(VMOSI, HIGH);
      delay (tiempo2);
      digitalWrite(VMOSI, LOW);
      digitalWrite(BUZZ, HIGH);
      delay (tiempo2);
      digitalWrite(BUZZ, LOW);
      digitalWrite(VMISO, HIGH);
      delay (tiempo2);
      digitalWrite(VMISO, LOW);
      digitalWrite(SDAMPU, HIGH);
      delay (tiempo2);
      digitalWrite(SDAMPU, LOW);
      digitalWrite(TxGPS, HIGH);
      delay (tiempo2);
      digitalWrite(TxGPS, LOW);
      digitalWrite(RxGPS, HIGH);
      delay (tiempo2);
      digitalWrite(RxGPS, LOW);
      digitalWrite(HMOSI, HIGH);
      delay (tiempo2);
      digitalWrite(HMOSI, LOW);
      digitalWrite(HMISO, HIGH);
      delay (tiempo2);
      digitalWrite(HMISO, LOW);
      digitalWrite(RELAY, HIGH);
      delay (tiempo2);
      digitalWrite(RELAY, LOW);
      }
  for(int i=0; i<veces; i++)
    {
      digitalWrite(VMOSI, HIGH);
      delay (tiempo3);
      digitalWrite(VMOSI, LOW);
      digitalWrite(BUZZ, HIGH);
      delay (tiempo3);
      digitalWrite(BUZZ, LOW);
      digitalWrite(VMISO, HIGH);
      delay (tiempo3);
      digitalWrite(VMISO, LOW);
      digitalWrite(SDAMPU, HIGH);
      delay (tiempo3);
      digitalWrite(SDAMPU, LOW);
      digitalWrite(TxGPS, HIGH);
      delay (tiempo3);
      digitalWrite(TxGPS, LOW);
      digitalWrite(RxGPS, HIGH);
      delay (tiempo3);
      digitalWrite(RxGPS, LOW);
      digitalWrite(HMOSI, HIGH);
      delay (tiempo3);
      digitalWrite(HMOSI, LOW);
      digitalWrite(HMISO, HIGH);
      delay (tiempo3);
      digitalWrite(HMISO, LOW);
      digitalWrite(RELAY, HIGH);
      delay (tiempo3);
      digitalWrite(RELAY, LOW);
      }
  for(int i=0; i<veces; i++)
    {
      digitalWrite(VMOSI, HIGH);
      delay (tiempo4);
      digitalWrite(VMOSI, LOW);
      digitalWrite(BUZZ, HIGH);
      delay (tiempo4);
      digitalWrite(BUZZ, LOW);
      digitalWrite(VMISO, HIGH);
      delay (tiempo4);
      digitalWrite(VMISO, LOW);
      digitalWrite(SDAMPU, HIGH);
      delay (tiempo4);
      digitalWrite(SDAMPU, LOW);
      digitalWrite(TxGPS, HIGH);
      delay (tiempo4);
      digitalWrite(TxGPS, LOW);
      digitalWrite(RxGPS, HIGH);
      delay (tiempo4);
      digitalWrite(RxGPS, LOW);
      digitalWrite(HMOSI, HIGH);
      delay (tiempo4);
      digitalWrite(HMOSI, LOW);
      digitalWrite(HMISO, HIGH);
      delay (tiempo4);
      digitalWrite(HMISO, LOW);
      digitalWrite(RELAY, HIGH);
      delay (tiempo4);
      digitalWrite(RELAY, LOW);
      }
  for(int i=0; i<10; i++)
    {
      digitalWrite(VMOSI, HIGH);
      delay (tiempo5);
      digitalWrite(VMOSI, LOW);
      digitalWrite(BUZZ, HIGH);
      delay (tiempo5);
      digitalWrite(BUZZ, LOW);
      digitalWrite(VMISO, HIGH);
      delay (tiempo5);
      digitalWrite(VMISO, LOW);
      digitalWrite(SDAMPU, HIGH);
      delay (tiempo5);
      digitalWrite(SDAMPU, LOW);
      digitalWrite(TxGPS, HIGH);
      delay (tiempo5);
      digitalWrite(TxGPS, LOW);
      digitalWrite(RxGPS, HIGH);
      delay (tiempo5);
      digitalWrite(RxGPS, LOW);
      digitalWrite(HMOSI, HIGH);
      delay (tiempo5);
      digitalWrite(HMOSI, LOW);
      digitalWrite(HMISO, HIGH);
      delay (tiempo5);
      digitalWrite(HMISO, LOW);
      digitalWrite(RELAY, HIGH);
      delay (tiempo5);
      digitalWrite(RELAY, LOW);
      }
  //LEDTEST (tiempo, veces);
  // put your main code here, to run repeatedly:

}
/*LEDTEST (int t, int v)
  {
    for(int i=0; i<v; i++)
    {
      digitalWrite(VMOSI, HIGH);
      delay (t);
      digitalWrite(VMOSI, LOW);
      digitalWrite(BUZZ, HIGH);
      delay (t);
      digitalWrite(BUZZ, LOW);
      digitalWrite(VMISO, HIGH);
      delay (t);
      digitalWrite(VMISO, LOW);
      digitalWrite(SDAMPU, HIGH);
      delay (t);
      digitalWrite(SDAMPU, LOW);
      digitalWrite(TxGPS, HIGH);
      delay (t);
      digitalWrite(TxGPS, LOW);
      digitalWrite(RxGPS, HIGH);
      delay (t);
      digitalWrite(RxGPS, LOW);
      digitalWrite(HMOSI, HIGH);
      delay (t);
      digitalWrite(HMOSI, LOW);
      digitalWrite(HMISO, HIGH);
      delay (t);
      digitalWrite(HMISO, LOW);
      digitalWrite(RELAY, HIGH);
      delay (t);
      digitalWrite(RELAY, LOW);
      }

}*/
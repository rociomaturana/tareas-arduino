void setup()
{
  pinMode(7, INPUT);//define el pin 7 como una entrada
  pinMode(6, INPUT);//define el pin 6 como una entrada
  pinMode(2, OUTPUT);//define el pin 2 como una salida
  pinMode(9, OUTPUT);//define el pin 9 como una salida
  pinMode(8, OUTPUT);//define el pin 8 como una salida
  pinMode(7, OUTPUT);//define el pin 7 como una salida
}

void loop()
{
  if (digitalRead(7) == HIGH) {//si el pin 7 esta prendido hace lo siguiente
    if (digitalRead(6) == HIGH) {//si el pin 6 esta prendido hace lo siguiente
      digitalWrite(2, HIGH);//prende pin 2
      tone(9, 548, 1000); //prende el buzzer
    } else {//si no hace lo siguiente
      digitalWrite(2, LOW);//apaga el pin 2
      noTone(9);//apaga el buzzer
    }
  } else {//si no hace lo siguiente
    digitalWrite(8, LOW);//apaga el pin 8
    noTone(7);//apaga el buzzer
  }
  delay(10); //espera 10 milisegundos
}

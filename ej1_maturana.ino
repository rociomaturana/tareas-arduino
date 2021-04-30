void setup()
{ //define cada pin
  pinMode(8, INPUT); // define el pin 8 como una entrada
  pinMode(7, OUTPUT);// define el pin 7 como una salida
  pinMode(6, OUTPUT);//define el pin 6 como una salida
}

void loop()
{
  if (digitalRead(8) == HIGH) { //lee y da la orden prender el botón 8
    digitalWrite(7, HIGH); //lee y da la orden de prender el led 9
    digitalWrite(6, LOW); //lee y da la orden de apagar el ler 6
  } else {
    digitalWrite(7, LOW); //lee y da la borden de apagar el led 7
    digitalWrite(6, HIGH); //lee y da la orden de apagar el led 6
  }
  delay(10); // Delay a little bit to improve simulation performance //le dea el tiempo de espera
}

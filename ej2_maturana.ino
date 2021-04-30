void setup()
{ //define los pines 7,2,6,5,4,3 como una saluda
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);//define que prenda el led 7
  digitalWrite(2, HIGH);//define que prenda el led 2
  delay(3000); // Wait for 3000 millisecond(s)//define que espere 3 segundos 
  digitalWrite(6, HIGH);//define que prenda el led 6
  digitalWrite(7, LOW);//define que apague el led 7
  delay(3000); // Wait for 3000 millisecond(s)//define que espere 3 segundos
  digitalWrite(6, LOW);//define que apague el led 6
  digitalWrite(2, LOW);//define que apague el led 2
  digitalWrite(5, HIGH);//define que prenda el led 5
  digitalWrite(4, HIGH);//define que prenda el led 4
  delay(3000); // Wait for 3000 millisecond(s)//define que espere 3 segundos
  digitalWrite(4, LOW);//define que apague el led 4 
  digitalWrite(3, HIGH);//define que prenda el led 3
  delay(3000); // Wait for 3000 millisecond(s)/define que espere 3 segundos
  digitalWrite(3, LOW);//define que apague el led 3
  digitalWrite(5, LOW);//define que apague el led 5
}

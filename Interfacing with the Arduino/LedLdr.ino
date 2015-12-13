
int sensorReading;//analog pin reading
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
}
void loop()
{
  sensorReading=analogRead(0);  //get analog reading
  if (sensorReading<60)
  {
    digitalWrite(6,HIGH);
  }
  else digitalWrite(6,LOW);
  Serial.println(sensorReading); 
  delay(200);
}

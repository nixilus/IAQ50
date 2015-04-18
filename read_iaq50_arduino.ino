/*
  Read data from IAQ50 for Arduino
  Use RX and Gnd
 */

char in=0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    in = Serial.read();
    Serial.print(in);
  }
}

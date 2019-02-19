int sensorpin = 0;
unsigned long int val = 0;

void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  for(int i = 0 ; i <= 100 ; i++)
  {
    val = val + analogRead(sensorpin);
    delay(1);
  }
   val = 10799*pow(val/100,-1.15)+2;
   Serial.println (val); 
   val = 0;
}

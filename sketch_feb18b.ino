#define Pulse 1
void setup() {

pinMode(Pulse,OUTPUT);

}

void loop() {

 Pulses(2000);

}

void Pulses(int TotalPeriod)
{
  digitalWrite(Pulse,1);
  delay(TotalPeriod/4);
  digitalWrite(Pulse,0);
  delay((TotalPeriod*3)/4);  
  }


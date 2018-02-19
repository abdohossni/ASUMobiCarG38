#define Ledr 4
#define Ledg 5
#define Ledb 6
#define Ledy 7

void setup() {
 
pinMode(Ledr,OUTPUT);
pinMode(Ledg,OUTPUT);
pinMode(Ledb,OUTPUT);
pinMode(Ledy,OUTPUT);

}



void loop() {
  ForwardOn();
  BackwardOn();

}


void ForwardOn()
{
  digitalWrite(Ledr,1);
  delay(1000);
  digitalWrite(Ledr,0);
  digitalWrite(Ledg,1);
  delay(1000);
  digitalWrite(Ledg,0);
  digitalWrite(Ledb,1);
  delay(1000);
  digitalWrite(Ledb,0);
  digitalWrite(Ledy,1);
  delay(1000);
  digitalWrite(Ledy,0);
  delay(1000);
  }
void BackwardOn()
{
  digitalWrite(Ledy,1);
  delay(1000);
  digitalWrite(Ledy,0);
  digitalWrite(Ledb,1);
  delay(1000);
  digitalWrite(Ledb,0);
  digitalWrite(Ledg,1);
  delay(1000);
  digitalWrite(Ledg,0);
  digitalWrite(Ledr,1);
  delay(1000);
  digitalWrite(Ledr,0);
  delay(1000);
  }

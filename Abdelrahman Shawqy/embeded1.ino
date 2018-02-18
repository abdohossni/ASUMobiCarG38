#define pls 8
void setup() {
  // put your setup code here, to run once:
pinMode(pls,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pls,HIGH);
delay(500);
digitalWrite(pls,LOW);
delay(1500);

}

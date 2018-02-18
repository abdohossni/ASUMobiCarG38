#define LED1 4
#define LED2 5
#define LED3 6
#define LED4 7

void setup() {
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED1,HIGH);
delay(500);
digitalWrite(LED1,LOW);

digitalWrite(LED2,HIGH);
delay(500);
digitalWrite(LED2,LOW);

digitalWrite(LED3,HIGH);
delay(500);
digitalWrite(LED3,LOW);

digitalWrite(LED4,HIGH);
delay(500);
digitalWrite(LED4,LOW);

delay(100);

digitalWrite(LED4,HIGH);
delay(500);
digitalWrite(LED4,LOW);

digitalWrite(LED3,HIGH);
delay(500);
digitalWrite(LED3,LOW);

digitalWrite(LED2,HIGH);
delay(500);
digitalWrite(LED2,LOW);

digitalWrite(LED1,HIGH);
delay(500);
digitalWrite(LED1,LOW);

delay(100);
}

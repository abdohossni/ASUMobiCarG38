/*Definitions*/
#define motor1F 5
#define motor1B 6
#define motor2F 9
#define motor2B 10
/*End of Definitions*/
/*Functions*/
void Forward(){
 Serial.println("Forward");
digitalWrite(motor1F,HIGH);
digitalWrite(motor1B,LOW);
digitalWrite(motor2F,HIGH);
digitalWrite(motor2B,LOW);     
              }
              
void Backword(){
  Serial.println("Backward");
 digitalWrite(motor1B,HIGH);
digitalWrite(motor1F,LOW);
digitalWrite(motor2B,HIGH);
digitalWrite(motor2F,LOW);
               }
               
void Right(){
Serial.println("Right");
digitalWrite(motor1F,HIGH);
digitalWrite(motor1B,LOW);
digitalWrite(motor2B,HIGH);
digitalWrite(motor2F,LOW);
            }
            
void Left(){
Serial.println("Leftn");
digitalWrite(motor1F,LOW);
digitalWrite(motor1B,HIGH);
digitalWrite(motor2F,HIGH);
digitalWrite(motor2B,LOW);
           }
void Stop(){
Serial.println("Stop");
digitalWrite(motor1B,LOW);
digitalWrite(motor1F,LOW);
digitalWrite(motor2B,LOW);
digitalWrite(motor2F,LOW);
           }
/*End of Functions*/
char val = '0';
void setup() {
  // put your setup code here, to run once:
pinMode(motor1F,OUTPUT);
pinMode(motor1B,OUTPUT);
pinMode(motor2F,OUTPUT);
pinMode(motor2B,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if ( Serial.available() > 0 )
{ 
  val = Serial.read(); 
   if (val=='F' || val=='f' )
   { Forward();}
   else if(val=='B' || val=='b')
   {Backword();}
   else if(val=='S' || val=='s')
   {Stop();}
   else if (val=='L' || val=='l')
   {Left();}
   else if (val=='R' || val=='r')
   {Right();}
}
delay(100);
}

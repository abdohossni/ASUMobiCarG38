#define motorsf1 5 // included motor 1 and 2 forward motion & you don't need any PWM pin For this one
#define motorsb1 6 // included motor 1 and 2 backword motion & you don't need any PWM pin For this one
#define motorsf2 9 // included motor 3 and 4 forward motion & you don't need any PWM pin For this one
#define motorsb2 10 // included motor 3 and 4 backword motion & you don't need any PWM pin For this one
#define Enablel1 3 //Must be PWM Pin
#define Enablel2 11 //MUST be PWM pin
#define LS 4      // left sensor     & you don't need any PWM pin For this one
#define MS 7     // middle sensor   & you don't need any PWM pin For this one
#define RS 8      // right sensor    & you don't need any PWM pin For this one
// make Sure 
void setup() {
  // put your setup code here, to run once:
analogWrite(Enablel1,120); //Speed of car from 0 to 255
analogWrite(Enablel2,120); //Speed of car from 0 to 255


pinMode (motorsf1,OUTPUT);
pinMode (motorsb1,OUTPUT);
pinMode (motorsf2,OUTPUT);
pinMode (motorsb2,OUTPUT);
pinMode(LS, INPUT);
pinMode(MS, INPUT);
pinMode(RS, INPUT);
}

void loop() {
  if ( (!digitalRead(MS)) && (digitalRead(LS)) && (digitalRead(RS))  )
  {forward;}
  else if ( ( !digitalRead(RS)) && (digitalRead(LS)) && (digitalRead(MS)) )
  {right;}
  else if ((!digitalRead(LS)) && (digitalRead(MS)) && (digitalRead(RS)) ) 
  {left;}
  else 
  {
    forward;
    delay(100);
    Stop;
  }

            }
void forward(){
  digitalWrite(motorsf1,HIGH);  
  digitalWrite(motorsb1,LOW); 
  digitalWrite(motorsf2,HIGH); 
  digitalWrite(motorsb2,LOW);
             }
void right(){
  digitalWrite(motorsf1,LOW);  
  digitalWrite(motorsb1,HIGH); 
  digitalWrite(motorsf2,HIGH); 
  digitalWrite(motorsb2,LOW); 
            }
void left(){
  digitalWrite(motorsf1,HIGH);  
  digitalWrite(motorsb1,LOW); 
  digitalWrite(motorsf2,LOW); 
  digitalWrite(motorsb2,HIGH); 
          }

void Stop(){ // Note : word 'stop' is used in Arduino language ,SO we ues 'Stop' as Function name
  digitalWrite(motorsf1,LOW);  
  digitalWrite(motorsb1,LOW); 
  digitalWrite(motorsf2,LOW); 
  digitalWrite(motorsb2,LOW);
           }

int motorA = 1 ; 
int motorB = 3 ; 
int motorC =5  ; 
int motorD =7  ; 
char contro = '0' ; 



void setup() { 
  Serial.begin(9600) ; 
  pinMode(motorA,OUTPUT );
  pinMode(motorB,OUTPUT );
  pinMode(motorC,OUTPUT );
  pinMode(motorD,OUTPUT );
  
  // put your setup code here, to run once:

}

void loop() {if ( Serial.available() > 0 ) { 
contro = Serial.read(); 
if (contro=='F')
  {
Serial.println("Forward");
digitalWrite(motorA,HIGH);
digitalWrite(motorC,LOW);
digitalWrite(motorB,HIGH);
digitalWrite(motorD,LOW);
  }
  
  else if (contro=='B')
   {
  Serial.println("Back");
 digitalWrite(motorC,HIGH);
digitalWrite(motorA,LOW);
digitalWrite(motorD,HIGH);
digitalWrite(motorB,LOW);
    }
    
     else if (contro=='S')
   {
    Serial.println("Stop");
 digitalWrite(motorA,LOW);
digitalWrite(motorB,LOW);
digitalWrite(motorC,LOW);
digitalWrite(motorD,LOW);
    }
    
    else if (contro=='R')
   {
    Serial.println("Right");
 digitalWrite(motorA,HIGH);
digitalWrite(motorB,LOW);
digitalWrite(motorC,HIGH);
digitalWrite(motorD,LOW);
    } 
    
    else if (contro=='L')
   {
    Serial.println("Left");
 digitalWrite(motorA,LOW);
digitalWrite(motorB,HIGH);
digitalWrite(motorD,HIGH);
digitalWrite(motorC,LOW);
    } 
  // put your main code here, to run repeatedly:
}
}

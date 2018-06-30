
#define LS 13      // left sensor
#define MS 12      // middle sensor 
#define RS 4      // right sensor
#define motorsf1 9 // included motor 1 and 2 forward motion
#define motorsb1 10 // included motor 1 and 2 backword motion
#define motorsf2 5 // included motor 3 and 4 forward motion
#define motorsb2 6 // included motor 3 and 4 backword motion
#define Enablel1 3
#define Enablel2 11
char value ; //Direction of motion
//int sped;  //the Speed of motion 
void Forward (){
  
digitalWrite(motorsf1,HIGH);  
digitalWrite(motorsb1,LOW); 
digitalWrite(motorsf2,HIGH); 
digitalWrite(motorsb2,LOW); 

  }

void Stop() {
  Serial.println("STOP");
  
digitalWrite(motorsf1,LOW);  
digitalWrite(motorsb1,LOW); 
digitalWrite(motorsf2,LOW); 
digitalWrite(motorsb2,LOW);
  
  }

void Right() {
 Serial.println("RIGHT");
digitalWrite(motorsf1,LOW);  
digitalWrite(motorsb1,HIGH); 
digitalWrite(motorsf2,HIGH); 
digitalWrite(motorsb2,LOW); 
  
  
  }

void Left (){
   Serial.println("LEFT");

digitalWrite(motorsf1,HIGH);  
digitalWrite(motorsb1,LOW); 
digitalWrite(motorsf2,LOW); 
digitalWrite(motorsb2,HIGH); 
    
  }

void Back (){
   Serial.println("BACK");
digitalWrite(motorsf1,LOW);  
digitalWrite(motorsb1,HIGH); 
digitalWrite(motorsf2,LOW); 
digitalWrite(motorsb2,HIGH);
  
  
  }

void setup() {

  // put your setup code here, to run once:
  Serial.begin (9600);  
  pinMode(LS, INPUT);
  pinMode(MS, INPUT);
  pinMode(RS, INPUT);
  pinMode (motorsf1,OUTPUT);
  pinMode (motorsb1,OUTPUT);
  pinMode (motorsf2,OUTPUT);
  pinMode (motorsb2,OUTPUT);
  pinMode(Enablel1,OUTPUT);
  pinMode(Enablel2,OUTPUT);

}





//char value3 ; //new definition
String data = "" ; 
int intdata;

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
value = Serial.read();
  }
  analogWrite(Enablel1,120);
  analogWrite(Enablel2,120);

if (value = 'X'){
  
  while(1){
    
    if(Serial.available()){
    value = Serial.read();
    }
  
    if (isDigit(value)){
      data = data + value;  
     Serial.println(value);
           delay(60);
      }else if(value == 'x') {
        break;
      }else if(value == 'A'){
      Serial.println("Angle");
      intdata = data.toInt();
      Right();
      delay(intdata);
      Stop();
      value = "";
      data = "";
      //break;       
      }else if(value == 'D'){
      Serial.println("Distance");   
      intdata = data.toInt();
      Forward();
      delay(intdata);
      Stop();
      value = "" ;
      data = "";
      //break;    
      }
    
    }
  
  
  
  

  }
        Serial.println(data);

  data = "";
Serial.println("OUt");       
      
}

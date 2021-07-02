//Motor 1:
#define Ena 10
#define IN1 9
#define IN2 8
//Motor 2:
#define Enb 11
#define IN3 13
#define IN4 12
void setup() {
  // put your setup code here, to run once:
 pinMode(Ena,OUTPUT) ;
 pinMode(IN1,OUTPUT) ;
 pinMode(IN2,OUTPUT) ;
 pinMode(Enb,OUTPUT) ;
 pinMode(IN3,OUTPUT) ;
 pinMode(IN4,OUTPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
//Motor 1:
 digitalWrite(IN1,1) ;
 digitalWrite(IN2,0) ;
 analogWrite(Ena,150) ;
 //Motor 2:
 digitalWrite(IN3,1) ;
 digitalWrite(IN4,0) ;
 analogWrite(Enb,150) ;
}

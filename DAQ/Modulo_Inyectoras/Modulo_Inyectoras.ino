
const int input2 = 2;
const int input3 = 3;

String pin2State;
String pin3State;
String estado;

 
void setup() {

Serial.begin(9600);

pinMode(input2,INPUT);
pinMode(input3,INPUT);

}

void loop() {

pin2State = digitalRead(input2);
pin3State = digitalRead(input3);
 
estado = pin2State + pin3State;

Serial.print(estado);
  
delay(1000);


}

#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, 4);

int ReadAnalogAverage (const short pin, const short resolution, short numberOfReads);

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);
  Serial.begin(9600);

  mySerial.begin(500);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  double value0 =  ReadAnalogAverage(A0, 7 , 10);
  double value1 =  ReadAnalogAverage(A1, 7 , 10);
  double value2 =  ReadAnalogAverage(A2, 7 , 10);
  double value3 =  ReadAnalogAverage(A3, 7 , 10);
  double value4 =  ReadAnalogAverage(A4, 7 , 10);
  double value5 =  ReadAnalogAverage(A5, 7 , 10);
  double value6 =  ReadAnalogAverage(A6, 7 , 10);
  double value7 =  ReadAnalogAverage(A7, 7 , 10);

  mySerial.println(value0);

  /*
  Serial.print(value0);
  Serial.print(" ");
  Serial.print(value1);
   Serial.print(" ");
  Serial.print(value2);
   Serial.print(" ");
  Serial.print(value3);
   Serial.print(" ");
  Serial.print(value4);
   Serial.print(" ");
  Serial.print(value5);
   Serial.print(" ");
  Serial.print(value6);
   Serial.print(" ");
  Serial.print(value7);
  Serial.println(" done ");*/

  
  
}



int ReadAnalogAverage (const short pin, const short resolution, short numberOfReads) {

 short averagedSensorValue = 0;
 int totalSensorValue = 0;

 if(numberOfReads > 30) {
 // limit updates to 30 so it won't overflow 16bit int
 numberOfReads = 30;
 }

 for(int i = 0; i < numberOfReads; i++) {
 totalSensorValue += analogRead(pin);
 delay(3);
 }

 averagedSensorValue = totalSensorValue / numberOfReads;
 //return map(averagedSensorValue, 0, 1020, 0, resolution);
 return averagedSensorValue;
}

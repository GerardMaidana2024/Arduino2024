//************************Variables***********************************//
const byte led1 = 3;
const byte led2 = 5;
const byte led3 = 6;
const byte led4 = 9;
const byte led5 = 10;

int valEntrada = A0;
float voltage;


void setup() 
{
  Serial.begin(9600);
  delay(2000);
    pinMode(A0, INPUT);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    //* Serial.println((voltage-4)*255);
    //* Serial.println((voltage-3)*255);
    //* Serial.println((voltage-2)*255);
    //* Serial.println((voltage-1)*255);
    //* Serial.println(voltage*255);
}

void loop() 
{
 int valorEntrada = analogRead(A0);
 voltage = ((float) valorEntrada * 5.0) / 1023;

    if (voltage <=1)  //****
    {
    Serial.println(voltage);
    analogWrite(led1,voltage * 255);
    analogWrite(led2,0);
    analogWrite(led3,0);
    analogWrite(led4,0);
    analogWrite(led5,0);
    }
    if (voltage >=1 && voltage <2)
    {
     Serial.println((voltage));
    analogWrite(led1,255);
    analogWrite(led2,(voltage-1) * 255);
    analogWrite(led3,0);
    analogWrite(led4,0);
    analogWrite(led5,0);
    }


    if (voltage >=2 && voltage <3)
    {
     Serial.println((voltage));
    analogWrite(led1,255);
    analogWrite(led2,255);
    analogWrite(led3,(voltage-2) * 255);
    analogWrite(led4,0);
    analogWrite(led5,0);
    }
    if (voltage >=3 && voltage <4)
    {
     Serial.println((voltage));
    analogWrite(led1,255);
    analogWrite(led2,255);
    analogWrite(led3,255);
    analogWrite(led4,(voltage-3) * 255);
    analogWrite(led5,0);
    }
    if (voltage >=4 && voltage <5)
    {
     Serial.println((voltage));
    analogWrite(led1,255);
    analogWrite(led2,255);
    analogWrite(led3,255);
    analogWrite(led4,255);
    analogWrite(led5,(voltage-4) * 255);
    }

}

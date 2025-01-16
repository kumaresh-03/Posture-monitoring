void setup()
{
pinMode(A0,INPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
}
void loop()
{
float flex=analogRead(A0);
Serial.println(flex);
delay(1000);
if (flex>900)
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
}
else
{
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
}
}
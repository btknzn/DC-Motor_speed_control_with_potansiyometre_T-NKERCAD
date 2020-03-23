int sensorvalue;
int pwm=3;
int pwm_deger;

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(pwm, OUTPUT);
}

void loop()
{
  Serial.println("deneme başladı");
  sensorvalue=analogRead(A0);
  delay(10); // Delay a little bit to improve simulation performance
  Serial.println(sensorvalue);
  pwm_deger= map(sensorvalue,0,1023,0,255);
  analogWrite(pwm,pwm_deger);
  
}
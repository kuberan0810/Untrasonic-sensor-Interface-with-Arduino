void setup() {

pinMode (10,INPUT);
pinMode (9,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
  //Send trigger pulse
  digitalWrite(9,LOW);
  delayMicroseconds(2);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  digitalWrite(9,LOW);

  //Recieve pulse
  long t = pulseIn(10,HIGH);

  // Distance = spped*time
  // 343m/s is speed of sound
  int d = t*0.343/2;
  Serial.print("Distance = ");
  Serial.println(d);

  
}


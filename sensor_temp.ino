void setup() {
 pinMode(A0, INPUT);
 Serial.begin(9600);

}

void loop() {
  float volt;
  float temp;
  delay(1000);
  volt=analogRead(A0);
  temp=volt/17.05;
  Serial.println("Voltaje");
  Serial.println(volt);
  Serial.println("Temperatura");
  Serial.println(temp);
  

}

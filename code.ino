int water; //random variable 
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT); //output pin for relay board, this will sent signal to the relay
  pinMode(6,INPUT); //input pin coming from soil sensor
}

void loop() { 
  water = digitalRead(6);  // reading the coming signal from the soil sensor
  if(water == HIGH) // if water level is full then cut the relay 
  {
  digitalWrite(3,LOW);
  Serial.println('plant is wet') ; // low is to cut the relay
  }
  else
  {
  digitalWrite(3,HIGH);
    Serial.println('plant is dry') ;// low is to cut the relay

   //high to continue proving signal and water supply
  }
  delay(400); 
}
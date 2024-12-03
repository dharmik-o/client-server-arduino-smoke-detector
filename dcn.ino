const int smokeSensorPin = A0;
    
const int threshold = 350; 
void setup() {
  Serial.begin(9600);
  pinMode(smokeSensorPin, INPUT_PULLUP);
}

void loop() {
  int smokeLevel = analogRead(smokeSensorPin); 
  Serial.println(smokeLevel);   
  if (smokeLevel > threshold ) {  
    Serial.println("A");
    delay(200);             
  } 
  else if(smokeLevel <= threshold ){
    Serial.println("a");
    delay(200);          
  }
  delay(200);
}
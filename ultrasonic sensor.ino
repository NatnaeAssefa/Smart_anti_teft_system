
const int TriggerPin = 2;
const int EchoPin = 3;
// const int i;

float duration, distance;
void setup() {
  
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);

  duration = pulseIn(EchoPin, HIGH);
  distance = (duration*.0343)/2;
  //Serial.println(distance);

  if (distance <= 10){
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println(distance);
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
  }
  // put your main code here, to run repeatedly:
  delay(100);
}

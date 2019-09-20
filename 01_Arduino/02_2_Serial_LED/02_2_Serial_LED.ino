void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT); //LED 출력 설정
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { //값을 입력받으면
    // get incoming byte:
    int inByte = Serial.read();

    if(inByte=='0') // '0'입력받으면 LED 꺼짐
      digitalWrite(LED_BUILTIN, LOW);
    else if(inByte=='1') // '0'입력받으면 LED 꺼짐
      digitalWrite(LED_BUILTIN, HIGH); 
  }
}

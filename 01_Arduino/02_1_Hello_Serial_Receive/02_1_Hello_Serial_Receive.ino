int cnt;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  cnt = 0;
}

void loop() {
  //Serial.println('a' + cnt); // 아스키코드 'a' 97을 나타냄. 97부터 숫자 증가함 
  Serial.println(cnt);
  delay(1000);           
  cnt = cnt +1; // 숫자1씩 증가
}

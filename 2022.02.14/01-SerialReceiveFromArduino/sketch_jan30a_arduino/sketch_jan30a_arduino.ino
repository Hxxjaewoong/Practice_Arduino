int cnt1 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int a = cnt1 % 10;
  char buf[255];
  //sprintf(buf, "%d\t%d", cnt1, a);
  sprintf(buf, "%d", cnt1);
  Serial.println(buf);
  cnt1++;
  delay(5000); //delay를 조절함에 따라 카운트 속도 조절 가능
}

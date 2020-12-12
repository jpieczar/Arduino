int dot = 83;
int dash = 250;
int done = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  dot_();
  dot_();
  dot_();
  dash_();
  dash_();
  dash_();
  dot_();
  dot_();
  dot_();
  delay(done);
}

void dot_(void)
{
  digitalWrite(13, HIGH);
  delay(dot);
  digitalWrite(13, LOW);
  delay(dash);
  return;
}

void dash_(void)
{
  digitalWrite(13, HIGH);
  delay(dash);
  digitalWrite(13, LOW);
  delay(dash);
  return;
}

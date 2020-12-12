int num = 1;

void setup() {
  int i = 6;
  while (i < 14)
  {
    pinMode(i, OUTPUT);
    i++;
  }
}

void loop() {
  if (num == 256)
    return (0);
  int hold = num;
  int keep = 6;
  while (hold > 0)
  {
    if (hold % 2)
      digitalWrite(keep, HIGH);
    else
      digitalWrite(keep, LOW);
    hold /= 2;
    keep++;
  }
  num++;
  delay(250);
}

// C++ code
//
int Moisture = 0;

void setup()
{
  pinMode(A5, INPUT);
  pinMode(A2, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A0, OUTPUT);
}

void loop()
{
  Moisture = analogRead(A5);
  if (Moisture < 200) {
    digitalWrite(A2, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A0, LOW);
  } else {
    digitalWrite(A0, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A2, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}

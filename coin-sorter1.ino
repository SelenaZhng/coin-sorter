void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int s25 = 400;
int s25_pre = 400;
int count25 = 0;

void loop() {
  // put your main code here, to run repeatedly:

  s25 = analogRead(A0);

  if (s25_pre > 200 && s25 < 200) {
    count25 = count25 + 1

    Serial.println();

    if (count25 == 1) {
      Serial.print("You have " + String(count25) + " quarter!");
    } else {
      Serial.print("You have " + String(count25) + " quarters!");
    }

    if (count25 == 10) {
      Serial.print("The quarter holder is full, take them away!!");
    }
    
  }

  s25_pre = s25

  delay(10);
  
}

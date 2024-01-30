void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int s25 = 400;
int s25_pre = 400;
int count25 = 0;

int s5 = 400;
int s5_pre = 400;
int count5 = 0;

int s10 = 400;
int s10_pre = 400;
int count10 = 0;

int s1 = 400;
int s1_pre = 400;
int count1 = 0;

void loop() {
  // put your main code here, to run repeatedly:

  s25 = analogRead(A0);

  if (s25_pre > 200 && s25 < 200) {
    count25 = count25 + 1;

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

  s25_pre = s25;

  delay(10);



//nickel
  s5 = analogRead(A1);

  if (s5_pre > 200 && s5 < 200) {
    count5 = count5 + 1;

    Serial.println();

    if (count5 == 1) {
      Serial.print("You have " + String(count5) + " nickel!");
    } else {
      Serial.print("You have " + String(count5) + " nickels!");
    }

    if (count5 == 10) {
      Serial.print("The nickel holder is full, take them away!!");
    }
    
  }

  s5_pre = s5;

  delay(10);



//dime
  s10 = analogRead(A2);

  if (s10_pre > 200 && s10 < 200) {
    count10 = count10 + 1;

    Serial.println();

    if (count10 == 1) {
      Serial.print("You have " + String(count10) + " dime!");
    } else {
      Serial.print("You have " + String(count10) + " dimes!");
    }

    if (count10 == 10) {
      Serial.print("The dime holder is full, take them away!!");
    }
    
  }

  s10_pre = s10;

  delay(10);



//penny
  s1 = analogRead(A3);

  if (s1_pre > 200 && s1 < 200) {
    count1 = count1 + 1;

    Serial.println();

    if (count1 == 1) {
      Serial.print("You have " + String(count1) + " penny!");
    } else {
      Serial.print("You have " + String(count1) + " pennys!");
    }

    if (count1 == 10) {
      Serial.print("The penny holder is full, take them away!!");
    }
    
  }

  s1_pre = s1;

  delay(10);
  
}

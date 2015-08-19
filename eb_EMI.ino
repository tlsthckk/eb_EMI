int inPin = 5;
int val = 0;


void setup()
{
	Serial.begin(9600);
  /* add setup code here */

}

void loop()
{
	val = analogRead(inPin);
	Serial.println(val);
	val = map(val, 1, 100, 1, 2048);
	tone(9, val, 10);

  /* add main program code here */

}

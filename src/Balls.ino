
int led1 = D6;
int led2 = D7;


void setup() {


	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}

void loop() {                                                                                                                                                                                                                                                             bv                                                                                                       b
	// To blink the LED, first we'll turn it on...
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	// We'll leave it on for 1 second...
	delay(1000);

	// Then we'll turn it off...
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	// Wait 1 second...
	delay(1000);

	// And repeat!
}

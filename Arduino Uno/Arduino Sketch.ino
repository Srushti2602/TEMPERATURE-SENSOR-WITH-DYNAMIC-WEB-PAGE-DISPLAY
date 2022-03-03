void setup() {
  Serial.begin(9600);  // Used to display the value on serial monitor
  Serial.println("Temperature:-");
  pinMode(A1, INPUT);  // Using analog pin on Arduino Board
}

void loop() {
  float val = analogRead(A1); // Reads the input values of TMP 36 that is attached to TMP_36
  float mv = (val/1024.0)*5000;  // Converts the voltage input to Celsius
  float cel = mv / 10; // Finally millivolts converted to celsius
  //float frh = (cel * 9)/5 + 32; // Farhenheit value (Not displayed on Serial monitor)
  Serial.println(cel); // Displays temperature on Serial monitor.
  delay(1000);
}

int ldr0=A0;
int ldr1=A1;
int ldr2=A2;
int ldr3=A3;
//Set A0(Analog Input) for LDR.
int value0=0;
int value1=0;
int value2=0;
int value3=0;
void setup() {
Serial.begin(9600);
}

void loop() {
value0=analogRead(ldr0);//Reads the Value of LDR(light).
value1=analogRead(ldr1);//Reads the Value of LDR(light).
value2=analogRead(ldr2);//Reads the Value of LDR(light).
value3=analogRead(ldr3);//Reads the Value of LDR(light).
Serial.println();
Serial.println(value0);
Serial.println(value1);
Serial.println(value2);
Serial.println(value3);
delay(300);

}

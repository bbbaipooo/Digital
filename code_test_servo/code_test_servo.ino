int ldr0 = A4;
int ldr1 = A1;
int ldr2 = A2;
int ldr3 = A3;

int value0 = 0;
int value1 = 0;
int value2 = 0;
int value3 = 0;

//            -------- Vertical  ----------- --------- Horizontal -------
//            LSB                         MSB LSB                     MSB
int pin[16] = {23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53};

void servo(int vertical, int horizontal) {
  //  vertical += 10;
  //  horizontal += 10;

  for (int i = 0; i < 8; i++) {
    digitalWrite(pin[i], vertical % 2);
    vertical = (vertical - (vertical % 2)) / 2;
  }
  for (int i = 0; i < 8; i++) {
    digitalWrite(pin[i + 8], horizontal % 2);
    horizontal = (horizontal - (horizontal % 2)) / 2;
  }
  Serial.println();
}

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 16; i++)
    pinMode(pin[i], OUTPUT);

  pinMode(ldr0, INPUT);
  pinMode(ldr1, INPUT);
  pinMode(ldr2, INPUT);
  pinMode(ldr3, INPUT);

  //  //vertical
  //  digitalWrite(23, v[7]); //LSB
  //  digitalWrite(25, v[6]);
  //  digitalWrite(27, v[5]);
  //  digitalWrite(29, v[4]);
  //  digitalWrite(31, v[3]);
  //  digitalWrite(33, v[2]);
  //  digitalWrite(35, v[1]);
  //  digitalWrite(37, v[0]); //MSB
  //
  //  //horizontal
  //  digitalWrite(39, h[7]); //LSB
  //  digitalWrite(41, h[6]);
  //  digitalWrite(43, h[5]);
  //  digitalWrite(45, h[4]);
  //  digitalWrite(47, h[3]);
  //  digitalWrite(49, h[2]);
  //  digitalWrite(41, h[1]);
  //  digitalWrite(53, h[0]); //MSB

}
int my_speed_x = 1;
int my_speed_y = 1;
int my_x = 0;
int my_y = 45;
void loop() {
  servo(0, 0);
//  servo(my_y, my_x);
//  my_x += 1 * my_speed_x;
//  my_y += 1 * my_speed_y;
//  if (my_x == 0 || my_x == 150) my_speed_x *= -1;
//  if (my_y == 45 || my_y == 120) my_speed_y *= -1;
//  delay(250);
//  Serial.print("vertical: ");
//  Serial.print(my_y);
//  Serial.print(", horizontal: ");
//  Serial.print(my_x);
//  Serial.println();
}

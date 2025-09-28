#include <Servo.h>

#define X1 A0
#define Y1 A1
#define X2 A2
#define Y2 A3
#define sagKalca 5
#define sagDiz 6
#define solKalca 9
#define solDiz 10

Servo srvSagKalca, srvSagDiz, srvSolKalca, srvSolDiz;

int readX1, readY1, readX2, readY2;
int posSagKalca, posSagDiz, posSolKalca, posSolDiz;
int minSagKalca, maxSagKalca, minSagDiz, maxSagDiz;
int minSolKalca, maxSolKalca, minSolDiz, maxSolDiz;

void setup() {
  srvSagKalca.attach(sagKalca);  srvSagDiz.attach(sagDiz);
  srvSolKalca.attach(solKalca);  srvSolDiz.attach(solDiz);
  pinMode(X1, INPUT);  pinMode(Y1, INPUT);
  pinMode(X2, INPUT);  pinMode(Y2, INPUT);
  minSagKalca = 60; maxSagKalca = 120; minSagDiz = 0; maxSagDiz = 40;
  minSolKalca = 60; maxSolKalca = 120; minSolDiz = 120; maxSolDiz = 180;
}

void loop() {
  readX1 = analogRead(X1);
  readY1 = analogRead(Y1);
  readX2 = analogRead(X2);
  readY2 = analogRead(Y2);
  posSagKalca = map(readX1, 0, 1023, minSagKalca, maxSagKalca);
  posSagDiz = map(readY1, 0, 1023, minSagDiz, maxSagDiz);
  posSolKalca = map(readX2, 0, 1023, minSolKalca, maxSolKalca);
  posSolDiz = map(readY2, 0, 1023, minSolDiz, maxSolDiz);
  srvSagKalca.write(posSagKalca);  srvSagDiz.write(posSagDiz);
  srvSolKalca.write(posSolKalca);  srvSolDiz.write(posSolDiz);
  delay(10);
}

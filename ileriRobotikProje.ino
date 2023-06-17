#include<Servo.h>

#define X1 A0
#define Y1 A1
#define X2 A2
#define Y2 A3

#define sagKalca 5
#define sagDiz 6
#define solKalca 9
#define solDiz 10

Servo srvSagKalca, srcSagDiz, srvSagKalca, srcSagDiz;

int readX1, readY1, readX2, readY2;
int posSagKalca, posSagDiz, posSolKalca, posSolDiz;
int minSagKalca, maxSagKalca, minSagDiz, maxSagDiz;
int minSolKalca, maxSolKalca, minSolDiz, maxSolDiz;

void setup(){
    Serial.begin(9600);
    srvSagKalca.attach(sagKalca);srvSagDiz.attach(sagDiz);
    srvSolKalca.attach(solKalca);srvSolDiz.attach(solDiz);
    pinMode(X1, INPUT);
    pinMode(Y1, INPUT);
    pinMode(X2, INPUT);
    pinMode(Y2, INPUT);
}
void loop(){
    posSagKalca = map(analogRead(sagKalca),0,1023,0,180);
    posSagDiz = map(analogRead(sagDiz),0,1023,0,180);
    posSolKalca = map(analogRead(solKalca),0,1023,0,180);
    posSolDiz = map(analogRead(sagDiz),0,1023,0,180);

    srvSagKalca.write(posSagKalca);
    srvSagDiz.write(posSagDiz);
    srvSolKalca.write(posSolKalca);
    srvSolDiz.write(posSolDiz);
}

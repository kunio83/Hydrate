//// Visual Micro is in vMicro>General>Tutorial Mode
//// 
///*
//    Name:       Hydrate.ino
//    Created:	31/7/2020 01:36:19
//    Author:     DESKTOP-A2SC7EP\kunio
//*/
//
////#include <SoftwareSerial.h>
//
//int IN1 = 10;
//int IN2 = 2;
//int IN3 = 3;
//int IN4 = 4;
//
//int ENAL = 5;
//int ENAR = 6;
//const int VELOCIDAD = 100;
//
//int  bt_tx = 12;
//int bt_rx = 13;
////SoftwareSerial _bluetooth(bt_tx, bt_rx);
//
//const char _avanzar = '1';
//const char _detener = '2';
//const char _girarIzquierda = '3';
//const char _girarDerecha = '4';
//const char _retroceder = '5';
//char _datoRecibido = 0;
//
//void setup()
//{
//    //Motores
//    pinMode(IN1, OUTPUT);
//    pinMode(IN2, OUTPUT);
//    pinMode(IN3, OUTPUT);
//    pinMode(IN4, OUTPUT);
//    pinMode(ENAL, OUTPUT);
//    pinMode(ENAR, OUTPUT);
//
//    SetMotores();
//}
//
//void loop()
//{
//    //_datoRecibido = _bluetooth.read();
//    Avanzar();
//    delay(2000);
//    Retroceder();
//    delay(2000);
//    //switch (_datoRecibido) {
//    //case _avanzar:
//    //    Serial.println(_datoRecibido);
//    //    Avanzar();
//    //    break;
//    //case _detener:
//    //    Serial.println(_datoRecibido);
//    //    Detener();
//    //    break;
//    //case _girarDerecha:
//    //    Serial.println(_datoRecibido);
//    //    GirarIzquierda();
//    //    break;
//    //case _girarIzquierda:
//    //    Serial.println(_datoRecibido);
//    //    GirarDerecha();
//    //    break;
//    //case _retroceder:
//    //    Serial.println(_datoRecibido);
//    //    Retroceder();
//    //    break;
//    //default:
//    //Detener();
//    //    break;
//    //}
//}
//
//void SetMotores()
//{
//    //MOTOR IZQUIERDO
//    digitalWrite(IN1, HIGH);
//    digitalWrite(IN2, LOW);
//
//    //MOTOR DERECHO
//    digitalWrite(IN3, HIGH);
//    digitalWrite(IN4, LOW);
//}
//
//void Avanzar()
//{
//    Serial.println("AVANZANDO");
//    SetMotores();
//
//    //MOTOR IZQUIERDO
//    analogWrite(ENAL, VELOCIDAD);
//
//    //MOTOR DERECHO
//    analogWrite(ENAR, VELOCIDAD);
//}
//
//void Detener()
//{
//    Serial.println("DETENIENDO");
//    SetMotores();
//
//    //MOTOR IZQUIERDO
//    analogWrite(ENAL, 0);
//
//    //MOTOR DERECHO
//    analogWrite(ENAR, 0);
//}
//
//void GirarDerecha()
//{
//    Serial.println("Girando a la IZQUIERD");
//    SetMotores();
//
//    //MOTOR IZQUIERDO
//    analogWrite(ENAL, 0);
//
//    //MOTOR DERECHO
//    analogWrite(ENAR, VELOCIDAD);
//}
//
//void GirarIzquierda()
//{
//    Serial.println("Girando a la IZQUIERD");
//    SetMotores();
//
//    //MOTOR IZQUIERDO
//    analogWrite(ENAL, VELOCIDAD);
//
//    //MOTOR DERECHO
//    analogWrite(ENAR, 0);
//}
//
//void Retroceder()
//{
//    Serial.println("RETROCEDIENDO");
//
//    //MOTOR IZQUIERDO
//    digitalWrite(IN1, LOW);
//    digitalWrite(IN2, HIGH);
//    analogWrite(ENAL, VELOCIDAD);
//
//    //MOTOR DERECHO
//    digitalWrite(IN3, LOW);
//    digitalWrite(IN4, HIGH);
//    analogWrite(ENAR, VELOCIDAD);
//}
//

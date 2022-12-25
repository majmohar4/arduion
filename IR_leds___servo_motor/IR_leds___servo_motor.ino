#include <IRremote.h>

#define relay_1 8
#define relay_2 9
#define relay_3 10
#define relay_4 11

#define Button_ON 0x7123
#define Button_OFF 0x1F58

#define Button_1 0x10
#define Button_2 0x810
#define Button_3 0x410
#define Button_4 0xC10
#define Button_5 0x210
#define Button_6 0xA10

#define Button_12 0xFD0
#define Button_11 0x910
#define Button_10 0x5D0
#define Button_9 0x110
#define Button_8 0xE10
#define Button_7 0x610

#define Button1_ON 0xF7C03F
#define Button1_OFF 0xF740BF

#define Button1_1 0xF720DF
#define Button1_2 0xF7A05F
#define Button1_3 0xF710EF
#define Button1_4 0xF7906F
#define Button1_5 0xF730CF
#define Button1_6 0xF7B04F

#define Button1_8 0xF78877
#define Button1_7 0xF708F7

const int RECV_PIN = 2;
uint32_t Previous;
// Define IR Receiver and Results Objects
IRrecv irrecv(RECV_PIN);
decode_results results;


void setup(){
    irrecv.enableIRIn();
    Serial.begin(9600);
    pinMode(relay_1, OUTPUT);
    digitalWrite(relay_1, HIGH);
    pinMode(relay_2, OUTPUT);
    digitalWrite(relay_2, HIGH);
    pinMode(relay_3, OUTPUT);
    digitalWrite(relay_3, HIGH);
    pinMode(relay_4, OUTPUT);
    digitalWrite(relay_4, HIGH);
}

void loop(){
  if (irrecv.decode(&results)){
    // Print Code in HEX
        Serial.println(results.value, HEX);
        irrecv.resume();
   if (results.value==0xFFFFFFFF) {
       results.value=Previous;
      }
     switch (results.value){
          case Button_1: digitalWrite(relay_1, HIGH); break;
          case Button_2: digitalWrite(relay_2, HIGH); break;
          case Button_3: digitalWrite(relay_3, HIGH); break;
          case Button_4: digitalWrite(relay_1, LOW); break;
          case Button_5: digitalWrite(relay_2, LOW); break;
          case Button_6: digitalWrite(relay_3, LOW); break;
      
          case Button_8: digitalWrite(relay_4, HIGH); break;
          case Button_7: digitalWrite(relay_4, LOW); break;

          case Button_OFF:{
            digitalWrite(relay_1, HIGH); 
            digitalWrite(relay_2, HIGH); 
            digitalWrite(relay_3, HIGH); 
            digitalWrite(relay_4, HIGH); 
            break;
          }
          case Button_ON:{
            digitalWrite(relay_1, LOW); 
            digitalWrite(relay_2, LOW); 
            digitalWrite(relay_3, LOW); 
            digitalWrite(relay_4, LOW); 
            break;
          }

          case Button1_1: digitalWrite(relay_1, HIGH); break;
          case Button1_2: digitalWrite(relay_2, HIGH); break;
          case Button1_3: digitalWrite(relay_3, HIGH); break;
          case Button1_4: digitalWrite(relay_1, LOW); break;
          case Button1_5: digitalWrite(relay_2, LOW); break;
          case Button1_6: digitalWrite(relay_3, LOW); break;
      
          case Button1_8: digitalWrite(relay_4, HIGH); break;
          case Button1_7: digitalWrite(relay_4, LOW); break;

          case Button1_OFF:{
            digitalWrite(relay_1, HIGH); 
            digitalWrite(relay_2, HIGH); 
            digitalWrite(relay_3, HIGH); 
            digitalWrite(relay_4, HIGH); 
            break;
          }
          case Button1_ON:{
            digitalWrite(relay_1, LOW); 
            digitalWrite(relay_2, LOW); 
            digitalWrite(relay_3, LOW); 
            digitalWrite(relay_4, LOW); 
            break;
          }
          }
       }
    }

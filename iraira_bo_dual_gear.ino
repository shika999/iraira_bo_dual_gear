#include <Unistep2.h> //複数ステッピングモータ制御ライブラリ
Unistep2 stepperX(2, 3, 4, 5, 4096, 4000);
Unistep2 stepperY(6, 7, 8, 9, 4096, 4000);
//Unistep2の説明
//Unistep2 stepper（p1、p2、p3、p4、stepsPerRev、stepDelay）;
//p1からp4はULN2003を接続ピン
//stepsPerRevはステッパーが1回転するために実行するステップ（28BYJ-48では4096回）であり
//stepDelayはマイクロステップでの各ステップ間の遅延です（900は問題なく動作すると思われる最速）
//move（int steps）ステップ量だけ移動、負のときはCCW。
//moveTo（unsigned int pos）0～posまで絶対量を移動
//currentPosition（）現在の位置を返す
//stop（）ストップ

#include <Adafruit_NeoPixel.h> //NeoPixelライブラリ
#define PIN            1 //シリアル通信GPIOピン番号
#define MAXPIXELS      36 //LED素子の最大数
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(MAXPIXELS, PIN, NEO_GRB + NEO_KHZ800);
 
uint8_t LedNum1_Inc = 36; //最初にフェードインするLED番号
uint8_t LedNum1_Dec = 18; //フェードアウトするLED番号
uint8_t LedNum2_Inc = 6;
uint8_t LedNum2_Dec = 20;
uint8_t LedNum3_Inc = 12;
uint8_t LedNum3_Dec = 8;
uint8_t ChangeType = 0; //LED点灯パターンを決める引数
uint32_t ChangeTime; //LED点灯パターンを変える時間
int cnt = 0; //256段階でLEDをフェードさせるためのカウント


int AnalogPin0 = 5 ; //ポテンショメータのアナログピン
int val0 = 0 ; //ポテンショメータのアナログ値

void StepperMove_A(); //パターンA
void StepperMove_B(); //パターンB
void LedGradation_A(); //パターンA
void LedGradation_B(); //パターンB

void setup(){    
    ChangeTime = millis();
    pixels.begin(); //NeoPixel libraryの初期化
    pixels.setBrightness(70); //Max 255

    //起動時のLED動作
      for(int i=0;i<MAXPIXELS;i++){
      pixels.setPixelColor(i, pixels.Color(0,255,255)); //シアンがマゼンタ、イエローを追いかける
      pixels.setPixelColor(i+5, pixels.Color(255,0,255)); 
      pixels.setPixelColor(i+10, pixels.Color(255,255,0)); 
      pixels.show();
      delay(50);
      }
     for(int i=0;i<MAXPIXELS;i++){
      pixels.setPixelColor(i, pixels.Color(0,0,0)); //消灯
      pixels.show();
      delay(10);
      }
}
 
void loop(){

  //ポテンショメータの値に応じて回転方向とLED点灯パターンを切り替え
   val0 =  analogRead(AnalogPin0);
    if( val0 < 400){
      StepperMove_A();
      LedGradation_A();
    }
    else if( val0 > 400){
      StepperMove_B();
      LedGradation_B();
    }
}

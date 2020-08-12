void LedGradation_A() {
 if(millis() - ChangeTime > 3000){ 
   ChangeType++;
    if(ChangeType == 7) ChangeType = 0;
    ChangeTime = millis();
  }
  switch(ChangeType){     
    case 0:
     for(int i=0;i<MAXPIXELS;i+=7){
     //七色レインボー表示
     pixels.setPixelColor(i, pixels.Color(255,0,0));//赤
     pixels.setPixelColor(i+1, pixels.Color(243,110,0));//橙
     pixels.setPixelColor(i+2, pixels.Color(255,255,0));//黄
     pixels.setPixelColor(i+3, pixels.Color(0,128,0));//緑
     pixels.setPixelColor(i+4, pixels.Color(0,255,255));//水
     pixels.setPixelColor(i+5, pixels.Color(0,0,255));//青
     pixels.setPixelColor(i+6, pixels.Color(128,0,128));//紫   
     }
    pixels.show();
    break;
    
    case 1:
     for(int i=0;i<MAXPIXELS;i+=7){
     //七色レインボー表示
     pixels.setPixelColor(i, pixels.Color(0,0,255));//青
     pixels.setPixelColor(i+1, pixels.Color(128,0,128));//紫   
     pixels.setPixelColor(i+2, pixels.Color(255,0,0));//赤
     pixels.setPixelColor(i+3, pixels.Color(243,110,0));//橙
     pixels.setPixelColor(i+4, pixels.Color(255,255,0));//黄
     pixels.setPixelColor(i+5, pixels.Color(0,128,0));//緑
     pixels.setPixelColor(i+6, pixels.Color(0,255,255));//水
     }
    pixels.show();
    break;
    
    case 2:
     for(int i=0;i<MAXPIXELS;i+=7){
     //七色レインボー表示
     pixels.setPixelColor(i, pixels.Color(255,255,0));//黄
     pixels.setPixelColor(i+1, pixels.Color(0,128,0));//緑
     pixels.setPixelColor(i+2, pixels.Color(0,255,255));//水
     pixels.setPixelColor(i+3, pixels.Color(0,0,255));//青
     pixels.setPixelColor(i+4, pixels.Color(128,0,128));//紫   
     pixels.setPixelColor(i+5, pixels.Color(255,0,0));//赤
     pixels.setPixelColor(i+6, pixels.Color(243,110,0));//橙
     }
    pixels.show();
    break;
    
    case 3:
     for(int i=0;i<MAXPIXELS;i+=7){
     //七色レインボー表示
     pixels.setPixelColor(i, pixels.Color(128,0,128));//紫   
     pixels.setPixelColor(i+1, pixels.Color(255,0,0));//赤
     pixels.setPixelColor(i+2, pixels.Color(243,110,0));//橙
     pixels.setPixelColor(i+3, pixels.Color(255,255,0));//黄
     pixels.setPixelColor(i+4, pixels.Color(0,128,0));//緑
     pixels.setPixelColor(i+5, pixels.Color(0,255,255));//水
     pixels.setPixelColor(i+6, pixels.Color(0,0,255));//青
     }
    pixels.show();
    break;
    
    case 4:
     for(int i=0;i<MAXPIXELS;i+=7){
     //七色レインボー表示
     pixels.setPixelColor(i, pixels.Color(0,255,255));//水
     pixels.setPixelColor(i+1, pixels.Color(0,0,255));//青
     pixels.setPixelColor(i+2, pixels.Color(128,0,128));//紫   
     pixels.setPixelColor(i+3, pixels.Color(255,0,0));//赤
     pixels.setPixelColor(i+4, pixels.Color(243,110,0));//橙
     pixels.setPixelColor(i+5, pixels.Color(255,255,0));//黄
     pixels.setPixelColor(i+6, pixels.Color(0,128,0));//緑
     }
    pixels.show();
    break;
    
   case 5:
     for(int i=0;i<MAXPIXELS;i+=7){
     //七色レインボー表示
     pixels.setPixelColor(i, pixels.Color(243,110,0));//橙
     pixels.setPixelColor(i+1, pixels.Color(255,255,0));//黄
     pixels.setPixelColor(i+2, pixels.Color(0,128,0));//緑
     pixels.setPixelColor(i+3, pixels.Color(0,255,255));//水
     pixels.setPixelColor(i+4, pixels.Color(0,0,255));//青
     pixels.setPixelColor(i+5, pixels.Color(128,0,128));//紫   
     pixels.setPixelColor(i+6, pixels.Color(255,0,0));//赤
     }
    pixels.show();
    break;   
    
    case 6:
     for(int i=0;i<MAXPIXELS;i+=7){
     //七色レインボー表示
     pixels.setPixelColor(i, pixels.Color(0,128,0));//緑
     pixels.setPixelColor(i+1, pixels.Color(0,255,255));//水
     pixels.setPixelColor(i+2, pixels.Color(0,0,255));//青
     pixels.setPixelColor(i+3, pixels.Color(128,0,128));//紫   
     pixels.setPixelColor(i+4, pixels.Color(255,0,0));//赤
     pixels.setPixelColor(i+5, pixels.Color(243,110,0));//橙
     pixels.setPixelColor(i+6, pixels.Color(255,255,0));//黄
     }
    pixels.show();
    break;  
  }
}


void LedGradation_B() {
 if(millis() - ChangeTime > 3000){ 
   ChangeType++;
    if(ChangeType == 6) ChangeType = 0;
    ChangeTime = millis();
  }
  switch(ChangeType){
      case 0: //CMY type
      for(int i=0;i<MAXPIXELS;i+=3){
      pixels.setPixelColor(i, pixels.Color(0,255,255));//シアン
      pixels.setPixelColor(i+1, pixels.Color(255,0,255));//マゼンタ
      pixels.setPixelColor(i+2, pixels.Color(255,255,0));//イエロー 
      }
      pixels.show();
      break;  
       
      case 1: //CMY type
      pixels.setPixelColor(LedNum1_Inc, pixels.Color(cnt, cnt, 0));
      pixels.setPixelColor(LedNum1_Inc+5, pixels.Color(cnt, cnt, 0));
      pixels.setPixelColor(LedNum1_Inc+10, pixels.Color(cnt, cnt, 0));
      pixels.setPixelColor(LedNum1_Inc+15, pixels.Color(cnt, cnt, 0));
      pixels.show();
      pixels.setPixelColor(LedNum1_Dec, pixels.Color(255-cnt, 255-cnt, 0));
      pixels.setPixelColor(LedNum1_Dec+5, pixels.Color(255-cnt, 255-cnt, 0));
      pixels.setPixelColor(LedNum1_Dec+10, pixels.Color(255-cnt, 255-cnt, 0));
      pixels.setPixelColor(LedNum1_Dec+15, pixels.Color(255-cnt, 255-cnt, 0));
      pixels.show();
   
      pixels.setPixelColor(LedNum2_Inc, pixels.Color(0, cnt, cnt));
      pixels.setPixelColor(LedNum2_Inc+5, pixels.Color(0, cnt, cnt));
      pixels.setPixelColor(LedNum2_Inc+10, pixels.Color(0, cnt, cnt));
      pixels.setPixelColor(LedNum2_Inc+15, pixels.Color(0, cnt, cnt));
      pixels.show();
      pixels.setPixelColor(LedNum2_Dec, pixels.Color(0, 255-cnt, 255-cnt));
      pixels.setPixelColor(LedNum2_Dec+5, pixels.Color(0, 255-cnt, 255-cnt));
      pixels.setPixelColor(LedNum2_Dec+10, pixels.Color(0, 255-cnt, 255-cnt));
      pixels.setPixelColor(LedNum2_Dec+15, pixels.Color(0, 255-cnt, 255-cnt));
      pixels.show();
   
      pixels.setPixelColor(LedNum3_Inc, pixels.Color(cnt, 0, cnt));
      pixels.setPixelColor(LedNum3_Inc+5, pixels.Color(cnt, 0, cnt));
      pixels.setPixelColor(LedNum3_Inc+10, pixels.Color(cnt, 0, cnt));
      pixels.setPixelColor(LedNum3_Inc+15, pixels.Color(cnt, 0, cnt));
      pixels.show();
      pixels.setPixelColor(LedNum3_Dec, pixels.Color(255-cnt, 0, 255-cnt));
      pixels.setPixelColor(LedNum3_Dec+5, pixels.Color(255-cnt, 0, 255-cnt));
      pixels.setPixelColor(LedNum3_Dec+10, pixels.Color(255-cnt, 0, 255-cnt));
      pixels.setPixelColor(LedNum3_Dec+15, pixels.Color(255-cnt, 0, 255-cnt));
      pixels.show();
      break;

      case 2: //RGB type
      pixels.setPixelColor(LedNum1_Inc, pixels.Color(cnt, 0, 0));
      pixels.show(); 
      pixels.setPixelColor(LedNum1_Dec, pixels.Color(255-cnt, 0, 0));
      pixels.show();
   
      pixels.setPixelColor(LedNum2_Inc, pixels.Color(0, cnt, 0));
      pixels.show();
      pixels.setPixelColor(LedNum2_Dec, pixels.Color(0, 255-cnt, 0));
      pixels.show();
   
      pixels.setPixelColor(LedNum3_Inc, pixels.Color(0, 0, cnt));
      pixels.show();
      pixels.setPixelColor(LedNum3_Dec, pixels.Color(0, 0, 255-cnt));
      pixels.show();
      break;
       
    case 3: //Blue type
      pixels.setPixelColor(LedNum1_Inc, pixels.Color(0, 0, cnt));
      pixels.show();
      pixels.setPixelColor(LedNum1_Dec, pixels.Color(0, 0, 255-cnt));
      pixels.show();
      break;
       
    case 4: //CMY type
      pixels.setPixelColor(LedNum1_Inc, pixels.Color(cnt, cnt, 0));
      pixels.show();
      pixels.setPixelColor(LedNum1_Dec, pixels.Color(255-cnt, 255-cnt, 0));
      pixels.show();
   
      pixels.setPixelColor(LedNum2_Inc, pixels.Color(0, cnt, cnt));
      pixels.show();
      pixels.setPixelColor(LedNum2_Dec, pixels.Color(0, 255-cnt, 255-cnt));
      pixels.show();
   
      pixels.setPixelColor(LedNum3_Inc, pixels.Color(cnt, 0, cnt));
      pixels.show();
      pixels.setPixelColor(LedNum3_Dec, pixels.Color(255-cnt, 0, 255-cnt));
      pixels.show();
      break;
       
    case 5: //Orange, Green type
      pixels.setPixelColor(LedNum1_Inc, pixels.Color(cnt, 10, 0));
      pixels.show();
      pixels.setPixelColor(LedNum1_Dec, pixels.Color(255-cnt, 10, 0));
      pixels.show();
      break;    
  }
  cnt++;
   
  if(cnt == 256){ //フェードが最大、最少になったらLED素子を変える
    LedNum1_Inc++;
    if(LedNum1_Inc >= 36) LedNum1_Inc = 0;
    LedNum1_Dec++;
    if(LedNum1_Dec >= 36) LedNum1_Dec = 0;
    LedNum2_Inc++;
    if(LedNum2_Inc >= 36) LedNum2_Inc = 0;
    LedNum2_Dec++;
    if(LedNum2_Dec >= 36) LedNum2_Dec = 0;
    LedNum3_Inc++;
    if(LedNum3_Inc >= 36) LedNum3_Inc = 0;
    LedNum3_Dec++;
    if(LedNum3_Dec >= 36) LedNum3_Dec = 0;
    cnt = 0;
  }
}

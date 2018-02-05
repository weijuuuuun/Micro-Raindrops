#include "MicroBit.h"

MicroBit uBit;

// set raindrop position
int rainX = 2;
int rainY = 0;

// set tray position
int tray = 2;

int score = 0;

void onButtonA(MicroBitEvent) {
  tray--; // move left
  if (tray <= 0) {
    tray = 0;
  }
}

void onButtonB(MicroBitEvent) {
  tray++; // move right
  if (tray >= 4) {
    tray = 4;
  }
}

void resetRain(){
  rainX = uBit.random(5);
  rainY = -1;
}


bool isCaught(){
  // checks if raindrop & tray is in same position
  if (rainX == tray && rainY == 4) {
    resetRain();
    return true;
  }
  else
	return false;
}

int main(){
  // plot raindrop
  uBit.display.image.setPixelValue(rainX,rainY,255);

  // plot tray
  uBit.display.image.setPixelValue(tray,4,255);

  uBit.init();


  while(1){
      // unplot raindrop & tray
      uBit.display.image.clear();

      // plot rain position y++ (dropping)
      rainY++;
      uBit.display.image.setPixelValue(rainX,rainY,255);

      // set up listener for buttonA and buttonB
      uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_CLICK, onButtonA);
      uBit.messageBus.listen(MICROBIT_ID_BUTTON_B, MICROBIT_BUTTON_EVT_CLICK, onButtonB);

      // plot tray position
      uBit.display.image.setPixelValue(tray,4,255);

      if (isCaught()) {
        score++;
      } else if (rainY > 4) {
        // game over
        // display score
        uBit.display.print(score);
      }
      // controls rate of execution
      uBit.sleep(300);
  }
}

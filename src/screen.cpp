#include <MaxMatrix.h>

int DIN = 7;   // DIN pin of MAX7219 module
int CLK = 6;   // CLK pin of MAX7219 module
int CS = 5;    // CS pin of MAX7219 module
int maxInUse = 1;

MaxMatrix m(DIN, CS, CLK, maxInUse);

unsigned char min[] = {8, 8,
        B11000000,
        B11000000,
        B00000000,
        B00000000,
        B00000000,
        B00000000,
        B00000000,
        B00000000
};

unsigned char low[] = {8, 8,
        B11000000,
        B11000000,
        B11110000,
        B11110000,
        B00000000,
        B00000000,
        B00000000,
        B00000000
};

unsigned char med[] = {8, 8,
        B11000000,
        B11000000,
        B11110000,
        B11110000,
        B11111100,
        B11111100,
        B00000000,
        B00000000
};
unsigned char max[] = {8, 8,
        B11000000,
        B11000000,
        B11110000,
        B11110000,
        B11111100,
        B11111100,
        B11111111,
        B11111111
};

void setup_screen() {
    m.init(); // MAX7219 initialization
    m.setIntensity(1); // initial led matrix intensity, 0-15
}

void loop_screen() {

    m.writeSprite(0, 0, min);
    delay(1000);

    m.writeSprite(0, 0, low);
    delay(1000);

    m.writeSprite(0, 0, med);
    delay(1000);

    m.writeSprite(0, 0, max);
    delay(1000);
}
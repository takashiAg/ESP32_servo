#ifndef ESP_SERVO_H_INCLUDE
#define ESP_SERVO_H_INCLUDE

#include "Arduino.h"

//I used the site => http://rikoubou.hatenablog.com/entry/2017/06/05/172953

// (26/1024)*20ms ≒ 0.5 ms  (-90°)
// (123/1024)*20ms ≒ 2.4 ms (+90°)
#define servo_0  26
#define servo_180  123


class ESP_servo {
  public:
    ESP_servo();
    void init(uint8_t pin, uint8_t channel);
    void write(uint16_t degree);

  private:
    uint8_t min = 10, max = 170;
    uint8_t CHANNEL;
};


#endif




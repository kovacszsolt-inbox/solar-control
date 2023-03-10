#ifndef GsmModule_h
#define GsmModule_h

#define TINY_GSM_MODEM_SIM800      // Modem is SIM800
#define TINY_GSM_RX_BUFFER   1024  // Set RX buffer to 1Kb

const char simPIN[]   = "1234";
#define SMS_TARGET  "+40774557263"

// TTGO T-Call pins
#define MODEM_RST            5
#define MODEM_PWKEY          4
#define MODEM_POWER_ON       23
#define MODEM_TX             27
#define MODEM_RX             26
#define I2C_SDA              21
#define I2C_SCL              22

#define IP5306_ADDR          0x75
#define IP5306_REG_SYS_CTL0  0x00

#include <Wire.h>
#include <TinyGsmClient.h>

class GsmModule
{
private:
  bool setPowerBoostKeepOn(int en){}
  TinyGsm _modem;
public:
  void initGsmModule() {}
  void sendSms(String s) {}
};

#endif
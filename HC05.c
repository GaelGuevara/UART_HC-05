#include "MKL25Z4.h"
#include "HC05.h"
#include "uart.h"

#define HC05_TEST "AT"
#define HC05_FINISH "\r\n"

void hc05Test(){
    UART_SendString(HC05_TEST);
    UART_SendString(HC05_FINISH);
}

void hc05GetAddress(){
    UART_SendString("AT+ADDR?");
    UART_SendString(HC05_FINISH);
}

void hc05Parameters(uint32_t baud_rate){
    UART_SendString("AT+");
    UART_SendString(HC05_FINISH);
}
void hc05GetState(){
    UART_SendString("AT+STATE?");
    UART_SendString(HC05_FINISH);
}

void hc05Disconnect(){
    UART_SendString("AT+DISC");
    UART_SendString(HC05_FINISH);
}

void hc05Reset(){
    UART_SendString("AT+RESET");
    UART_SendString(HC05_FINISH);
}

void hc05SetName(char name){
    UART_SendString("AT+NAME=");
    UART_SendString(name);
    UART_SendString(HC05_FINISH);
}

void hc05PinCode(uint8_t PIN){
    UART_SendString("AT+PSWD=");
    UART_SendString(PIN);
    UART_SendString(HC05_FINISH);
}

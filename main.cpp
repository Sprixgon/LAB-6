#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
DigitalOut myled(PA_5); //PA_5=D13
/*DigitalOut led1(PA_8);  //PA_8=D7    azul
DigitalOut led2(PB_10); //PB_10=D6   verde
DigitalOut led3(PB_4);  //PB_4=D5    rojo
*/

BusOut Leds(PA_8,PB_10,PB_4); //  D7 - D6 - D5

DigitalIn myBoton(PC_13); //PC_13 Boton tarjeta ó pin PB_3=D3
BusIn boton(PA_0,PA_1,PA_4,PB_0); //A0,A1,A2,A3

boton.mode(PullDown); 
  

    while (true) {
        myled = myBoton;
        
        // boton = 1 se enciende
        // led = 0 enciende
    

        switch(boton){
            case 0b0000 ... 0b011:   //1
            Leds=0b110;
            printf("1\n");
            break;

            /*case 0b0010:   //2
            Leds=0b110;
            printf("2\n");
            break;

            case 0b0011:   //3
            Leds=0b110; 
            printf("3\n");
            break;*/

            case 0b0100:   //4
            Leds=0b101;
            printf("4\n");
            break;

            case 0b0101:   //5
            Leds=0b101;
            printf("5\n");
            break;

            case 0b0110:   //6
            Leds=0b100;
            printf("6\n");
            break;

            case 0b0111:   //7
            Leds=0b100;
            printf("7\n");
            break;

            case 0b1000:   //8
            Leds=0b001;
            printf("8\n");
            break;

            case 0b1001:   //9
            Leds=0b001;
            printf("9\n");
            break;

            case 0b1010:   //10
            Leds=0b001;
            printf("10\n");
            break;

            case 0b1011:   //11
            Leds=0b001;
            printf("11\n");
            break;

            case 0b1100:   //12
            Leds=0b011;
            printf("12\n");
            break;

            case 0b1101:   //13
            Leds=0b011;
            printf("13\n");
            break;

            case 0b1110:   //14
            Leds=0b011;
            printf("14\n");
            break;

            case 0b1111:   //15
            Leds=0b000;
            printf("15\n");
            break;

            /*default:
            Leds=0b110;
            printf("default\n");
            break;*/
        }
        
    }

}
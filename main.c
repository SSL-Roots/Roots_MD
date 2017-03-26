/* 
 * File:   main.c
 * Author: y.kek.na0710
 *
 * Created on 2017/02/07, 22:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <xc.h>
#include <comm.h>
#include <../lib/can/config_can.h>


/*  関数    */
void init(void);
void testOutPUT(void);
void testOutPUT1(void);

int main(int argc, char** argv)
{
   
    
    init();

    testOutPUT1();


    while(1)
    {
        while(C1TR01CONbits.TXREQ0 == 1){
            LED1 = 1;
            LED2 = 1;
            LED3 = 1;
            if(C1TR01CONbits.TXERR0 == 1)C1TR01CONbits.TXREQ0 = 0;
        }
        
    }
    return (EXIT_SUCCESS);
}




void init(void)
{
    /*動作クロック設定*/
    RCONbits.SWDTEN = 0;


    //FRC Oscillator Tuning
    _TUN        = 0b000000;    //FRC = 7.37MHz nominal(0b000000) 7.474MHz(0b011110)
    // FRCDIV (default = 1　PostScaler)
    // PostScaler = 1: FIN = 7.37MHz
    //FPLLO = FIN * M/(N1*N2)
    //M  = PLLDIV + 2
    //N1 = PLLPRE + 2
    //N2 = 2*(PLLPOST + 1)
    //且つ以下の条件を満たしていること
    //Fvco = FIN * M / N1 (今回は,Fcvo = 168.165MHz)
    //120MHz < Fcvo < 340MHz
    _PLLPOST    = 0;
    _PLLPRE     = 0;
    _PLLDIV     = 42;

    
    while(!OSCCONbits.LOCK);


    IFS0 = 0;
    IFS1 = 0;
    IFS2 = 0;
    IFS3 = 0;
    IFS4 = 0;



    /*IOポート設定*/
    PORTA = 0x0000;
    TRISA = 0x0000;

    PORTB = 0x0000;
    TRISB = 0x0000;

    ANSELA = 0;
    ANSELB = 0;

    initCAN();
}

void testOutPUT(void)
{
    LED1 = 1;
    LED2 = 0;
    LED3 = 1;
}

void testOutPUT1(void)
{
    LED1 = 1;
    LED2 = 1;
    LED3 = 0;
}
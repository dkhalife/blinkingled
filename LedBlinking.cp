#line 1 "C:/Users/Dan/Documents/PIC Projects/Led Blinking/LedBlinking.c"
void main(){









 OSCCON |= 0x7C;






 CMCON=0x07;
#line 30 "C:/Users/Dan/Documents/PIC Projects/Led Blinking/LedBlinking.c"
 ADCON1=0x8F;






 TRISB=0x00;




 while(1){
 PORTB=0xFF;
 Delay_ms(500);
 PORTB=0x00;
 Delay_ms(500);
 }
}

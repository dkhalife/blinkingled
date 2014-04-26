void main(){
        //**
        //  Oscillator Configuration:
        //  0b0
        //  - 8 MHz (111)
        //  - Primary system clock (1)
        //  - Stable frequency (1)
        //  - System clock : Internal RC (10)
        //  - Total : 0b01101110
        //**
        OSCCON |= 0x7C;
         
        //**
        //  Comparator Configuration:
        //  Disable all
        //  - Total : 0b00000111;
        //**
        CMCON=0x07;
         
        //**
        //  A/D Configuration:
        //  0b
        //  Left Justified (1)
        //  A/D Clock divide by 2 disabled (0)
        //  VRef - = VSS (0)
        //  VRef + = VDD (0)
        //  - All Digital (1111)
        //  - Total : 0b10001111;
        //**
        ADCON1=0x8F;
         
        //**
        //  PORT Directions
        //  - Output:
        //    + PORTB
        //**
        TRISB=0x00;
         
        //**
        //  Main Program
        //**
        while(1){
                PORTB=0xFF;            // Pull all pins on PORTB High
                Delay_ms(500);         // Wait 500 ms
                PORTB=0x00;            // Pull all pins on PORTB Low
                Delay_ms(500);         // Wait 500 ms
        }
}
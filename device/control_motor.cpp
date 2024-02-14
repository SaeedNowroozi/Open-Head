#include "control_motor.h"
#include <cmath>
Control_Motor::Control_Motor()
{

}

void Control_Motor::init1()
{

}

void Control_Motor::setMicroSteps1(int microSteps)
{
   BYTE stepVal;

   for(stepVal = 0; stepVal < 8; stepVal++){
       if(microSteps == 1)break;
       microSteps = microSteps >> 1;
   }
   SetParam1(STEP_MODE, !SYNC_EN | stepVal | SYNC_SEL_1);
}

void Control_Motor::setCurrent1(int current)
{

}

void Control_Motor::setMaxSpeed1(int speed)
{
   SetParam1(MAX_SPEED,MaxSpdCalc1(speed));
}

void Control_Motor::setMinSpeed1(int speed)
{
   SetParam1(MIN_SPEED, MinSpdCalc1(speed));
}

void Control_Motor::setAcc1(float acceleration)
{
   unsigned long accelerationBYTES = AccCalc1(acceleration);
   SetParam1(ACC, accelerationBYTES);
}

void Control_Motor::setDec1(float deceleration)
{
   unsigned long decelerationBYTES = DecCalc1(deceleration);
   SetParam1(DEC, deceleration);
}

void Control_Motor::setOverCurrent1(unsigned int ma_current)
{

}

void Control_Motor::setThresholdSpeed1(float threshold)
{
   if(threshold == 0.0){
       SetParam1(FS_SPD, 0x3ff);
   }else{
       SetParam1(FS_SPD, FSCalc1(threshold));
   }
}

void Control_Motor::setStallCurrent1(float ma_current)
{
   BYTE STHValue = (BYTE)floor(ma_current / 31.25);
   if(STHValue > 0x80)STHValue = 0x80;
   if(STHValue < 0)STHValue = 0;
   SetParam1(STALL_TH, STHValue);
}

unsigned long Control_Motor::ParamHandler1(BYTE param, unsigned long value)
{

}

void Control_Motor::SetLowSpeedOpt1(bool enable)
{

}

void Control_Motor::run1(BYTE dir, float spd)
{
   unsigned long speedVal = SpdCalc1(spd);
   if(speedVal > 0xFFFFF) speedVal = 0xFFFFF;
}

void Control_Motor::Step_Clock1(BYTE dir)
{

}

void Control_Motor::goHome1()
{

}

void Control_Motor::setAsHome1()
{

}

void Control_Motor::goMark1()
{

}

void Control_Motor::move1(long n_step)
{
    BYTE dir;

        if(n_step >= 0){
            dir =  FWD;
        }else{
            dir =  REV;
        }

        long n_stepABS = abs(n_step);

       // Xfer(MOVE | dir); //set direction
        if (n_stepABS > 0x3FFFFF) n_step = 0x3FFFFF;
       // Xfer((byte)(n_stepABS >> 16));
        //Xfer((byte)(n_stepABS >> 8));
        //Xfer((byte)(n_stepABS));
}

void Control_Motor::goTo1(long pos)
{

}

void Control_Motor::goTo_DIR1(BYTE dir, long pos)
{

}

void Control_Motor::goUntil1(BYTE act, BYTE dir, unsigned long spd)
{

}

bool Control_Motor::isBusy1()
{
   int status = getStatus1();
   return !((status >> 1) & 0xb1);
}

void Control_Motor::releaseSW1(BYTE act, BYTE dir)
{

}

float Control_Motor::getSpeed1()
{

}

long Control_Motor::getPos1()
{
   unsigned long position = GetParam1(ABS_POS);
   return convert1(position);
}

void Control_Motor::setMark1()
{

}

void Control_Motor::setMark1(long value)
{

}

void Control_Motor::resetPos1()
{

}

void Control_Motor::resetDev1()
{

}

void Control_Motor::softStop1()
{

}

void Control_Motor::hardStop1()
{

}

void Control_Motor::softFree1()
{

}

void Control_Motor::free1()
{

}

int Control_Motor::getStatus1()
{
    // Fetch and return the 16-bit value in the STATUS register. Resets
    //  any warning flags and exits any error states. Using GetParam()
    //  to read STATUS does not clear these values.
    int temp = 0;
    //Xfer(GET_STATUS);
    //temp = Xfer(0)<<8;
    //temp |= Xfer(0);
    return temp;
}

long Control_Motor::convert1(unsigned long val)
{
    //convert 22bit 2s comp to signed long
    int MSB = val >> 21;

    val = val << 11;
    val = val >> 11;

    if(MSB == 1) val = val | 0b11111111111000000000000000000000;
    return val;
}

void Control_Motor::SetParam1(BYTE param, unsigned long value)
{

}

unsigned long Control_Motor::GetParam1(BYTE param)
{

}

unsigned long Control_Motor::AccCalc1(float stepsPerSecPerSec)
{
    float temp = stepsPerSecPerSec * 0.137438;
    if((unsigned long) long(temp) > 0x00000FFF) return 0x00000FFF;
    else return (unsigned long) long(temp);
}

unsigned long Control_Motor::DecCalc1(float stepsPerSecPerSec)
{
    // The calculation for DEC is the same as for ACC. Value is 0x08A on boot.
    // This is a 12-bit value, so we need to make sure the value is at or below 0xFFF.
    float temp = stepsPerSecPerSec * 0.137438;
    if( (unsigned long) long(temp) > 0x00000FFF) return 0x00000FFF;
    else return (unsigned long) long(temp);
}

unsigned long Control_Motor::MaxSpdCalc1(float stepsPerSec)
{
    // The value in the MAX_SPD register is [(steps/s)*(tick)]/(2^-18) where tick is
    //  250ns (datasheet value)- 0x041 on boot.
    // Multiply desired steps/s by .065536 to get an appropriate value for this register
    // This is a 10-bit value, so we need to make sure it remains at or below 0x3FF
    float temp = stepsPerSec * .065536;
    if( (unsigned long) long(temp) > 0x000003FF) return 0x000003FF;
    else return (unsigned long) long(temp);
}

unsigned long Control_Motor::MinSpdCalc1(float stepsPerSec)
{
    // The value in the MIN_SPD register is [(steps/s)*(tick)]/(2^-24) where tick is
    //  250ns (datasheet value)- 0x000 on boot.
    // Multiply desired steps/s by 4.1943 to get an appropriate value for this register
    // This is a 12-bit value, so we need to make sure the value is at or below 0xFFF.
    float temp = stepsPerSec * 4.1943;
    if( (unsigned long) long(temp) > 0x00000FFF) return 0x00000FFF;
    else return (unsigned long) long(temp);
}

unsigned long Control_Motor::FSCalc1(float stepsPerSec)
{
    float temp = (stepsPerSec * 0.065536) - 0.5;
    if((unsigned long) long(temp) > 0x000003FF) return 0x000003FFF;
    else return (unsigned long) long(temp);
}

unsigned long Control_Motor::IntSpdCalc1(float stepsPerSec)
{
    // The value in the INT_SPD register is [(steps/s)*(tick)]/(2^-24) where tick is
    //  250ns (datasheet value)- 0x408 on boot.
    // Multiply desired steps/s by 4.1943 to get an appropriate value for this register
    // This is a 14-bit value, so we need to make sure the value is at or below 0x3FFF.
    float temp = stepsPerSec * 4.1943;
    if( (unsigned long) long(temp) > 0x00003FFF) return 0x00003FFF;
    else return (unsigned long) long(temp);
}

unsigned long Control_Motor::SpdCalc1(float stepsPerSec)
{
    // When issuing RUN command, the 20-bit speed is [(steps/s)*(tick)]/(2^-28) where tick is
    //  250ns (datasheet value).
    // Multiply desired steps/s by 67.106 to get an appropriate value for this register
    // This is a 20-bit value, so we need to make sure the value is at or below 0xFFFFF.

    float temp = stepsPerSec * 67.106;
    if( (unsigned long) long(temp) > 0x000FFFFF) return 0x000FFFFF;
    else return (unsigned long)temp;
}

unsigned long Control_Motor::Param1(unsigned long value, BYTE bit_len)
{
    // Generalization of the subsections of the register read/write functionality.
        //  We want the end user to just write the value without worrying about length,
        //  so we pass a bit length parameter from the calling function.
        unsigned long ret_val=0;        // We'll return this to generalize this function
                                        //  for both read and write of registers.
        BYTE byte_len = bit_len/8;      // How many BYTES do we have?
        if (bit_len % 8 > 0) byte_len++;  // Make sure not to lose any partial byte values.
        // Let's make sure our value has no spurious bits set, and if the value was too
        //  high, max it out.
        unsigned long mask = 0xffffffff >> (32-bit_len);
        if (value > mask) value = mask;
        // The following three if statements handle the various possible byte length
        //  transfers- it'll be no less than 1 but no more than 3 bytes of data.
        // L6470::Xfer() sends a byte out through SPI and returns a byte received
        //  over SPI- when calling it, we typecast a shifted version of the masked
        //  value, then we shift the received value back by the same amount and
        //  store it until return time.
//        if (byte_len == 3) {
//          ret_val |= long(Xfer((byte)(value>>16))) << 16;
//          //Serial.println(ret_val, HEX);
//        }
//        if (byte_len >= 2) {
//          ret_val |= long(Xfer((byte)(value>>8))) << 8;
//          //Serial.println(ret_val, HEX);
//        }
//        if (byte_len >= 1) {
//          ret_val |= Xfer((byte)value);
//          //Serial.println(ret_val, HEX);
//        }
        // Return the received values. Mask off any unnecessary bits, just for
        //  the sake of thoroughness- we don't EXPECT to see anything outside
        //  the bit length range but better to be safe than sorry.
        return (ret_val & mask);
}

BYTE Control_Motor::Xfer1(BYTE data)
{

}

void Control_Motor::log_motors()
{

}

bool Control_Motor::ready_motors()
{

}

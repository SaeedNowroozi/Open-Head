#include "subsystemairpressure.h"

SubsystemAirPressure::SubsystemAirPressure(QObject *parent)
    : QObject{parent}
{

}
double SubsystemAirPressure::_presure_value()
{
//	presure_value_analog = readADC(12);
//	presure = ((presure_value_analog / 1024.0) + 0.095 ) / 0.000009;//1024
//	return presure;
    return 1;
}
uint16_t SubsystemAirPressure::readADC(uint8_t channel)
{
//	ADC_SoftwareStartConv(ADC1);
//	while(!ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC));
//	return ADC_GetConversionValue(ADC1);
    return 1;
}

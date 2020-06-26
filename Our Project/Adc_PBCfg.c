#include "adc.h"


AdcChannelGroup ArrayOfAdcChannelGroups[MAX_NB_GROUPS] = {
{
0,    //ID
ADC1,
SS0, 
ADC_TRIG_SRC_SW, 
NO_HW_TRIG,
ADC_HW_TRIG_RISING_EDGE,
ADC_CONV_MODE_CONTINUOUS,
ADC_ACCESS_MODE_SINGLE,
ADC_STREAM_BUFFER_LINEAR,
0,   //Priority
2,   //Nb of channels
{PE3,PE1} 
}
,
{
1,    //ID
ADC0,
SS1, 
ADC_TRIG_SRC_SW, 
NO_HW_TRIG,
ADC_HW_TRIG_RISING_EDGE, 
ADC_CONV_MODE_CONTINUOUS,
ADC_ACCESS_MODE_SINGLE,
ADC_STREAM_BUFFER_LINEAR,
1,   //Priority
1,   //Nb of channels
{PD2} 
}
};
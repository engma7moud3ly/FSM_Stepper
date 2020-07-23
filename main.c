#include <fsm_stepper.h>

int main()
{
  DDRB = DDRC = DDRD = 0xFF;
  while (true)
  {
    //rotate function accept 4 parameters
    //a refrence to the port connected to the motor
    //type of step full/half/wave step
    //step delay in ms
    //rotation direction CW/CCW
    rotate(&PORTB, FULL_STEP, 100, CW);
    rotate(&PORTC, HALF_STEP, 100, CW);
    rotate(&PORTD, WAVE_STEP, 100, CCW);
  }
  return 0;
}

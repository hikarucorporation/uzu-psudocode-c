// Function : timer_bang
// Namespace: 
// Entry    : 0055c960
// Prototype: undefined timer_bang(long param_1)
// Body     : 0055c960 - 0055c977


void timer_bang(long param_1)

{
  undefined8 extraout_XMM0_Qa;
  
  clock_getlogicaltime();
  *(undefined8 *)(param_1 + 0x30) = extraout_XMM0_Qa;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// Function : libpd_programchange
// Namespace: 
// Entry    : 004d7670
// Prototype: undefined8 libpd_programchange(uint param_1, uint param_2)
// Body     : 004d7670 - 004d76a8


undefined8 libpd_programchange(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_1) && (param_2 < 0x80)) {
    sys_lock();
    inmidi_programchange(param_1 >> 4,param_1 & 0xf,param_2);
    sys_unlock();
    uVar1 = 0;
  }
  return uVar1;
}



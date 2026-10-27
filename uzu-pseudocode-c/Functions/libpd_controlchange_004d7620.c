// Function : libpd_controlchange
// Namespace: 
// Entry    : 004d7620
// Prototype: undefined8 libpd_controlchange(uint param_1, uint param_2, uint param_3)
// Body     : 004d7620 - 004d7661


undefined8 libpd_controlchange(uint param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_1) && ((param_3 | param_2) < 0x80)) {
    sys_lock();
    inmidi_controlchange(param_1 >> 4,param_1 & 0xf,param_2,param_3);
    sys_unlock();
    uVar1 = 0;
  }
  return uVar1;
}



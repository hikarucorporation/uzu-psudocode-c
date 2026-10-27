// Function : libpd_aftertouch
// Namespace: 
// Entry    : 004d7700
// Prototype: undefined8 libpd_aftertouch(uint param_1, uint param_2)
// Body     : 004d7700 - 004d7738


undefined8 libpd_aftertouch(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_1) && (param_2 < 0x80)) {
    sys_lock();
    inmidi_aftertouch(param_1 >> 4,param_1 & 0xf,param_2);
    sys_unlock();
    uVar1 = 0;
  }
  return uVar1;
}



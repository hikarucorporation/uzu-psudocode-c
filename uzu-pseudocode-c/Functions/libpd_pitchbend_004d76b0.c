// Function : libpd_pitchbend
// Namespace: 
// Entry    : 004d76b0
// Prototype: undefined8 libpd_pitchbend(uint param_1, int param_2)
// Body     : 004d76b0 - 004d76f7


undefined8 libpd_pitchbend(uint param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_1) && (0xffffbfff < param_2 - 0x2000U)) {
    sys_lock();
    inmidi_pitchbend(param_1 >> 4,param_1 & 0xf,param_2 + 0x2000);
    sys_unlock();
    uVar1 = 0;
  }
  return uVar1;
}



// Function : libpd_midibyte
// Namespace: 
// Entry    : 004d7790
// Prototype: undefined8 libpd_midibyte(uint param_1, uint param_2)
// Body     : 004d7790 - 004d77c7


undefined8 libpd_midibyte(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 < 0x1000) && (param_2 < 0x100)) {
    sys_lock();
    inmidi_byte(param_1,param_2);
    sys_unlock();
    uVar1 = 0;
  }
  return uVar1;
}



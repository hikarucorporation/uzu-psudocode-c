// Function : libpd_polyaftertouch
// Namespace: 
// Entry    : 004d7740
// Prototype: undefined8 libpd_polyaftertouch(uint param_1, uint param_2, uint param_3)
// Body     : 004d7740 - 004d7781


undefined8 libpd_polyaftertouch(uint param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_1) && ((param_3 | param_2) < 0x80)) {
    sys_lock();
    inmidi_polyaftertouch(param_1 >> 4,param_1 & 0xf,param_2,param_3);
    sys_unlock();
    uVar1 = 0;
  }
  return uVar1;
}



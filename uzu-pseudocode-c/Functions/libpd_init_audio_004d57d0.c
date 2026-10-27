// Function : libpd_init_audio
// Namespace: 
// Entry    : 004d57d0
// Prototype: undefined8 libpd_init_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, int param_10, int param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 004d57d0 - 004d5801


undefined8
libpd_init_audio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,int param_10,int param_11,undefined8 param_12,undefined8 param_13,
                undefined8 param_14)

{
  undefined8 uVar1;
  
  uVar1 = sys_lock();
  uVar1 = sched_set_using_audio(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,2);
  sys_setchsr(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
              param_11,param_12,param_13,param_14);
  sys_unlock();
  return 0;
}



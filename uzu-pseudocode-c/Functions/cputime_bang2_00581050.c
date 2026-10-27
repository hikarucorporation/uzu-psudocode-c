// Function : cputime_bang2
// Namespace: 
// Entry    : 00581050
// Prototype: undefined cputime_bang2(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00581050 - 005810ba


void cputime_bang2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 extraout_XMM0_Db;
  tms local_30;
  
  times(&local_30);
  uVar2 = ((local_30.tms_stime + local_30.tms_utime) -
          (*(long *)(param_9 + 0x30) + *(long *)(param_9 + 0x38))) * 1000;
  uVar1 = sysconf(2);
  if ((uVar1 | uVar2) >> 0x20 == 0) {
    uVar2 = (uVar2 & 0xffffffff) / (uVar1 & 0xffffffff);
  }
  else {
    uVar2 = (long)uVar2 / (long)uVar1;
  }
  outlet_float(CONCAT44(extraout_XMM0_Db,(float)(long)uVar2),param_2,param_3,param_4,param_5,param_6
               ,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}



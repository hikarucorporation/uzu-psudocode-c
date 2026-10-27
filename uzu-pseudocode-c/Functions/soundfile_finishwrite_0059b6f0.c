// Function : soundfile_finishwrite
// Namespace: 
// Entry    : 0059b6f0
// Prototype: undefined soundfile_finishwrite(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, long param_11, ulong param_12, ulong param_13, undefined8 param_14)
// Body     : 0059b6f0 - 0059b767


void soundfile_finishwrite
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,char *param_10,long param_11,ulong param_12,ulong param_13,
               undefined8 param_14)

{
  int iVar1;
  int *piVar2;
  undefined8 extraout_XMM0_Qa;
  
  if (param_13 < param_12) {
    if (param_12 != 0xffffffffffffffff) {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "[soundfiler] write: %ld out of %ld frames written",param_13,param_12,
               (char *)param_13,param_14);
    }
    iVar1 = (**(code **)(*(long *)(param_11 + 8) + 0x28))(param_11,param_13);
    if (iVar1 == 0) {
      piVar2 = __errno_location();
      object_sferror(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,"[soundfiler] write",param_10,*piVar2,param_11,param_14);
      return;
    }
  }
  return;
}



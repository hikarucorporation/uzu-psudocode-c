// Function : create_soundfile
// Namespace: 
// Entry    : 0059b560
// Prototype: int create_soundfile(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0059b560 - 0059b625


int create_soundfile(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,char *param_10,int *param_11,undefined8 param_12,char *param_13,
                    undefined8 param_14)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar4;
  char acStackY_878 [128];
  uint in_stack_fffffffffffff808;
  char local_408 [1000];
  
  strncpy(acStackY_878 + 0x80,param_10,1000);
  iVar1 = (**(code **)(*(long *)(param_11 + 2) + 0x30))(acStackY_878 + 0x80,0x3de);
  uVar4 = extraout_XMM0_Qa;
  if ((iVar1 != 0) ||
     (iVar1 = (**(code **)(*(long *)(param_11 + 2) + 0x38))(acStackY_878 + 0x80,0x3de),
     uVar4 = extraout_XMM0_Qa_00, iVar1 != 0)) {
    uVar3 = 1000;
    uVar4 = canvas_makefilename(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,acStackY_878 + 0x80,local_408,1000,param_13,param_14);
    iVar1 = sys_open(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_408,0x241,
                     0x1b6,uVar3,param_13,param_14,in_stack_fffffffffffff808);
    if (-1 < iVar1) {
      *param_11 = iVar1;
      uVar2 = (**(code **)(*(long *)(param_11 + 2) + 0x20))(param_11,param_12);
      if (-1 < (int)uVar2) {
        *(ulong *)(param_11 + 8) = (ulong)uVar2;
        return iVar1;
      }
      *param_11 = -1;
      sys_close(iVar1);
    }
  }
  return -1;
}



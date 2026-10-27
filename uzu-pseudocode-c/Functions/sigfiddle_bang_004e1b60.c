// Function : sigfiddle_bang
// Namespace: 
// Entry    : 004e1b60
// Prototype: undefined sigfiddle_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004e1b60 - 004e1cfd


void sigfiddle_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  char *in_R8;
  undefined8 in_R9;
  int iVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar7;
  undefined4 local_58 [2];
  float local_50;
  undefined4 local_48;
  uint local_40;
  undefined4 local_38;
  uint local_30;
  
  iVar1 = *(int *)(param_9 + 0x58);
  if (0 < iVar1) {
    lVar3 = *(long *)(param_9 + 0x50);
    lVar2 = 0;
    do {
      local_58[0] = 1;
      iVar5 = (int)(lVar2 + 1);
      local_50 = (float)iVar5;
      local_48 = 1;
      local_40 = *(uint *)(lVar3 + lVar2 * 8);
      local_38 = 1;
      local_30 = *(uint *)(lVar3 + 4 + lVar2 * 8);
      outlet_list((ulong)local_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x358),0,3,local_58,in_R8,in_R9);
      lVar2 = lVar2 + 1;
    } while (iVar1 != iVar5);
  }
  outlet_float((ulong)*(uint *)(param_9 + 0x2b8 + (long)*(int *)(param_9 + 100) * 4),param_2,param_3
               ,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x338));
  iVar1 = *(int *)(param_9 + 0x2b4);
  uVar6 = extraout_XMM0_Da;
  uVar7 = extraout_XMM0_Db;
  if (0 < iVar1) {
    lVar3 = param_9 + 0xc4;
    iVar5 = 0;
    do {
      local_58[0] = 1;
      local_50 = *(float *)(lVar3 + (long)*(int *)(param_9 + 100) * 4);
      local_48 = 1;
      local_40 = *(uint *)(lVar3 + -0x50 + (long)*(int *)(param_9 + 100) * 4);
      outlet_list((ulong)local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(lVar3 + 100),0,2,local_58,in_R8,in_R9);
      iVar5 = iVar5 + 1;
      iVar1 = *(int *)(param_9 + 0x2b4);
      lVar3 = lVar3 + 0xc0;
      uVar6 = extraout_XMM0_Da_00;
      uVar7 = extraout_XMM0_Db_00;
    } while (iVar5 < iVar1);
  }
  if (*(int *)(param_9 + 0x340) != 0) {
    outlet_bang(CONCAT44(uVar7,uVar6),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x348));
    iVar1 = *(int *)(param_9 + 0x2b4);
  }
  if (0 < iVar1) {
    pfVar4 = (float *)(param_9 + 0x70);
    iVar5 = 0;
    do {
      if (*pfVar4 != 0.0) {
        outlet_float((ulong)(uint)*pfVar4,0,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long **)(param_9 + 0x350));
        iVar1 = *(int *)(param_9 + 0x2b4);
      }
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 0x30;
    } while (iVar5 < iVar1);
  }
  return;
}



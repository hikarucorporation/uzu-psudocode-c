// Function : ctlin_list
// Namespace: 
// Entry    : 00554860
// Prototype: undefined ctlin_list(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 00554860 - 00554918


void ctlin_list(long param_1,undefined8 param_2,int param_3,long param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  fVar1 = (float)atom_getfloatarg(0,param_3,param_4);
  uVar2 = atom_getfloatarg(1,param_3,param_4);
  fVar3 = (float)atom_getfloatarg(2,param_3,param_4);
  fVar4 = *(float *)(param_1 + 0x34);
  if ((fVar4 < 0.0) || (fVar4 == fVar1)) {
    fVar6 = *(float *)(param_1 + 0x30);
    uVar7 = 0;
    if ((fVar6 <= 0.0) || (fVar6 == fVar3)) {
      if (fVar6 == 0.0) {
        outlet_float(CONCAT44(extraout_XMM0_Db,fVar3),(ulong)(uint)fVar4,(ulong)(uint)fVar6,0,
                     in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,*(long **)(param_1 + 0x48));
        fVar4 = *(float *)(param_1 + 0x34);
      }
      uVar9 = 0;
      uVar8 = 0;
      uVar5 = 0;
      if (fVar4 < 0.0) {
        outlet_float((ulong)(uint)fVar1,(ulong)(uint)fVar4,CONCAT44(uVar7,fVar6),0,in_XMM4_Qa,
                     in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,*(long **)(param_1 + 0x40));
      }
      outlet_float((ulong)uVar2,CONCAT44(uVar5,fVar4),CONCAT44(uVar7,fVar6),CONCAT44(uVar9,uVar8),
                   in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,*(long **)(param_1 + 0x38));
      return;
    }
  }
  return;
}



// Function : polytouchin_list
// Namespace: 
// Entry    : 00554e00
// Prototype: undefined polytouchin_list(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 00554e00 - 00554e90


void polytouchin_list(long param_1,undefined8 param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  uVar1 = atom_getfloatarg(0,param_3,param_4);
  uVar2 = atom_getfloatarg(1,param_3,param_4);
  fVar3 = (float)atom_getfloatarg(2,param_3,param_4);
  fVar4 = *(float *)(param_1 + 0x30);
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if (fVar4 == 0.0) {
    outlet_float(CONCAT44(extraout_XMM0_Db,fVar3),(ulong)(uint)fVar4,0,in_XMM3_Qa,in_XMM4_Qa,
                 in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,*(long **)(param_1 + 0x48));
  }
  else if (fVar3 != fVar4) {
    return;
  }
  outlet_float((ulong)uVar1,CONCAT44(uVar5,fVar4),CONCAT44(uVar7,uVar6),in_XMM3_Qa,in_XMM4_Qa,
               in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,*(long **)(param_1 + 0x40));
  outlet_float((ulong)uVar2,CONCAT44(uVar5,fVar4),CONCAT44(uVar7,uVar6),in_XMM3_Qa,in_XMM4_Qa,
               in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,*(long **)(param_1 + 0x38));
  return;
}



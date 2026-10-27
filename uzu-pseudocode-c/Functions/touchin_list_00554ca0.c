// Function : touchin_list
// Namespace: 
// Entry    : 00554ca0
// Prototype: undefined touchin_list(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 00554ca0 - 00554d0c


void touchin_list(long param_1,undefined8 param_2,int param_3,long param_4)

{
  uint uVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  uVar1 = atom_getfloatarg(0,param_3,param_4);
  fVar2 = (float)atom_getfloatarg(1,param_3,param_4);
  fVar3 = *(float *)(param_1 + 0x30);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (fVar3 == 0.0) {
    outlet_float(CONCAT44(extraout_XMM0_Db,fVar2),(ulong)(uint)fVar3,0,in_XMM3_Qa,in_XMM4_Qa,
                 in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,*(long **)(param_1 + 0x40));
  }
  else if (fVar2 != fVar3) {
    return;
  }
  outlet_float((ulong)uVar1,CONCAT44(uVar4,fVar3),CONCAT44(uVar6,uVar5),in_XMM3_Qa,in_XMM4_Qa,
               in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,*(long **)(param_1 + 0x38));
  return;
}



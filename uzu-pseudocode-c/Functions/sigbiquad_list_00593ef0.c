// Function : sigbiquad_list
// Namespace: 
// Entry    : 00593ef0
// Prototype: undefined sigbiquad_list(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 00593ef0 - 00594021


void sigbiquad_list(long param_1,undefined8 param_2,int param_3,long param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar1 = (float)atom_getfloatarg(0,param_3,param_4);
  fVar2 = (float)atom_getfloatarg(1,param_3,param_4);
  uVar3 = atom_getfloatarg(2,param_3,param_4);
  uVar4 = atom_getfloatarg(3,param_3,param_4);
  uVar5 = atom_getfloatarg(4,param_3,param_4);
  if (0.0 <= DAT_005d94d4 * fVar2 + fVar1 * fVar1) {
    if ((((fVar1 <= DAT_005d9078) && (DAT_005d98cc <= fVar1)) &&
        (0.0 <= DAT_005d9038 - (fVar1 + fVar2))) && (0.0 <= (fVar1 + DAT_005d9038) - fVar2))
    goto LAB_00593ffb;
  }
  else if (DAT_005d9054 <= fVar2) goto LAB_00593ffb;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  fVar2 = 0.0;
  fVar1 = 0.0;
LAB_00593ffb:
  *(float *)(param_1 + 0x3c) = fVar1;
  *(float *)(param_1 + 0x40) = fVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  return;
}



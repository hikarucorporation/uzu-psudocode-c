// Function : my_numbox_size
// Namespace: 
// Entry    : 005a5910
// Prototype: undefined my_numbox_size(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 005a5910 - 005a59fc


void my_numbox_size(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,int param_11,long param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar8;
  
  fVar7 = (float)atom_getfloatarg(0,param_11,param_12);
  iVar1 = 1;
  if (0 < (int)fVar7) {
    iVar1 = (int)fVar7;
  }
  *(int *)(param_9 + 0x4e4) = iVar1;
  if (param_11 < 2) {
    iVar3 = *(int *)(param_9 + 0x40);
    iVar2 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
    uVar8 = extraout_XMM0_Db;
  }
  else {
    fVar7 = (float)atom_getfloatarg(1,param_11,param_12);
    iVar3 = 8;
    if (8 < (int)fVar7) {
      iVar3 = (int)fVar7;
    }
    iVar2 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
    iVar3 = iVar3 * iVar2;
    *(int *)(param_9 + 0x40) = iVar3;
    iVar1 = *(int *)(param_9 + 0x4e4);
    uVar8 = extraout_XMM0_Db_00;
  }
  uVar5 = *(uint *)(param_9 + 0x440) & 0x3f;
  iVar4 = 0x1f;
  if (uVar5 == 2) {
    iVar4 = 0x19;
  }
  iVar6 = 0x1b;
  if (uVar5 != 1) {
    iVar6 = iVar4;
  }
  *(int *)(param_9 + 0x44) =
       ((iVar3 / 2) / iVar2 + (iVar1 * *(int *)(param_9 + 0x444) * iVar6) / 0x24 + 4) * iVar2;
  iemgui_size(CONCAT44(uVar8,fVar7),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              param_9);
                    /* WARNING: Could not recover jumptable at 0x005a59fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
  return;
}



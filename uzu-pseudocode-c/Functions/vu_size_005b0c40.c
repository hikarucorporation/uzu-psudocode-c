// Function : vu_size
// Namespace: 
// Entry    : 005b0c40
// Prototype: undefined vu_size(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 005b0c40 - 005b0cd3


void vu_size(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,int param_11,long param_12)

{
  int iVar1;
  float fVar2;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar3;
  
  fVar2 = (float)atom_getfloatarg(0,param_11,param_12);
  iVar1 = iemgui_clip_size((int)fVar2);
  *(int *)(param_9 + 0x44) = iVar1 * *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  fVar2 = extraout_XMM0_Da;
  uVar3 = extraout_XMM0_Db;
  if (1 < param_11) {
    fVar2 = (float)atom_getfloatarg(1,param_11,param_12);
    iVar1 = 2;
    if (2 < (int)fVar2 / 0x28) {
      iVar1 = (int)fVar2 / 0x28;
    }
    *(int *)(param_9 + 0x490) = iVar1 + -1;
    *(int *)(param_9 + 0x40) = iVar1 * *(int *)(*(long *)(param_9 + 0x30) + 0xec) * 0x28;
    uVar3 = extraout_XMM0_Db_00;
  }
  iemgui_size(CONCAT44(uVar3,fVar2),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              param_9);
  return;
}



// Function : my_numbox_label_font
// Namespace: 
// Entry    : 005a5c10
// Prototype: undefined my_numbox_label_font(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 005a5c10 - 005a5cf7


void my_numbox_label_font
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,int param_11,long param_12)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  
  fVar4 = (float)atom_getfloatarg(1,param_11,param_12);
  iVar2 = 4;
  if (4 < (int)fVar4) {
    iVar2 = (int)fVar4;
  }
  *(int *)(param_9 + 0x444) = iVar2;
  fVar4 = (float)atom_getfloatarg(0,param_11,param_12);
  uVar3 = (int)fVar4 & 0x3f;
  if (2 < (uint)(int)fVar4) {
    uVar3 = 0;
  }
  *(uint *)(param_9 + 0x440) = *(uint *)(param_9 + 0x440) & 0xffffffc0 | uVar3;
  iVar2 = 0x1f;
  if (uVar3 == 2) {
    iVar2 = 0x19;
  }
  iVar1 = 0x1b;
  if (uVar3 != 1) {
    iVar1 = iVar2;
  }
  iVar2 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  *(int *)(param_9 + 0x44) =
       ((*(int *)(param_9 + 0x40) / 2) / iVar2 +
        (*(int *)(param_9 + 0x4e4) * *(int *)(param_9 + 0x444) * iVar1) / 0x24 + 4) * iVar2;
  iemgui_label_font(CONCAT44(extraout_XMM0_Db,fVar4),param_2,param_3,param_4,param_5,param_6,param_7
                    ,param_8,param_9,param_9,param_10,param_11,param_12);
  return;
}



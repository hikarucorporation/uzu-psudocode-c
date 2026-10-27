// Function : my_canvas_size
// Namespace: 
// Entry    : 005a3bf0
// Prototype: undefined my_canvas_size(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 005a3bf0 - 005a3c2a


void my_canvas_size(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,int param_11,long param_12)

{
  int iVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  
  fVar2 = (float)atom_getfloatarg(0,param_11,param_12);
  iVar1 = 1;
  if (0 < (int)fVar2) {
    iVar1 = (int)fVar2;
  }
  iVar1 = iVar1 * *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  *(int *)(param_9 + 0x44) = iVar1;
  *(int *)(param_9 + 0x40) = iVar1;
  iemgui_size(CONCAT44(extraout_XMM0_Db,fVar2),param_2,param_3,param_4,param_5,param_6,param_7,
              param_8,param_9,param_9);
  return;
}



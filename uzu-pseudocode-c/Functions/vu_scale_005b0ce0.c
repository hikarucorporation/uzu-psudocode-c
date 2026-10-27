// Function : vu_scale
// Namespace: 
// Entry    : 005b0ce0
// Prototype: undefined vu_scale(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005b0ce0 - 005b0d10


void vu_scale(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  uint uVar1;
  ulong uVar2;
  undefined8 extraout_RDX;
  char *in_R8;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  uVar2 = (ulong)((int)param_1 != 0);
  *(uint *)(param_9 + 0x4a4) = (uint)((int)param_1 != 0);
  uVar1 = glist_isvisible(*(long *)(param_9 + 0x30));
  if (uVar1 == 0) {
    return;
  }
  vu_draw_config(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,param_9,*(long *)(param_9 + 0x30),extraout_RDX,uVar2,in_R8,in_R9);
  return;
}



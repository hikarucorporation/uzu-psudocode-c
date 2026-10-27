// Function : clone_in_vis
// Namespace: 
// Entry    : 00504120
// Prototype: undefined clone_in_vis(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, ulong param_11, undefined8 param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 00504120 - 0050416d


void clone_in_vis(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,char *param_10,ulong param_11,undefined8 param_12,char *param_13,
                 undefined *param_14,undefined1 param_15)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_9 + 8);
  uVar4 = (uint)(param_1 - (float)*(int *)(lVar2 + 0x84));
  if ((int)uVar4 < 0) {
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x38);
    param_11 = (ulong)uVar1;
    uVar3 = uVar1 - 1;
    if ((int)uVar4 < (int)uVar1) {
      uVar3 = uVar4;
    }
    param_10 = (char *)(ulong)uVar3;
    lVar5 = (long)(int)uVar3;
  }
  uVar4 = -(uint)((float)param_2 != 0.0);
  canvas_vis((ulong)(DAT_005d9038 & uVar4),CONCAT44((int)((ulong)param_2 >> 0x20),uVar4),
             CONCAT44((int)((ulong)param_3 >> 0x20),(float)*(int *)(lVar2 + 0x84)),param_4,param_5,
             param_6,param_7,param_8,
             *(long **)((undefined *)(lVar5 * 0x10) + *(long *)(lVar2 + 0x40)),param_10,param_11,
             (undefined *)(lVar5 * 0x10),param_13,param_14,param_15);
  return;
}



// Function : sigmund_hop
// Namespace: 
// Entry    : 004e6cb0
// Prototype: undefined sigmund_hop(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004e6cb0 - 004e6d23


void sigmund_hop(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = (uint)(float)param_1;
  uVar4 = (ulong)uVar3;
  if ((int)uVar3 < 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "sigmund~: ignoring negative hopsize %d",uVar4,param_12,param_13,param_14);
    return;
  }
  *(uint *)(param_9 + 0x78) = uVar3;
  if (uVar3 != 0) {
    bVar2 = 0xff;
    uVar5 = uVar3;
    do {
      bVar2 = bVar2 + 1;
      bVar1 = 1 < uVar5;
      uVar5 = (int)uVar5 >> 1;
    } while (bVar1);
    if (1 << (bVar2 & 0x1f) != uVar3) {
      bVar2 = 0xff;
      do {
        uVar3 = (uint)uVar4;
        bVar2 = bVar2 + 1;
        uVar4 = (ulong)(uint)((int)uVar3 >> 1);
      } while (1 < uVar3);
      *(int *)(param_9 + 0x78) = 1 << (bVar2 & 0x1f);
      post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "sigmund~: adjusting analysis size to %d points");
      return;
    }
  }
  return;
}



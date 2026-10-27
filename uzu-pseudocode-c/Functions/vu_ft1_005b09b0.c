// Function : vu_ft1
// Namespace: 
// Entry    : 005b09b0
// Prototype: undefined vu_ft1(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005b09b0 - 005b0a76


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vu_ft1(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_9 + 0x494);
  dVar5 = (double)param_1;
  iVar2 = 0;
  if ((_DAT_0065efb0 < dVar5) && (iVar2 = 0x28, param_1 < DAT_005d9074)) {
    iVar2 = *(int *)(PTR_iemgui_vu_db2i_00715f70 + (long)(int)(dVar5 + dVar5 + DAT_00651f78) * 4);
  }
  dVar6 = dVar5 * DAT_005d90a0 + _DAT_0065efb8;
  dVar5 = (double)((int)dVar6 + -10000) * DAT_00651f48;
  *(int *)(param_9 + 0x494) = iVar2;
  fVar3 = (float)dVar5;
  uVar4 = CONCAT44((int)((ulong)dVar5 >> 0x20),fVar3);
  *(float *)(param_9 + 0x49c) = fVar3;
  *(byte *)(param_9 + 0x4b8) = *(byte *)(param_9 + 0x4b8) | 2;
  if (iVar2 != iVar1) {
    sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5b1ee0);
    uVar4 = (ulong)(uint)fVar3;
  }
  outlet_float(uVar4,dVar6,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x4b0));
  return;
}



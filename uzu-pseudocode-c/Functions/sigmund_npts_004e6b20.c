// Function : sigmund_npts
// Namespace: 
// Entry    : 004e6b20
// Prototype: undefined sigmund_npts(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004e6b20 - 004e6ca9


void sigmund_npts(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  uVar6 = *(uint *)(param_9 + 0x54);
  uVar7 = (uint)(float)param_1;
  if ((int)uVar7 < 0x80) {
    pcVar9 = "sigmund~: minimum points %d";
    uVar7 = 0x80;
  }
  else {
    if (uVar7 < 0x400001) goto LAB_004e6b69;
    pcVar9 = "sigmund~: maximum points %d";
    uVar7 = 0x400000;
  }
  param_1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar9);
LAB_004e6b69:
  bVar5 = 0xff;
  uVar3 = uVar7;
  do {
    bVar5 = bVar5 + 1;
    bVar2 = 1 < uVar3;
    uVar3 = (int)uVar3 >> 1;
  } while (bVar2);
  if (uVar7 != 1 << (bVar5 & 0x1f)) {
    bVar5 = 0xff;
    do {
      bVar5 = bVar5 + 1;
      bVar2 = 1 < uVar7;
      uVar7 = (int)uVar7 >> 1;
    } while (bVar2);
    uVar7 = 1 << (bVar5 & 0x1f);
    param_1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "sigmund~: adjusting analysis size to %d points");
  }
  if (uVar7 == uVar6) {
    iVar1 = *(int *)(param_9 + 0x50);
  }
  else {
    *(undefined8 *)(param_9 + 0x70) = 0;
    iVar1 = *(int *)(param_9 + 0x50);
  }
  if (iVar1 == 1) {
    if (*(void **)(param_9 + 0x60) == (void *)0x0) {
      pvVar4 = getbytes((long)(int)uVar7 << 2);
      *(void **)(param_9 + 0x60) = pvVar4;
      memset(pvVar4,0,(long)(int)uVar7 << 2);
      param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    }
    else {
      pvVar4 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           *(void **)(param_9 + 0x60),(long)(int)uVar6 << 2,(long)(int)uVar7 << 2);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      *(void **)(param_9 + 0x60) = pvVar4;
    }
  }
  else {
    *(undefined8 *)(param_9 + 0x60) = 0;
  }
  if (uVar6 == 0) {
    uVar8 = 0xffffffd00;
  }
  else {
    uVar3 = 0xffffffd0;
    do {
      uVar3 = uVar3 + 0x30;
      bVar2 = 1 < uVar6;
      uVar6 = (int)uVar6 >> 1;
    } while (bVar2);
    uVar8 = (ulong)uVar3 << 4;
  }
  uVar3 = 0xffffffd0;
  uVar6 = uVar7;
  do {
    uVar3 = uVar3 + 0x30;
    bVar2 = 1 < uVar6;
    uVar6 = (int)uVar6 >> 1;
  } while (bVar2);
  pvVar4 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x68),uVar8,(ulong)uVar3 << 4);
  *(void **)(param_9 + 0x68) = pvVar4;
  *(uint *)(param_9 + 0x54) = uVar7;
  return;
}



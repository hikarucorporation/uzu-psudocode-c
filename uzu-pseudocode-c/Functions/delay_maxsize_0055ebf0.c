// Function : delay_maxsize
// Namespace: 
// Entry    : 0055ebf0
// Prototype: undefined delay_maxsize(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055ebf0 - 0055ece8


void delay_maxsize(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar8;
  
  fVar6 = (float)param_1;
  if ((float)param_1 <= DAT_005d9038) {
    fVar6 = DAT_005d9038;
  }
  iVar4 = (int)fVar6;
  lVar5 = (long)iVar4;
  if (iVar4 <= *(int *)(param_9 + 0x60)) goto LAB_0055ec89;
  *(int *)(param_9 + 0x60) = iVar4;
  pvVar1 = *(void **)(param_9 + 0x40);
  if (pvVar1 == (void *)(param_9 + 0x90)) {
    pvVar2 = getbytes(lVar5 * 4 + 0x1c);
    *(void **)(param_9 + 0x40) = pvVar2;
    if (pvVar2 != (void *)0x0) goto LAB_0055ec89;
    *(void **)(param_9 + 0x40) = pvVar1;
    uVar7 = extraout_XMM0_Da_00;
    uVar8 = extraout_XMM0_Db_00;
  }
  else {
    if (pvVar1 == (void *)0x0) goto LAB_0055ec89;
    pvVar1 = resizebytes(CONCAT44((int)((ulong)param_1 >> 0x20),fVar6),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,pvVar1,
                         (long)*(int *)(param_9 + 0x5c) * 4 + 0x1c,lVar5 * 4 + 0x1c);
    *(void **)(param_9 + 0x40) = pvVar1;
    if (pvVar1 != (void *)0x0) goto LAB_0055ec89;
    *(void **)(param_9 + 0x40) = (void *)(param_9 + 0x90);
    uVar7 = extraout_XMM0_Da;
    uVar8 = extraout_XMM0_Db;
  }
  *(undefined4 *)(param_9 + 0x5c) = 0x200;
  pd_error(CONCAT44(uVar8,uVar7),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "unable to resize buffer; using size %d",0x200,param_12,param_13,param_14);
LAB_0055ec89:
  *(int *)(param_9 + 0x5c) = iVar4;
  if (iVar4 < *(int *)(param_9 + 100)) {
    *(int *)(param_9 + 100) = iVar4;
  }
  *(undefined4 *)(param_9 + 0x88) = 0;
  memset(*(void **)(param_9 + 0x40),0,lVar5 * 4 + 0x1c);
  lVar5 = *(long *)(param_9 + 0x40);
  if (*(int *)(param_9 + 0x8c) == 0) {
    lVar3 = lVar5 + (long)*(int *)(param_9 + 0x5c) * 4;
  }
  else {
    lVar3 = lVar5 + (long)*(int *)(param_9 + 0x5c) * 4 + 0x1c;
    lVar5 = lVar5 + 0xc;
  }
  *(long *)(param_9 + 0x50) = lVar5;
  *(long *)(param_9 + 0x48) = lVar3;
  return;
}



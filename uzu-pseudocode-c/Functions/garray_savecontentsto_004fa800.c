// Function : garray_savecontentsto
// Namespace: 
// Entry    : 004fa800
// Prototype: undefined garray_savecontentsto(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004fa800 - 004fa949


void garray_savecontentsto
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,int *param_10,undefined8 param_11,int *param_12,char *param_13,
               undefined8 param_14)

{
  byte bVar1;
  double in_RAX;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar12;
  undefined4 uVar14;
  double dVar13;
  
  puVar2 = (uint *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13,param_14);
  bVar1 = *(byte *)(param_9 + 0x30);
  uVar11 = extraout_XMM0_Qa;
  if ((bVar1 & 4) != 0) {
    puVar3 = gensym("#A");
    puVar4 = gensym("resize");
    param_13 = (char *)(ulong)*puVar2;
    uVar11 = binbuf_addv(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,param_10,0x653a6f,puVar3,puVar4,param_13,param_14,in_RAX);
    bVar1 = *(byte *)(param_9 + 0x30);
  }
  if ((bVar1 & 2) != 0) {
    uVar7 = *puVar2;
    if ((int)uVar7 < 0x30d41) {
      if ((int)uVar7 < 1) {
        return;
      }
    }
    else {
      post(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "warning: I\'m saving an array with %d points!\n");
    }
    uVar6 = 0;
    dVar13 = (double)((ulong)uVar7 << 0x20);
    do {
      uVar14 = (undefined4)((ulong)dVar13 >> 0x20);
      uVar7 = uVar7 - uVar6;
      uVar9 = 1000;
      if ((int)uVar7 < 1000) {
        uVar9 = uVar7;
      }
      puVar3 = gensym("#A");
      dVar13 = (double)CONCAT44(uVar14,uVar6);
      uVar5 = (ulong)uVar6;
      uVar12 = binbuf_addv(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,param_10,0x6546ed,puVar3,uVar5,param_13,param_14,dVar13);
      uVar11 = extraout_RDX;
      if (0 < (int)uVar7) {
        lVar8 = (long)SUB84(dVar13,0);
        uVar10 = 1;
        if (1 < (int)uVar9) {
          uVar10 = (ulong)uVar9;
        }
        do {
          uVar12 = binbuf_addv((double)*(float *)(*(long *)(puVar2 + 2) + lVar8 * 8),param_2,param_3
                               ,param_4,param_5,param_6,param_7,param_8,param_10,0x651ee3,uVar11,
                               uVar5,param_13,param_14,dVar13);
          lVar8 = lVar8 + 1;
          uVar10 = uVar10 - 1;
          uVar11 = extraout_RDX_00;
        } while (uVar10 != 0);
      }
      binbuf_addv(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x656033,
                  uVar11,uVar5,param_13,param_14,dVar13);
      uVar6 = SUB84(dVar13,0) + uVar9;
      uVar7 = (uint)((ulong)dVar13 >> 0x20);
    } while ((int)uVar6 < (int)uVar7);
  }
  return;
}



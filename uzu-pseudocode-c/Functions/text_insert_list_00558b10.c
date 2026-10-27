// Function : text_insert_list
// Namespace: 
// Entry    : 00558b10
// Prototype: undefined text_insert_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00558b10 - 00558cdd


void text_insert_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,ulong param_11,int *param_12,char *param_13,
                     undefined8 param_14,undefined1 param_15)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  int *piVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  void *__src;
  long lVar18;
  long lVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar21;
  double dVar22;
  
  piVar12 = param_12;
  piVar7 = (int *)text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,param_9,param_10,param_11,param_12,param_13,param_14);
  fVar2 = *(float *)(param_9 + 0x60);
  dVar22 = (double)fVar2;
  uVar17 = 0x7fffffff;
  if (dVar22 <= DAT_0065a018) {
    uVar17 = (int)fVar2;
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  if ((int)uVar17 < 0) {
    pd_error((ulong)(uint)fVar2,dVar22,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "text insert: line number (%d) < 0",(ulong)uVar17,piVar12,param_13,param_14);
    return;
  }
  uVar6 = binbuf_getnatom(piVar7);
  puVar8 = (uint *)binbuf_getvec((long)piVar7);
  if (0 < (int)uVar6) {
    uVar15 = 0;
    uVar11 = 0;
    do {
      if (uVar11 == uVar17) goto LAB_00558bb4;
      uVar11 = uVar11 + ((*puVar8 & 0xfffffffe) == 4);
      uVar15 = uVar15 + 1;
      puVar8 = puVar8 + 4;
    } while (uVar6 != uVar15);
  }
  uVar15 = (ulong)uVar6;
LAB_00558bb4:
  iVar3 = (int)param_11;
  uVar17 = uVar6 + iVar3 + 1;
  __src = (void *)(ulong)uVar17;
  binbuf_resize(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),dVar22,param_3,param_4,param_5,param_6,
                param_7,param_8,piVar7,uVar17);
  lVar9 = binbuf_getvec((long)piVar7);
  iVar14 = (int)uVar15;
  uVar13 = extraout_RDX;
  uVar20 = extraout_XMM0_Da_00;
  uVar21 = extraout_XMM0_Db_00;
  if (iVar14 <= (int)(uVar6 + iVar3)) {
    __src = (void *)((long)iVar14 * 0x10 + lVar9);
    memmove((void *)((long)(iVar3 + iVar14 + 1) * 0x10 + lVar9),__src,
            (long)(int)(uVar6 - iVar14) << 4);
    uVar13 = extraout_RDX_00;
    uVar20 = extraout_XMM0_Da_01;
    uVar21 = extraout_XMM0_Db_01;
  }
  if (0 < iVar3) {
    lVar18 = lVar9 + (long)iVar14 * 0x10;
    lVar19 = (param_11 & 0xffffffff) * 0x10;
    lVar16 = 0;
    do {
      while (*(int *)((long)param_12 + lVar16) == 3) {
        *(undefined4 *)(lVar18 + lVar16) = 2;
        puVar10 = gensym("(pointer)");
        *(undefined8 **)(lVar18 + 8 + lVar16) = puVar10;
        lVar16 = lVar16 + 0x10;
        uVar13 = extraout_RDX_01;
        uVar20 = extraout_XMM0_Da_02;
        uVar21 = extraout_XMM0_Db_02;
        if (lVar19 == lVar16) goto LAB_00558c78;
      }
      puVar1 = (undefined4 *)((long)param_12 + lVar16);
      uVar20 = *puVar1;
      uVar21 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar1 = (undefined4 *)(lVar18 + lVar16);
      *puVar1 = uVar20;
      puVar1[1] = uVar21;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar16 = lVar16 + 0x10;
    } while (lVar19 != lVar16);
  }
LAB_00558c78:
  lVar16 = (long)(iVar14 + iVar3) * 0x10;
  *(undefined4 *)(lVar9 + lVar16) = 4;
  *(undefined4 *)(lVar9 + 8 + lVar16) = 0;
  text_client_senditup
            (CONCAT44(uVar21,uVar20),dVar22,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             __src,uVar13,lVar9,param_13,param_14,param_15);
  return;
}



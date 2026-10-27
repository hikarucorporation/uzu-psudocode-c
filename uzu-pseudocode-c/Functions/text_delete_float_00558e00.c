// Function : text_delete_float
// Namespace: 
// Entry    : 00558e00
// Prototype: undefined text_delete_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00558e00 - 00558f2d


void text_delete_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,ulong param_10,undefined8 param_11,int *param_12,char *param_13,
                      undefined8 param_14,undefined1 param_15)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar8;
  long lVar9;
  uint *__dest;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  piVar4 = (int *)text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                     ,param_9,param_10,param_11,param_12,param_13,param_14);
  if (piVar4 == (int *)0x0) {
    return;
  }
  puVar5 = (uint *)binbuf_getvec((long)piVar4);
  uVar2 = binbuf_getnatom(piVar4);
  if (-1 < (int)(float)param_1) {
    if (0 < (int)uVar2) {
      lVar9 = 0;
      iVar3 = 0;
      __dest = puVar5;
      do {
        if (iVar3 == (int)(float)param_1) {
          uVar6 = -lVar9;
          if ((int)uVar2 <= (int)uVar6) goto LAB_00558edc;
          puVar7 = __dest;
          goto LAB_00558ec0;
        }
        iVar3 = iVar3 + (uint)((*__dest & 0xfffffffe) == 4);
        __dest = __dest + 4;
        lVar9 = lVar9 + -1;
      } while ((ulong)uVar2 + lVar9 != 0);
    }
    post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,param_7
         ,param_8,"text delete: %d: line number out of range");
    return;
  }
  uVar10 = binbuf_clear(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,piVar4);
  uVar8 = extraout_RDX;
  goto LAB_00558f18;
LAB_00558edc:
  uVar1 = (uint)((int)uVar6 < (int)uVar2) + (int)uVar6;
  goto LAB_00558ee6;
  while( true ) {
    uVar6 = uVar6 + 1;
    puVar7 = puVar7 + 4;
    uVar1 = uVar2;
    if (uVar2 == uVar6) break;
LAB_00558ec0:
    if ((*puVar7 & 0xfffffffe) == 4) goto LAB_00558edc;
  }
LAB_00558ee6:
  param_12 = (int *)(ulong)uVar1;
  memmove(__dest,puVar5 + (long)(int)uVar1 * 4,(long)(int)(uVar2 - uVar1) << 4);
  uVar2 = (uVar2 - uVar1) - (int)lVar9;
  param_10 = (ulong)uVar2;
  binbuf_resize(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,piVar4,uVar2);
  uVar10 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
  uVar8 = extraout_RDX_00;
LAB_00558f18:
  text_client_senditup
            (uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,uVar8,
             param_12,param_13,param_14,param_15);
  return;
}



// Function : gatom_motion
// Namespace: 
// Entry    : 0052dd10
// Prototype: undefined gatom_motion(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, byte * param_14)
// Body     : 0052dd10 - 0052df79


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gatom_motion(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,byte *param_14)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined7 extraout_var;
  long lVar7;
  undefined8 extraout_RDX;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 extraout_XMM0_Qa;
  double dVar12;
  undefined8 extraout_XMM0_Qa_00;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  if ((float)param_3 == 0.0) {
    *(byte *)(param_9 + 0xf) = *(byte *)(param_9 + 0xf) & 0xef;
    lVar6 = param_9[0xe];
    if ((-1 < (int)lVar6) && (fVar13 = (float)param_2, fVar13 != 0.0)) {
      iVar4 = binbuf_getnatom((undefined4 *)param_9[2]);
      if ((int)lVar6 < iVar4) {
        lVar6 = binbuf_getvec(param_9[2]);
        if (*(int *)(lVar6 + (long)(int)param_9[0xe] * 0x10) == 1) {
          lVar6 = binbuf_getvec(param_9[2]);
          lVar7 = (long)(int)param_9[0xe] * 0x10;
          fVar1 = *(float *)(lVar6 + 8 + lVar7);
          if ((*(byte *)(param_9 + 0xf) & 1) == 0) {
            dVar14 = (double)(fVar1 - fVar13);
            dVar12 = floor(DAT_005d90a0 * dVar14 + DAT_005db338);
            dVar12 = dVar12 * DAT_00651f48;
            uVar9 = -(ulong)(DAT_00655920 + dVar14 < dVar12);
            uVar10 = -(ulong)(dVar12 < DAT_00655918 + dVar14);
            dVar12 = (double)(~uVar10 & (ulong)dVar14 |
                             (~uVar9 & (ulong)dVar14 | uVar9 & (ulong)dVar12) & uVar10);
            dVar14 = floor(DAT_005db338 + dVar12);
            dVar15 = DAT_00651e50 + dVar12;
            dVar16 = dVar12 + _DAT_00655928;
          }
          else {
            dVar12 = (double)fVar1 - (double)fVar13 * DAT_00651f48;
            dVar14 = floor(DAT_005d90a0 * dVar12 + DAT_005db338);
            dVar14 = dVar14 * DAT_00651f48;
            dVar15 = DAT_00655918 + dVar12;
            dVar16 = DAT_00655920 + dVar12;
          }
          dVar14 = (double)(~-(ulong)(dVar14 < dVar15) & (ulong)dVar12 |
                           (~-(ulong)(dVar16 < dVar14) & (ulong)dVar12 |
                           -(ulong)(dVar16 < dVar14) & (ulong)dVar14) & -(ulong)(dVar14 < dVar15));
          uVar2 = (undefined4)((ulong)dVar14 >> 0x20);
          fVar11 = (float)dVar14;
          uVar9 = CONCAT44(uVar2,fVar11);
          fVar13 = *(float *)(param_9 + 9);
          uVar10 = (ulong)(uint)fVar13;
          uVar17 = 0;
          uVar18 = 0;
          fVar1 = *(float *)((long)param_9 + 0x44);
          auVar19 = ZEXT416((uint)fVar1);
          if (fVar1 != 0.0 || fVar13 != 0.0) {
            if (fVar11 <= fVar13) {
              uVar9 = CONCAT44(uVar2,fVar13);
            }
            if (fVar1 < (float)uVar9) {
              uVar9 = (ulong)(uint)fVar1;
            }
          }
          auVar20._8_4_ = fVar1;
          auVar20._0_8_ = uVar9;
          auVar20._12_4_ = 0;
          *(int *)(lVar6 + 8 + lVar7) = (int)uVar9;
          if (((long *)param_9[7])[0x18] != 0) {
            bVar3 = gobj_shouldvis(param_9,(long *)param_9[7]);
            auVar20._8_8_ = auVar19._0_8_;
            auVar20._0_8_ = extraout_XMM0_Qa_00;
            if ((int)CONCAT71(extraout_var,bVar3) != 0) {
              auVar20 = sys_queuegui((long)param_9,param_9[7],0x52a8a0);
            }
          }
          gatom_bang(auVar20._0_8_,auVar20._8_8_,uVar10,CONCAT44(uVar18,uVar17),dVar12,param_6,
                     param_7,param_8,(long)param_9);
          return;
        }
      }
    }
  }
  else {
    plVar8 = param_9;
    plVar5 = (long *)glist_findrtext(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                     param_9[7],(long)param_9,param_11,param_12,param_13,param_14);
    auVar19 = rtext_retext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           plVar5,plVar8,extraout_RDX,param_12,param_13,param_14);
    if ((*(byte *)(param_9 + 0xf) & 0x10) != 0) {
      rtext_activate(auVar19._0_8_,auVar19._8_8_,param_3,param_4,param_5,param_6,param_7,param_8,
                     plVar5,1);
      return;
    }
  }
  return;
}



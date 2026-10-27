// Function : ex_sqrt
// Namespace: 
// Entry    : 005cd1c0
// Prototype: undefined ex_sqrt(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, long param_7, undefined8 param_8, float * param_9, float * param_10, char * param_11, undefined8 param_12)
// Body     : 005cd1c0 - 005cd453


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_sqrt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,float *param_9,
            float *param_10,char *param_11,undefined8 param_12)

{
  float fVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  float fVar23;
  undefined1 in_XMM1 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 in_XMM5 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  lVar19 = *(long *)(param_9 + 2);
  if (lVar19 - 0xeU < 2) {
    if (*(long *)(param_10 + 2) == 0xf) {
      uVar15 = *(ulong *)param_10;
      iVar22 = *(int *)(param_7 + 0x28f8);
      uVar3 = _DAT_005d91c0;
      uVar4 = _UNK_005d91c4;
      uVar5 = _UNK_005d91c8;
      uVar6 = _UNK_005d91cc;
      fVar23 = _DAT_006533e0;
      fVar25 = _UNK_006533e4;
      fVar7 = _UNK_006533e8;
      fVar1 = _UNK_006533ec;
      fVar27 = _DAT_006533f0;
      fVar8 = _UNK_006533f4;
      fVar9 = _UNK_006533f8;
      fVar10 = _UNK_006533fc;
      fVar11 = _DAT_00653400;
      fVar12 = _UNK_00653404;
      fVar13 = _UNK_00653408;
      fVar14 = _UNK_0065340c;
    }
    else {
      param_10[2] = 2.10195e-44;
      param_10[3] = 0.0;
      uVar15 = ex_malloc((long)*(int *)(param_7 + 0x28f8) << 2);
      *(ulong *)param_10 = uVar15;
      iVar22 = *(int *)(param_7 + 0x28f8);
      uVar3 = _DAT_005d91c0;
      uVar4 = _UNK_005d91c4;
      uVar5 = _UNK_005d91c8;
      uVar6 = _UNK_005d91cc;
      fVar23 = _DAT_006533e0;
      fVar25 = _UNK_006533e4;
      fVar7 = _UNK_006533e8;
      fVar1 = _UNK_006533ec;
      fVar27 = _DAT_006533f0;
      fVar8 = _UNK_006533f4;
      fVar9 = _UNK_006533f8;
      fVar10 = _UNK_006533fc;
      fVar11 = _DAT_00653400;
      fVar12 = _UNK_00653404;
      fVar13 = _UNK_00653408;
      fVar14 = _UNK_0065340c;
    }
    _DAT_005d91c0 = uVar3;
    _UNK_005d91c4 = uVar4;
    _UNK_005d91c8 = uVar5;
    _UNK_005d91cc = uVar6;
    _DAT_006533e0 = fVar23;
    _UNK_006533e4 = fVar25;
    _UNK_006533e8 = fVar7;
    _UNK_006533ec = fVar1;
    _DAT_006533f0 = fVar27;
    _UNK_006533f4 = fVar8;
    _UNK_006533f8 = fVar9;
    _UNK_006533fc = fVar10;
    _DAT_00653400 = fVar11;
    _UNK_00653404 = fVar12;
    _UNK_00653408 = fVar13;
    _UNK_0065340c = fVar14;
    if (iVar22 != 0) {
      uVar2 = *(ulong *)param_9;
      uVar21 = (ulong)(iVar22 - 1U);
      if ((iVar22 - 1U < 3) ||
         ((uVar15 < uVar2 + uVar21 * 4 + 4 && (uVar2 < uVar15 + uVar21 * 4 + 4)))) {
        uVar16 = uVar15;
        uVar17 = uVar2;
      }
      else {
        uVar18 = uVar21 + 1 & 0xfffffffffffffffc;
        iVar22 = iVar22 - (int)uVar18;
        uVar16 = uVar15 + uVar18 * 4;
        uVar17 = uVar2 + uVar18 * 4;
        uVar20 = 0;
        do {
          auVar24 = *(undefined1 (*) [16])(uVar2 + uVar20 * 4);
          auVar26 = rsqrtps(in_XMM5,auVar24);
          fVar28 = auVar24._0_4_ * auVar26._0_4_;
          fVar29 = auVar24._4_4_ * auVar26._4_4_;
          fVar30 = auVar24._8_4_ * auVar26._8_4_;
          fVar31 = auVar24._12_4_ * auVar26._12_4_;
          in_XMM5._0_4_ =
               -(uint)(fVar11 <= (float)((uint)auVar24._0_4_ & uVar3)) &
               (uint)((fVar28 * auVar26._0_4_ + fVar27) * fVar28 * fVar23);
          in_XMM5._4_4_ =
               -(uint)(fVar12 <= (float)((uint)auVar24._4_4_ & uVar4)) &
               (uint)((fVar29 * auVar26._4_4_ + fVar8) * fVar29 * fVar25);
          in_XMM5._8_4_ =
               -(uint)(fVar13 <= (float)((uint)auVar24._8_4_ & uVar5)) &
               (uint)((fVar30 * auVar26._8_4_ + fVar9) * fVar30 * fVar7);
          in_XMM5._12_4_ =
               -(uint)(fVar14 <= (float)((uint)auVar24._12_4_ & uVar6)) &
               (uint)((fVar31 * auVar26._12_4_ + fVar10) * fVar31 * fVar1);
          *(undefined1 (*) [16])(uVar15 + uVar20 * 4) = in_XMM5;
          uVar20 = uVar20 + 4;
        } while (uVar18 != uVar20);
        if (uVar21 + 1 == uVar18) {
          return;
        }
      }
      fVar7 = DAT_00652610;
      fVar25 = DAT_005d98c8;
      fVar23 = DAT_005d94cc;
      uVar3 = _DAT_005d91c0;
      lVar19 = 0;
      do {
        fVar1 = *(float *)(uVar17 + lVar19 * 4);
        auVar24 = rsqrtss(ZEXT816(0),ZEXT416((uint)fVar1));
        fVar27 = fVar1 * auVar24._0_4_;
        *(uint *)(uVar16 + lVar19 * 4) =
             ~-(uint)((float)((uint)fVar1 & uVar3) < fVar23) &
             (uint)((fVar27 * auVar24._0_4_ + fVar7) * fVar27 * fVar25);
        lVar19 = lVar19 + 1;
      } while (iVar22 != (int)lVar19);
    }
    return;
  }
  if (lVar19 == 2) {
    if (*(long *)(param_10 + 2) != 0xf) {
      param_10[2] = 2.8026e-45;
      param_10[3] = 0.0;
      fVar23 = *param_9;
      auVar24 = rsqrtss(in_XMM1,ZEXT416((uint)fVar23));
      fVar25 = fVar23 * auVar24._0_4_;
      fVar23 = (float)(~-(uint)((float)((uint)fVar23 & _DAT_005d91c0) < DAT_005d94cc) &
                      (uint)((fVar25 * auVar24._0_4_ + DAT_00652610) * DAT_005d98c8 * fVar25));
      goto LAB_005cd3d0;
    }
    fVar23 = *param_9;
    auVar24 = rsqrtss(in_XMM1,ZEXT416((uint)fVar23));
    fVar25 = fVar23 * auVar24._0_4_;
    lVar19 = *(long *)param_10;
    fVar23 = (float)(~-(uint)((float)((uint)fVar23 & _DAT_005d91c0) < DAT_005d94cc) &
                    (uint)((fVar25 * auVar24._0_4_ + DAT_00652610) * DAT_005d98c8 * fVar25));
  }
  else {
    if (lVar19 != 1) {
      pd_error(param_1,in_XMM1._0_8_,param_2,param_3,param_4,in_XMM5._0_8_,param_5,param_6,param_7,
               "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x2b3,lVar19,param_11,param_12);
      return;
    }
    if (*(long *)(param_10 + 2) != 0xf) {
      param_10[2] = 2.8026e-45;
      param_10[3] = 0.0;
      fVar23 = SQRT((float)*(long *)param_9);
LAB_005cd3d0:
      *param_10 = fVar23;
      return;
    }
    lVar19 = *(long *)param_10;
    fVar23 = SQRT((float)*(long *)param_9);
  }
  ex_mkvector(fVar23,lVar19,*(int *)(param_7 + 0x28f8));
  return;
}



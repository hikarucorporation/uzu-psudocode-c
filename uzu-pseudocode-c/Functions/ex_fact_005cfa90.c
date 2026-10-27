// Function : ex_fact
// Namespace: 
// Entry    : 005cfa90
// Prototype: undefined ex_fact(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005cfa90 - 005d017a


/* WARNING: Removing unreachable block (ram,0x005cfcf2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_fact(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,float *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  undefined1 auVar47 [16];
  
  lVar25 = *(long *)(param_11 + 2);
  if (lVar25 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      pfVar20 = *(float **)param_12;
      iVar26 = *(int *)(param_9 + 0x28f8);
      dVar1 = _DAT_005d9000;
      fVar27 = DAT_005d9038;
      fVar19 = _DAT_00652570;
      fVar34 = _UNK_00652574;
      fVar36 = _UNK_00652578;
      fVar38 = _UNK_0065257c;
      iVar28 = _DAT_00660190;
      iVar29 = _UNK_00660194;
      iVar30 = _UNK_00660198;
      iVar2 = _UNK_0066019c;
      iVar3 = _DAT_006601a0;
      iVar4 = _UNK_006601a4;
      iVar5 = _UNK_006601a8;
      iVar6 = _UNK_006601ac;
      iVar7 = _DAT_006601b0;
      iVar8 = _UNK_006601b4;
      iVar9 = _UNK_006601b8;
      iVar10 = _UNK_006601bc;
      iVar11 = _DAT_006601c0;
      iVar12 = _UNK_006601c4;
      iVar13 = _UNK_006601c8;
      iVar14 = _UNK_006601cc;
      iVar15 = _DAT_006601d0;
      iVar16 = _UNK_006601d4;
      iVar17 = _UNK_006601d8;
      iVar18 = _UNK_006601dc;
    }
    else {
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      pfVar20 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *(float **)param_12 = pfVar20;
      iVar26 = *(int *)(param_9 + 0x28f8);
      dVar1 = _DAT_005d9000;
      fVar27 = DAT_005d9038;
      fVar19 = _DAT_00652570;
      fVar34 = _UNK_00652574;
      fVar36 = _UNK_00652578;
      fVar38 = _UNK_0065257c;
      iVar28 = _DAT_00660190;
      iVar29 = _UNK_00660194;
      iVar30 = _UNK_00660198;
      iVar2 = _UNK_0066019c;
      iVar3 = _DAT_006601a0;
      iVar4 = _UNK_006601a4;
      iVar5 = _UNK_006601a8;
      iVar6 = _UNK_006601ac;
      iVar7 = _DAT_006601b0;
      iVar8 = _UNK_006601b4;
      iVar9 = _UNK_006601b8;
      iVar10 = _UNK_006601bc;
      iVar11 = _DAT_006601c0;
      iVar12 = _UNK_006601c4;
      iVar13 = _UNK_006601c8;
      iVar14 = _UNK_006601cc;
      iVar15 = _DAT_006601d0;
      iVar16 = _UNK_006601d4;
      iVar17 = _UNK_006601d8;
      iVar18 = _UNK_006601dc;
    }
    _DAT_005d9000 = dVar1;
    DAT_005d9038 = fVar27;
    _DAT_00652570 = fVar19;
    _UNK_00652574 = fVar34;
    _UNK_00652578 = fVar36;
    _UNK_0065257c = fVar38;
    _DAT_00660190 = iVar28;
    _UNK_00660194 = iVar29;
    _UNK_00660198 = iVar30;
    _UNK_0066019c = iVar2;
    _DAT_006601a0 = iVar3;
    _UNK_006601a4 = iVar4;
    _UNK_006601a8 = iVar5;
    _UNK_006601ac = iVar6;
    _DAT_006601b0 = iVar7;
    _UNK_006601b4 = iVar8;
    _UNK_006601b8 = iVar9;
    _UNK_006601bc = iVar10;
    _DAT_006601c0 = iVar11;
    _UNK_006601c4 = iVar12;
    _UNK_006601c8 = iVar13;
    _UNK_006601cc = iVar14;
    _DAT_006601d0 = iVar15;
    _UNK_006601d4 = iVar16;
    _UNK_006601d8 = iVar17;
    _UNK_006601dc = iVar18;
    if (iVar26 != 0) {
      pfVar23 = *(float **)param_11;
      do {
        iVar26 = iVar26 + -1;
        uVar24 = (uint)*pfVar23;
        dVar32 = dVar1;
        if (0 < (int)uVar24) {
          if (uVar24 < 8) {
            fVar40 = fVar27;
LAB_005cfcd0:
            do {
              fVar40 = fVar40 * (float)(int)uVar24;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          else {
            auVar47._0_4_ = uVar24 + iVar28;
            auVar47._4_4_ = uVar24 + iVar29;
            auVar47._8_4_ = uVar24 + iVar30;
            auVar47._12_4_ = uVar24 + iVar2;
            uVar21 = (uVar24 & 0xfffffff8) - 8;
            uVar22 = (uVar21 >> 3) + 1;
            fVar40 = fVar19;
            fVar42 = fVar34;
            fVar44 = fVar36;
            fVar46 = fVar38;
            fVar31 = fVar19;
            fVar33 = fVar34;
            fVar35 = fVar36;
            fVar37 = fVar38;
            if (uVar21 == 0) {
LAB_005cfc90:
              fVar40 = fVar40 * (float)auVar47._0_4_;
              fVar42 = fVar42 * (float)auVar47._4_4_;
              fVar44 = fVar44 * (float)auVar47._8_4_;
              fVar46 = fVar46 * (float)auVar47._12_4_;
              fVar31 = fVar31 * (float)(auVar47._0_4_ + iVar3);
              fVar33 = fVar33 * (float)(auVar47._4_4_ + iVar4);
              fVar35 = fVar35 * (float)(auVar47._8_4_ + iVar5);
              fVar37 = fVar37 * (float)(auVar47._12_4_ + iVar6);
            }
            else {
              uVar21 = uVar22 & 0xfffffffe;
              do {
                iVar39 = auVar47._0_4_;
                iVar41 = auVar47._4_4_;
                iVar43 = auVar47._8_4_;
                iVar45 = auVar47._12_4_;
                fVar40 = (float)(iVar39 + iVar7) * (float)iVar39 * fVar40;
                fVar42 = (float)(iVar41 + iVar8) * (float)iVar41 * fVar42;
                fVar44 = (float)(iVar43 + iVar9) * (float)iVar43 * fVar44;
                fVar46 = (float)(iVar45 + iVar10) * (float)iVar45 * fVar46;
                fVar31 = (float)(iVar39 + iVar11) * (float)(iVar39 + iVar3) * fVar31;
                fVar33 = (float)(iVar41 + iVar12) * (float)(iVar41 + iVar4) * fVar33;
                fVar35 = (float)(iVar43 + iVar13) * (float)(iVar43 + iVar5) * fVar35;
                fVar37 = (float)(iVar45 + iVar14) * (float)(iVar45 + iVar6) * fVar37;
                auVar47._0_4_ = iVar39 + iVar15;
                auVar47._4_4_ = iVar41 + iVar16;
                auVar47._8_4_ = iVar43 + iVar17;
                auVar47._12_4_ = iVar45 + iVar18;
                uVar21 = uVar21 - 2;
              } while (uVar21 != 0);
              if ((uVar22 & 1) != 0) goto LAB_005cfc90;
            }
            fVar40 = fVar46 * fVar37 * fVar42 * fVar33 * fVar44 * fVar35 * fVar40 * fVar31;
            if ((uVar24 & 0xfffffff8) != uVar24) {
              uVar24 = uVar24 & 7;
              goto LAB_005cfcd0;
            }
          }
          dVar32 = (double)fVar40;
        }
        pfVar23 = pfVar23 + 1;
        *pfVar20 = (float)dVar32;
        pfVar20 = pfVar20 + 1;
      } while (iVar26 != 0);
    }
    return;
  }
  fVar27 = DAT_005d9038;
  if (lVar25 == 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      lVar25 = *(long *)param_12;
      uVar24 = (uint)*param_11;
      if (0 < (int)uVar24) {
        if (7 < uVar24) {
          iVar26 = uVar24 + _DAT_00660190;
          iVar28 = uVar24 + _UNK_00660194;
          iVar29 = uVar24 + _UNK_00660198;
          iVar30 = uVar24 + _UNK_0066019c;
          uVar21 = (uVar24 & 0xfffffff8) - 8;
          uVar22 = (uVar21 >> 3) + 1;
          fVar27 = _DAT_00652570;
          fVar19 = _UNK_00652574;
          fVar34 = _UNK_00652578;
          fVar36 = _UNK_0065257c;
          fVar38 = _DAT_00652570;
          fVar40 = _UNK_00652574;
          fVar42 = _UNK_00652578;
          fVar44 = _UNK_0065257c;
          if (uVar21 != 0) {
            uVar21 = uVar22 & 0xfffffffe;
            do {
              fVar27 = (float)(iVar26 + _DAT_006601b0) * (float)iVar26 * fVar27;
              fVar19 = (float)(iVar28 + _UNK_006601b4) * (float)iVar28 * fVar19;
              fVar34 = (float)(iVar29 + _UNK_006601b8) * (float)iVar29 * fVar34;
              fVar36 = (float)(iVar30 + _UNK_006601bc) * (float)iVar30 * fVar36;
              fVar38 = (float)(iVar26 + _DAT_006601c0) * (float)(iVar26 + _DAT_006601a0) * fVar38;
              fVar40 = (float)(iVar28 + _UNK_006601c4) * (float)(iVar28 + _UNK_006601a4) * fVar40;
              fVar42 = (float)(iVar29 + _UNK_006601c8) * (float)(iVar29 + _UNK_006601a8) * fVar42;
              fVar44 = (float)(iVar30 + _UNK_006601cc) * (float)(iVar30 + _UNK_006601ac) * fVar44;
              iVar26 = iVar26 + _DAT_006601d0;
              iVar28 = iVar28 + _UNK_006601d4;
              iVar29 = iVar29 + _UNK_006601d8;
              iVar30 = iVar30 + _UNK_006601dc;
              uVar21 = uVar21 - 2;
            } while (uVar21 != 0);
          }
          if ((uVar22 & 1) != 0) {
            fVar27 = fVar27 * (float)iVar26;
            fVar19 = fVar19 * (float)iVar28;
            fVar34 = fVar34 * (float)iVar29;
            fVar36 = fVar36 * (float)iVar30;
            fVar38 = fVar38 * (float)(iVar26 + _DAT_006601a0);
            fVar40 = fVar40 * (float)(iVar28 + _UNK_006601a4);
            fVar42 = fVar42 * (float)(iVar29 + _UNK_006601a8);
            fVar44 = fVar44 * (float)(iVar30 + _UNK_006601ac);
          }
          fVar27 = fVar36 * fVar44 * fVar19 * fVar40 * fVar34 * fVar42 * fVar27 * fVar38;
          if ((uVar24 & 0xfffffff8) == uVar24) goto LAB_005d0100;
          uVar24 = uVar24 & 7;
        }
        do {
          fVar27 = fVar27 * (float)(int)uVar24;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      goto LAB_005d0100;
    }
    param_12[2] = 2.8026e-45;
    param_12[3] = 0.0;
    uVar24 = (uint)*param_11;
    if (0 < (int)uVar24) {
      if (uVar24 < 8) {
        fVar27 = DAT_005d9038;
      }
      else {
        iVar26 = uVar24 + _DAT_00660190;
        iVar28 = uVar24 + _UNK_00660194;
        iVar29 = uVar24 + _UNK_00660198;
        iVar30 = uVar24 + _UNK_0066019c;
        uVar21 = (uVar24 & 0xfffffff8) - 8;
        uVar22 = (uVar21 >> 3) + 1;
        fVar27 = _DAT_00652570;
        fVar19 = _UNK_00652574;
        fVar34 = _UNK_00652578;
        fVar36 = _UNK_0065257c;
        fVar38 = _DAT_00652570;
        fVar40 = _UNK_00652574;
        fVar42 = _UNK_00652578;
        fVar44 = _UNK_0065257c;
        if (uVar21 != 0) {
          uVar21 = uVar22 & 0xfffffffe;
          do {
            fVar27 = (float)(iVar26 + _DAT_006601b0) * (float)iVar26 * fVar27;
            fVar19 = (float)(iVar28 + _UNK_006601b4) * (float)iVar28 * fVar19;
            fVar34 = (float)(iVar29 + _UNK_006601b8) * (float)iVar29 * fVar34;
            fVar36 = (float)(iVar30 + _UNK_006601bc) * (float)iVar30 * fVar36;
            fVar38 = (float)(iVar26 + _DAT_006601c0) * (float)(iVar26 + _DAT_006601a0) * fVar38;
            fVar40 = (float)(iVar28 + _UNK_006601c4) * (float)(iVar28 + _UNK_006601a4) * fVar40;
            fVar42 = (float)(iVar29 + _UNK_006601c8) * (float)(iVar29 + _UNK_006601a8) * fVar42;
            fVar44 = (float)(iVar30 + _UNK_006601cc) * (float)(iVar30 + _UNK_006601ac) * fVar44;
            iVar26 = iVar26 + _DAT_006601d0;
            iVar28 = iVar28 + _UNK_006601d4;
            iVar29 = iVar29 + _UNK_006601d8;
            iVar30 = iVar30 + _UNK_006601dc;
            uVar21 = uVar21 - 2;
          } while (uVar21 != 0);
        }
        if ((uVar22 & 1) != 0) {
          fVar27 = fVar27 * (float)iVar26;
          fVar19 = fVar19 * (float)iVar28;
          fVar34 = fVar34 * (float)iVar29;
          fVar36 = fVar36 * (float)iVar30;
          fVar38 = fVar38 * (float)(iVar26 + _DAT_006601a0);
          fVar40 = fVar40 * (float)(iVar28 + _UNK_006601a4);
          fVar42 = fVar42 * (float)(iVar29 + _UNK_006601a8);
          fVar44 = fVar44 * (float)(iVar30 + _UNK_006601ac);
        }
        fVar27 = fVar36 * fVar44 * fVar19 * fVar40 * fVar34 * fVar42 * fVar27 * fVar38;
        if ((uVar24 & 0xfffffff8) == uVar24) goto LAB_005d0170;
        uVar24 = uVar24 & 7;
      }
      do {
        fVar27 = fVar27 * (float)(int)uVar24;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      goto LAB_005d0170;
    }
  }
  else {
    if (lVar25 != 1) {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: FUNV_EVAL_UNARY(%d): bad left type %ld\n",0x3f7,lVar25,param_13,param_14);
      return;
    }
    if (*(long *)(param_12 + 2) == 0xf) {
      lVar25 = *(long *)param_12;
      fVar19 = *param_11;
      if (0 < (int)fVar19) {
        if (7 < (uint)fVar19) {
          iVar26 = (int)fVar19 + _DAT_00660190;
          iVar28 = (int)fVar19 + _UNK_00660194;
          iVar29 = (int)fVar19 + _UNK_00660198;
          iVar30 = (int)fVar19 + _UNK_0066019c;
          uVar24 = ((uint)fVar19 & 0xfffffff8) - 8;
          uVar21 = (uVar24 >> 3) + 1;
          fVar27 = _DAT_00652570;
          fVar34 = _UNK_00652574;
          fVar36 = _UNK_00652578;
          fVar38 = _UNK_0065257c;
          fVar40 = _DAT_00652570;
          fVar42 = _UNK_00652574;
          fVar44 = _UNK_00652578;
          fVar46 = _UNK_0065257c;
          if (uVar24 != 0) {
            uVar24 = uVar21 & 0xfffffffe;
            do {
              fVar27 = (float)(iVar26 + _DAT_006601b0) * (float)iVar26 * fVar27;
              fVar34 = (float)(iVar28 + _UNK_006601b4) * (float)iVar28 * fVar34;
              fVar36 = (float)(iVar29 + _UNK_006601b8) * (float)iVar29 * fVar36;
              fVar38 = (float)(iVar30 + _UNK_006601bc) * (float)iVar30 * fVar38;
              fVar40 = (float)(iVar26 + _DAT_006601c0) * (float)(iVar26 + _DAT_006601a0) * fVar40;
              fVar42 = (float)(iVar28 + _UNK_006601c4) * (float)(iVar28 + _UNK_006601a4) * fVar42;
              fVar44 = (float)(iVar29 + _UNK_006601c8) * (float)(iVar29 + _UNK_006601a8) * fVar44;
              fVar46 = (float)(iVar30 + _UNK_006601cc) * (float)(iVar30 + _UNK_006601ac) * fVar46;
              iVar26 = iVar26 + _DAT_006601d0;
              iVar28 = iVar28 + _UNK_006601d4;
              iVar29 = iVar29 + _UNK_006601d8;
              iVar30 = iVar30 + _UNK_006601dc;
              uVar24 = uVar24 - 2;
            } while (uVar24 != 0);
          }
          if ((uVar21 & 1) != 0) {
            fVar27 = fVar27 * (float)iVar26;
            fVar34 = fVar34 * (float)iVar28;
            fVar36 = fVar36 * (float)iVar29;
            fVar38 = fVar38 * (float)iVar30;
            fVar40 = fVar40 * (float)(iVar26 + _DAT_006601a0);
            fVar42 = fVar42 * (float)(iVar28 + _UNK_006601a4);
            fVar44 = fVar44 * (float)(iVar29 + _UNK_006601a8);
            fVar46 = fVar46 * (float)(iVar30 + _UNK_006601ac);
          }
          fVar27 = fVar38 * fVar46 * fVar34 * fVar42 * fVar36 * fVar44 * fVar27 * fVar40;
          if ((float)((uint)fVar19 & 0xfffffff8) == fVar19) goto LAB_005d0100;
          fVar19 = (float)((uint)fVar19 & 7);
        }
        do {
          fVar27 = fVar27 * (float)(int)fVar19;
          fVar19 = (float)((int)fVar19 - 1);
        } while (fVar19 != 0.0);
      }
LAB_005d0100:
      ex_mkvector(fVar27,lVar25,*(int *)(param_9 + 0x28f8));
      return;
    }
    param_12[2] = 2.8026e-45;
    param_12[3] = 0.0;
    fVar19 = *param_11;
    if (0 < (int)fVar19) {
      if ((uint)fVar19 < 8) {
        fVar27 = DAT_005d9038;
      }
      else {
        iVar26 = (int)fVar19 + _DAT_00660190;
        iVar28 = (int)fVar19 + _UNK_00660194;
        iVar29 = (int)fVar19 + _UNK_00660198;
        iVar30 = (int)fVar19 + _UNK_0066019c;
        uVar24 = ((uint)fVar19 & 0xfffffff8) - 8;
        uVar21 = (uVar24 >> 3) + 1;
        fVar27 = _DAT_00652570;
        fVar34 = _UNK_00652574;
        fVar36 = _UNK_00652578;
        fVar38 = _UNK_0065257c;
        fVar40 = _DAT_00652570;
        fVar42 = _UNK_00652574;
        fVar44 = _UNK_00652578;
        fVar46 = _UNK_0065257c;
        if (uVar24 != 0) {
          uVar24 = uVar21 & 0xfffffffe;
          do {
            fVar27 = (float)(iVar26 + _DAT_006601b0) * (float)iVar26 * fVar27;
            fVar34 = (float)(iVar28 + _UNK_006601b4) * (float)iVar28 * fVar34;
            fVar36 = (float)(iVar29 + _UNK_006601b8) * (float)iVar29 * fVar36;
            fVar38 = (float)(iVar30 + _UNK_006601bc) * (float)iVar30 * fVar38;
            fVar40 = (float)(iVar26 + _DAT_006601c0) * (float)(iVar26 + _DAT_006601a0) * fVar40;
            fVar42 = (float)(iVar28 + _UNK_006601c4) * (float)(iVar28 + _UNK_006601a4) * fVar42;
            fVar44 = (float)(iVar29 + _UNK_006601c8) * (float)(iVar29 + _UNK_006601a8) * fVar44;
            fVar46 = (float)(iVar30 + _UNK_006601cc) * (float)(iVar30 + _UNK_006601ac) * fVar46;
            iVar26 = iVar26 + _DAT_006601d0;
            iVar28 = iVar28 + _UNK_006601d4;
            iVar29 = iVar29 + _UNK_006601d8;
            iVar30 = iVar30 + _UNK_006601dc;
            uVar24 = uVar24 - 2;
          } while (uVar24 != 0);
        }
        if ((uVar21 & 1) != 0) {
          fVar27 = fVar27 * (float)iVar26;
          fVar34 = fVar34 * (float)iVar28;
          fVar36 = fVar36 * (float)iVar29;
          fVar38 = fVar38 * (float)iVar30;
          fVar40 = fVar40 * (float)(iVar26 + _DAT_006601a0);
          fVar42 = fVar42 * (float)(iVar28 + _UNK_006601a4);
          fVar44 = fVar44 * (float)(iVar29 + _UNK_006601a8);
          fVar46 = fVar46 * (float)(iVar30 + _UNK_006601ac);
        }
        fVar27 = fVar38 * fVar46 * fVar34 * fVar42 * fVar36 * fVar44 * fVar27 * fVar40;
        if ((float)((uint)fVar19 & 0xfffffff8) == fVar19) goto LAB_005d0170;
        fVar19 = (float)((uint)fVar19 & 7);
      }
      do {
        fVar27 = fVar27 * (float)(int)fVar19;
        fVar19 = (float)((int)fVar19 - 1);
      } while (fVar19 != 0.0);
      goto LAB_005d0170;
    }
  }
  fVar27 = DAT_005d9038;
LAB_005d0170:
  *param_12 = fVar27;
  return;
}



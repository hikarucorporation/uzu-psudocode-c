// Function : applyOperationToChildWithID<juce::SVGState::GetFillTypeOp>
// Namespace: juce:SVGState:XmlPath
// Entry    : 002b2320
// Prototype: ulong applyOperationToChildWithID<juce::SVGState::GetFillTypeOp>(undefined8 param_1_00, undefined8 param_2_00, ulong param_3, XmlPath * this, ulong * param_5, undefined8 * param_6, undefined8 param_7, undefined8 param_8, byte * param_9)
// Body     : 002b2320 - 002b3c4b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::GetFillTypeOp>(juce::String
   const&, juce::SVGState::GetFillTypeOp&) const */

ulong __thiscall
juce::SVGState::XmlPath::applyOperationToChildWithID<juce::SVGState::GetFillTypeOp>
          (undefined8 param_1_00,undefined8 param_2_00,ulong param_3,XmlPath *this,ulong *param_5,
          undefined8 *param_6,undefined8 param_7,byte *param_8,byte *param_9)

{
  byte bVar1;
  long *plVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  double *pdVar11;
  SVGState *pSVar12;
  SVGState *pSVar13;
  float *pfVar14;
  void *pvVar15;
  int *piVar16;
  SVGState *pSVar17;
  int iVar18;
  ulong uVar19;
  double *pdVar20;
  int iVar21;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  ulong extraout_RDX_09;
  ulong extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  undefined8 uVar22;
  uint uVar23;
  int *piVar24;
  double *pdVar25;
  undefined8 *puVar26;
  float fVar27;
  byte *pbVar28;
  long lVar29;
  long *plVar30;
  undefined1 uVar31;
  byte *pbVar32;
  byte *pbVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  XmlElement *pXVar37;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar38;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar40;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined8 uVar39;
  float fVar41;
  double dVar42;
  float fVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  uint uVar54;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8;
  double *local_f0;
  undefined8 uStack_e8;
  SVGState *local_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  XmlElement *local_b8;
  XmlPath *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined1 local_88 [16];
  ulong *local_70;
  undefined8 *local_68;
  long local_60;
  ulong local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  pXVar37 = *(XmlElement **)(*(long *)this + 8);
  local_70 = param_5;
  local_68 = param_6;
  if (pXVar37 == (XmlElement *)0x0) {
LAB_002b27a2:
    uVar19 = 0;
  }
  else {
    do {
      plVar30 = *(long **)(pXVar37 + 0x10);
      uVar19 = 0;
      local_b8 = pXVar37;
      local_b0 = this;
      if (plVar30 != (long *)0x0) {
        uVar10 = *local_70;
        local_88._0_8_ = uVar10;
        do {
          pbVar32 = &DAT_0065bedf;
          param_8 = (byte *)plVar30[1];
          do {
            pbVar33 = param_8 + 1;
            bVar1 = *param_8;
            uVar36 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar36 = uVar36 & 0x7f;
                goto LAB_002b23f2;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar23 = 0x3f;
                lVar35 = 0;
                bVar3 = false;
                param_9 = (byte *)0x0;
              }
              else {
                bVar3 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar23 = 0x1f;
                  lVar35 = 1;
                  param_9 = (byte *)0x0;
                }
                else {
                  uVar23 = 0xf;
                  lVar35 = 2;
                  param_9 = (byte *)CONCAT71((int7)((ulong)param_9 >> 8),1);
                }
              }
              uVar36 = uVar36 & uVar23;
              if ((param_8[1] & 0xc0) == 0x80) {
                uVar36 = param_8[1] & 0x3f | uVar36 << 6;
                if (bVar3) {
                  uVar23 = (uint)param_8[2];
                  if ((uVar23 & 0xffffffc0) != 0x80) {
                    bVar1 = *pbVar32;
                    param_8 = param_8 + 2;
                    goto joined_r0x002b23fe;
                  }
                  uVar36 = uVar23 & 0x3f | uVar36 << 6;
                  if ((char)param_9 != '\0') {
                    pbVar33 = param_8 + 3;
                    if ((*pbVar33 & 0xc0) != 0x80) goto LAB_002b24e0;
                    uVar36 = uVar36 << 6 | *pbVar33 & 0x3f;
                  }
                }
                bVar1 = *pbVar32;
                param_8 = param_8 + lVar35 + 2;
              }
              else {
LAB_002b24e0:
                bVar1 = *pbVar32;
                param_8 = pbVar33;
              }
            }
            else {
LAB_002b23f2:
              bVar1 = *pbVar32;
              param_8 = pbVar33;
            }
joined_r0x002b23fe:
            uVar23 = (uint)bVar1;
            pbVar33 = pbVar32 + 1;
            if ((char)bVar1 < '\0') {
              pbVar33 = pbVar32 + 1;
              if ((bVar1 & 0x40) == 0) {
                uVar23 = uVar23 & 0x7f;
              }
              else {
                if ((bVar1 & 0x20) == 0) {
                  uVar47 = 0x3f;
                  lVar35 = 0;
                  bVar3 = false;
                  param_9 = (byte *)0x0;
                }
                else {
                  bVar3 = true;
                  if ((bVar1 & 0x10) == 0) {
                    uVar47 = 0x1f;
                    lVar35 = 1;
                    param_9 = (byte *)0x0;
                  }
                  else {
                    uVar47 = 0xf;
                    lVar35 = 2;
                    param_9 = (byte *)CONCAT71((int7)((ulong)param_9 >> 8),1);
                  }
                }
                uVar23 = uVar23 & uVar47;
                if ((pbVar32[1] & 0xc0) == 0x80) {
                  pbVar28 = pbVar32 + lVar35 + 2;
                  uVar23 = pbVar32[1] & 0x3f | uVar23 << 6;
                  pbVar33 = pbVar28;
                  if (bVar3) {
                    pbVar33 = pbVar32 + 2;
                    if ((*pbVar33 & 0xc0) == 0x80) {
                      uVar23 = *pbVar33 & 0x3f | uVar23 << 6;
                      pbVar33 = pbVar28;
                      if ((char)param_9 != '\0') {
                        pbVar33 = pbVar32 + 3;
                        bVar1 = *pbVar33;
                        param_9 = (byte *)(ulong)bVar1;
                        if ((bVar1 & 0xc0) == 0x80) {
                          param_9 = (byte *)(ulong)(bVar1 & 0x3f);
                          uVar23 = uVar23 << 6 | bVar1 & 0x3f;
                          pbVar33 = pbVar28;
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar21 = uVar36 - uVar23;
            uVar10 = uVar10 & 0xffffffff;
            if (iVar21 != 0) {
              uVar10 = (ulong)(iVar21 >> 0x1f | 1);
            }
            uVar19 = (ulong)((uint)(uVar36 == 0) * 2);
            if (iVar21 != 0) {
              uVar19 = 1;
            }
            pbVar32 = pbVar33;
          } while ((int)uVar19 == 0);
          if (((int)uVar19 != 1) || ((int)uVar10 == 0)) {
            uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar30[1],&DAT_0065bedf);
            param_1_00 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
            if (uVar36 != 0) goto LAB_002b2650;
            uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar30[2],(byte *)local_88._0_8_);
            param_1_00 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
            if (uVar36 != 0) goto LAB_002b2650;
            uVar36 = CharacterFunctions::
                     compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (*(byte **)(pXVar37 + 0x18),&DAT_005e3aa1);
            param_1_00 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
            if (uVar36 == 0) goto LAB_002b2650;
            uVar10 = XmlElement::hasTagNameIgnoringNamespace
                               (local_b8,(byte *)"linearGradient",extraout_RDX,uVar19,param_8,
                                (uint)param_9);
            if (((char)uVar10 == '\0') &&
               (uVar10 = XmlElement::hasTagNameIgnoringNamespace
                                   (local_b8,(byte *)"radialGradient",extraout_RDX_00,uVar19,param_8
                                    ,(uint)param_9), (char)uVar10 == '\0')) goto LAB_002b27a2;
            pSVar12 = (SVGState *)*local_68;
            lVar35 = local_68[1];
            local_118._0_4_ = *(undefined4 *)(local_68 + 2);
            local_f0 = (double *)0x0;
            uStack_e8._0_4_ = 0;
            uStack_e8._4_4_ = 0.0;
            local_108 = 0;
            uStack_100 = 0;
            local_f8 = 0;
                    /* try { // try from 002b26eb to 002b26f7 has its CatchHandler @ 002b3d1f */
            getLinkedID((SVGState *)&local_a8,*(long **)(local_b8 + 0x10));
            if (*(char *)local_a8 != '\0') {
              uStack_d0 = &local_108;
                    /* try { // try from 002b2718 to 002b2729 has its CatchHandler @ 002b3cb2 */
              local_d8 = pSVar12;
              applyOperationToChildWithID<juce::SVGState::SetGradientStopsOp>
                        ((XmlPath *)(pSVar12 + 8),&local_a8,&local_d8,uVar19,param_8,param_9);
            }
            piVar24 = (int *)(local_a8 + -0x10);
            if (piVar24 != &emptyString) {
              LOCK();
              iVar21 = *piVar24;
              *piVar24 = *piVar24 + -1;
              UNLOCK();
              if (iVar21 == 0) {
                operator_delete__(piVar24);
              }
            }
                    /* try { // try from 002b274f to 002b2760 has its CatchHandler @ 002b3d21 */
            addGradientStopsIn(pSVar12,(ColourGradient *)&local_108,(long *)&local_b8,uVar19,param_8
                               ,param_9);
            uVar44 = _ZN4juce7ColoursL5blackE_14;
            lVar29 = (long)(int)uStack_e8._4_4_;
            uVar19 = extraout_RDX_01;
            if (lVar29 == 0) {
              uVar10 = 0;
              fVar41 = 0.0;
              if ((int)(uint)uStack_e8 < 1) {
                local_f0 = realloc(local_f0,0x80);
                uStack_e8._0_4_ = 8;
                uVar19 = extraout_RDX_02;
                fVar41 = uStack_e8._4_4_;
              }
              uStack_e8._4_4_ = (float)((int)fVar41 + 1);
              local_f0[(long)(int)fVar41 * 2] = 0.0;
              *(undefined4 *)(local_f0 + (long)(int)fVar41 * 2 + 1) = uVar44;
              uVar44 = _ZN4juce7ColoursL5blackE_14;
              if ((int)uStack_e8._4_4_ < 1) goto LAB_002b283a;
              uVar10 = 0;
              pdVar20 = local_f0;
              goto LAB_002b2821;
            }
            if (0.0 < *local_f0) {
              uVar44 = *(undefined4 *)(local_f0 + 1);
              if ((int)uStack_e8._4_4_ < 1) {
                if ((int)uStack_e8._4_4_ < (int)(uint)uStack_e8) {
                }
                else {
                  uVar36 = (((int)uStack_e8._4_4_ - ((int)uStack_e8._4_4_ + 1 >> 0x1f)) + 1 >> 1) +
                           (int)uStack_e8._4_4_ + 9U & 0xfffffff8;
                  if ((uint)uStack_e8 != uVar36) {
                    if ((int)uVar36 < 1) {
                      free(local_f0);
                      local_f0 = (double *)0x0;
                      uVar19 = extraout_RDX_07;
                    }
                    else {
                      local_f0 = realloc(local_f0,(ulong)uVar36 << 4);
                      uVar19 = extraout_RDX_04;
                    }
                  }
                  uStack_e8._0_4_ = uVar36;
                }
                local_f0[(long)(int)uStack_e8._4_4_ * 2] = 0.0;
                pdVar20 = local_f0 + (long)(int)uStack_e8._4_4_ * 2;
                uStack_e8._4_4_ = (float)((int)uStack_e8._4_4_ + 1);
              }
              else {
                *local_f0 = 0.0;
                pdVar20 = local_f0;
              }
              *(undefined4 *)(pdVar20 + 1) = uVar44;
            }
            lVar29 = lVar29 + -1;
            pdVar20 = (double *)(ulong)(uint)uStack_e8._4_4_;
            fVar41 = 0.0;
            uVar44 = 0;
            fVar43 = (float)lVar29;
            if ((uint)fVar43 < (uint)uStack_e8._4_4_) {
              uVar19 = lVar29 * 0x10;
              if (_DAT_005d9000 < local_f0[lVar29 * 2] || _DAT_005d9000 == local_f0[lVar29 * 2])
              goto LAB_002b2a9d;
              uVar19 = (long)(int)fVar43 * 0x10;
              uVar44 = *(undefined4 *)(local_f0 + (long)(int)fVar43 * 2 + 1);
            }
            if ((int)uStack_e8._4_4_ < 1) goto LAB_002b29e1;
            pdVar25 = (double *)0x0;
            pdVar11 = local_f0;
            goto LAB_002b29c3;
          }
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
        uVar19 = 0;
      }
LAB_002b2650:
      uVar10 = applyOperationToChildWithID<juce::SVGState::GetFillTypeOp>
                         (param_1_00,param_2_00,param_3,(XmlPath *)&local_b8,local_70,local_68,
                          uVar19,param_8,param_9);
      param_1_00 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
      uVar19 = uVar10 & 0xffffffff;
    } while (((char)uVar10 == '\0') &&
            (pXVar37 = *(XmlElement **)pXVar37, pXVar37 != (XmlElement *)0x0));
  }
  goto LAB_002b27a4;
  while( true ) {
    uVar10 = uVar10 + 1;
    pdVar20 = pdVar20 + 2;
    if ((uint)uStack_e8._4_4_ == uVar10) break;
LAB_002b2821:
    if (_DAT_005d9000 < *pdVar20) goto LAB_002b283a;
  }
  uVar10 = (ulong)(uint)uStack_e8._4_4_;
LAB_002b283a:
  if ((int)(uint)uStack_e8 <= (int)uStack_e8._4_4_) {
    uVar36 = ((int)uStack_e8._4_4_ - ((int)fVar41 + 2 >> 0x1f)) + 1 >> 1;
    uVar19 = (ulong)uVar36;
    uVar36 = (int)uStack_e8._4_4_ + uVar36 + 9 & 0xfffffff8;
    if ((uint)uStack_e8 != uVar36) {
      if ((int)uVar36 < 1) {
        free(local_f0);
        local_f0 = (double *)0x0;
        uVar19 = extraout_RDX_05;
      }
      else {
        local_f0 = realloc(local_f0,(ulong)uVar36 << 4);
        uVar19 = extraout_RDX_03;
      }
    }
    uStack_e8._0_4_ = uVar36;
  }
  iVar21 = (int)uStack_e8._4_4_ - (int)(float)uVar10;
  if ((uint)uStack_e8._4_4_ < (uint)(float)uVar10 || iVar21 == 0) {
    pdVar20 = local_f0 + (long)(int)uStack_e8._4_4_ * 2;
  }
  else {
    uVar10 = uVar10 & 0xffffffff;
    memmove(local_f0 + uVar10 * 2 + 2,local_f0 + uVar10 * 2,(long)iVar21 << 4);
    pdVar20 = local_f0 + uVar10 * 2;
    uVar19 = extraout_RDX_06;
  }
  goto LAB_002b2a81;
  while( true ) {
    pdVar25 = (double *)((long)pdVar25 + 1);
    pdVar11 = pdVar11 + 2;
    if (pdVar20 == pdVar25) break;
LAB_002b29c3:
    if (_DAT_005d9000 < *pdVar11) goto LAB_002b29dc;
  }
  pdVar25 = (double *)(ulong)(uint)uStack_e8._4_4_;
LAB_002b29dc:
  fVar41 = SUB84(pdVar25,0);
LAB_002b29e1:
  if ((int)(uint)uStack_e8 <= (int)uStack_e8._4_4_) {
    uVar36 = ((int)uStack_e8._4_4_ - ((int)uStack_e8._4_4_ + 1 >> 0x1f)) + 1 >> 1;
    uVar19 = (ulong)uVar36;
    uVar36 = (int)uStack_e8._4_4_ + uVar36 + 9 & 0xfffffff8;
    if ((uint)uStack_e8 != uVar36) {
      if ((int)uVar36 < 1) {
        free(local_f0);
        local_f0 = (double *)0x0;
        uVar19 = extraout_RDX_09;
      }
      else {
        local_f0 = realloc(local_f0,(ulong)uVar36 << 4);
        uVar19 = extraout_RDX_08;
      }
    }
    uStack_e8._0_4_ = uVar36;
  }
  if ((uint)uStack_e8._4_4_ < (uint)fVar41 || (int)uStack_e8._4_4_ - (int)fVar41 == 0) {
    pdVar20 = local_f0 + (long)(int)uStack_e8._4_4_ * 2;
  }
  else {
    uVar19 = (ulong)(uint)fVar41;
    memmove(local_f0 + uVar19 * 2 + 2,local_f0 + uVar19 * 2,
            (long)((int)uStack_e8._4_4_ - (int)fVar41) << 4);
    pdVar20 = local_f0 + uVar19 * 2;
    uVar19 = extraout_RDX_10;
  }
LAB_002b2a81:
  *pdVar20 = 1.0;
  *(undefined4 *)(pdVar20 + 1) = uVar44;
  uStack_e8._4_4_ = (float)((int)uStack_e8._4_4_ + 1);
  pdVar20 = (double *)(ulong)(uint)uStack_e8._4_4_;
LAB_002b2a9d:
  auVar9 = _DAT_005dd250;
  iVar8 = _UNK_005dd24c;
  iVar7 = _UNK_005dd248;
  iVar6 = _UNK_005dd244;
  iVar21 = _DAT_005dd240;
  dVar5 = _UNK_005d9a98;
  dVar4 = _DAT_005d9a90;
  local_70 = (ulong *)CONCAT44(local_70._4_4_,DAT_005d9038);
  dVar42 = (double)(ulong)(uint)local_118._0_4_;
  if ((float)local_118._0_4_ < DAT_005d9038) {
    iVar18 = (int)pdVar20;
    dVar42 = (double)(ulong)(uint)local_118._0_4_;
    if (iVar18 != 0) {
      uVar19 = (long)iVar18 - 1U & 0xfffffffffffffff;
      pdVar20 = local_f0;
      if (3 < uVar19) {
        lVar29 = uVar19 + 1;
        uVar10 = (ulong)((uint)lVar29 & 3);
        uVar19 = 4;
        if (uVar10 != 0) {
          uVar19 = uVar10;
        }
        lVar29 = lVar29 - uVar19;
        pdVar20 = local_f0 + 7;
        lVar34 = lVar29;
        do {
          auVar45._12_4_ = *(uint *)pdVar20;
          auVar45._8_4_ = *(uint *)(pdVar20 + -2);
          auVar45._4_4_ = *(uint *)(pdVar20 + -4);
          auVar45._0_4_ = *(uint *)(pdVar20 + -6);
          uVar36 = SUB84((double)((float)(*(uint *)(pdVar20 + -2) >> 0x18) * (float)local_118._0_4_)
                         + dVar4,0);
          uVar48 = SUB84((double)((float)(*(uint *)pdVar20 >> 0x18) * (float)local_118._0_4_) +
                         dVar5,0);
          uVar51 = SUB84((double)((float)(*(uint *)(pdVar20 + -6) >> 0x18) * (float)local_118._0_4_)
                         + dVar4,0);
          uVar54 = SUB84((double)((float)(*(uint *)(pdVar20 + -4) >> 0x18) * (float)local_118._0_4_)
                         + dVar5,0);
          uVar23 = -(uint)((int)uVar51 < iVar21);
          uVar47 = -(uint)((int)uVar54 < iVar6);
          uVar49 = -(uint)((int)uVar36 < iVar7);
          uVar50 = -(uint)((int)uVar48 < iVar8);
          auVar46._0_4_ = (uVar23 ^ 0xffffffff | uVar51 & uVar23) << 0x18;
          auVar46._4_4_ = (uVar47 ^ 0xffffffff | uVar54 & uVar47) << 0x18;
          auVar46._8_4_ = (uVar49 ^ 0xffffffff | uVar36 & uVar49) << 0x18;
          auVar46._12_4_ = (uVar50 ^ 0xffffffff | uVar48 & uVar50) << 0x18;
          auVar46 = auVar45 & auVar9 | auVar46;
          *(int *)(pdVar20 + -6) = auVar46._0_4_;
          *(int *)(pdVar20 + -4) = auVar46._4_4_;
          *(int *)(pdVar20 + -2) = auVar46._8_4_;
          *(int *)pdVar20 = auVar46._12_4_;
          pdVar20 = pdVar20 + 8;
          lVar34 = lVar34 + -4;
        } while (lVar34 != 0);
        pdVar20 = local_f0 + lVar29 * 2;
      }
      dVar4 = DAT_005d9098;
      uVar19 = 0xff;
      local_118._4_4_ = 0;
      do {
        dVar42 = (double)((float)*(byte *)((long)pdVar20 + 0xb) * (float)local_118._0_4_) + dVar4;
        uVar31 = SUB81(dVar42,0);
        if (0xfe < SUB84(dVar42,0)) {
          uVar31 = 0xff;
        }
        *(undefined1 *)((long)pdVar20 + 0xb) = uVar31;
        pdVar20 = pdVar20 + 2;
        param_3 = local_118._0_8_;
      } while (pdVar20 != local_f0 + (long)iVar18 * 2);
    }
  }
                    /* try { // try from 002b2c1a to 002b2c25 has its CatchHandler @ 002b3d21 */
  uVar19 = XmlElement::hasTagNameIgnoringNamespace
                     (local_b8,(byte *)"radialGradient",uVar19,pdVar20,param_8,(uint)param_9);
  local_f8 = (char)uVar19;
  fVar41 = *(float *)(pSVar12 + 0x20);
  fVar43 = *(float *)(pSVar12 + 0x24);
  for (puVar26 = *(undefined8 **)(local_b8 + 0x10); puVar26 != (undefined8 *)0x0;
      puVar26 = (undefined8 *)*puVar26) {
    uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       ((byte *)puVar26[1],(byte *)"gradientUnits");
    if (uVar36 == 0) {
      puVar26 = puVar26 + 2;
      goto LAB_002b2ccc;
    }
  }
  puVar26 = &getEmptyStringRef()::empty;
  if (getEmptyStringRef()::empty == '\0') {
    iVar21 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
    if (iVar21 != 0) {
      getEmptyStringRef()::empty = &DAT_0061ac58;
      puVar26 = &getEmptyStringRef()::empty;
      __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
      __cxa_guard_release(&getEmptyStringRef()::empty);
    }
  }
LAB_002b2ccc:
  uVar36 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     ((byte *)*puVar26,(byte *)"userSpaceOnUse");
  pXVar37 = local_b8;
  if (uVar36 == 0) {
    if (local_f8 == '\0') {
                    /* try { // try from 002b2e7f to 002b2e88 has its CatchHandler @ 002b3c55 */
      pSVar12 = operator_new__(0x1b);
      LOCK();
      *(int *)pSVar12 = 0;
      UNLOCK();
      *(undefined8 *)(pSVar12 + 8) = 4;
      *(undefined2 *)(pSVar12 + 0x10) = 0x2530;
      pSVar12[0x12] = (SVGState)0x0;
      for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
          puVar26 = (undefined8 *)*puVar26) {
        uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar26[1],(byte *)0x5dbe9d);
        if (uVar36 == 0) {
          local_d8 = (SVGState *)puVar26[2];
          pSVar13 = local_d8 + -0x10;
          if (pSVar13 != (SVGState *)&emptyString) goto LAB_002b381c;
          goto LAB_002b3820;
        }
      }
      local_d8 = pSVar12 + 0x10;
      pSVar13 = pSVar12;
LAB_002b381c:
      LOCK();
      *(int *)pSVar13 = *(int *)pSVar13 + 1;
      UNLOCK();
LAB_002b3820:
      uVar19 = getCoordLength(fVar41,dVar42,param_3,(String *)&local_d8);
      pXVar37 = local_b8;
      local_88._0_4_ = (float)uVar19;
                    /* try { // try from 002b383d to 002b3846 has its CatchHandler @ 002b3c53 */
      piVar24 = operator_new__(0x1b);
      uVar44 = 0;
      fVar27 = (float)local_88._0_4_ + 0.0;
      local_88._0_4_ = fVar27;
      LOCK();
      *piVar24 = 0;
      UNLOCK();
      piVar24[2] = 4;
      piVar24[3] = 0;
      *(undefined2 *)(piVar24 + 4) = 0x2530;
      *(undefined1 *)((long)piVar24 + 0x12) = 0;
      for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
          puVar26 = (undefined8 *)*puVar26) {
        uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar26[1],&DAT_005e3adb);
        if (uVar36 == 0) {
          local_a8 = (SVGState *)puVar26[2];
          piVar16 = (int *)((long)local_a8 + -0x10);
          if (piVar16 != &emptyString) goto LAB_002b38ce;
          goto LAB_002b38da;
        }
      }
      local_a8 = (SVGState *)(piVar24 + 4);
      piVar16 = piVar24;
LAB_002b38ce:
      LOCK();
      *piVar16 = *piVar16 + 1;
      UNLOCK();
LAB_002b38da:
      piVar16 = (int *)local_a8;
      uVar19 = getCoordLength(fVar43,CONCAT44(uVar44,fVar27),param_3,(String *)&local_a8);
      uVar44 = 0;
      fVar27 = (float)uVar19 + 0.0;
      local_108 = CONCAT44(fVar27,local_88._0_4_);
      piVar16 = piVar16 + -4;
      if (piVar16 != &emptyString) {
        LOCK();
        iVar21 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar21 == 0) {
          operator_delete__(piVar16);
        }
      }
      LOCK();
      iVar21 = *piVar24;
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(piVar24);
      }
      pSVar13 = local_d8 + -0x10;
      if (pSVar13 != (SVGState *)&emptyString) {
        LOCK();
        iVar21 = *(int *)pSVar13;
        *(int *)pSVar13 = *(int *)pSVar13 + -1;
        UNLOCK();
        if (iVar21 == 0) {
          operator_delete__(pSVar13);
        }
      }
      LOCK();
      iVar21 = *(int *)pSVar12;
      *(int *)pSVar12 = *(int *)pSVar12 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(pSVar12);
      }
      pXVar37 = local_b8;
                    /* try { // try from 002b3978 to 002b3981 has its CatchHandler @ 002b3c4e */
      pSVar12 = operator_new__(0x1f);
      LOCK();
      *(int *)pSVar12 = 0;
      UNLOCK();
      *(undefined8 *)(pSVar12 + 8) = 8;
      *(int *)(pSVar12 + 0x10) = 0x25303031;
      pSVar12[0x14] = (SVGState)0x0;
      for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
          puVar26 = (undefined8 *)*puVar26) {
        uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar26[1],&DAT_005e3ade);
        if (uVar36 == 0) {
          local_d8 = (SVGState *)puVar26[2];
          pSVar13 = local_d8 + -0x10;
          if (pSVar13 != (SVGState *)&emptyString) goto LAB_002b39eb;
          goto LAB_002b39ef;
        }
      }
      local_d8 = pSVar12 + 0x10;
      pSVar13 = pSVar12;
LAB_002b39eb:
      LOCK();
      *(int *)pSVar13 = *(int *)pSVar13 + 1;
      UNLOCK();
LAB_002b39ef:
      uVar19 = getCoordLength(fVar41,CONCAT44(uVar44,fVar27),param_3,(String *)&local_d8);
      pXVar37 = local_b8;
                    /* try { // try from 002b3a09 to 002b3a12 has its CatchHandler @ 002b3c4c */
      pSVar13 = operator_new__(0x1b);
      uVar44 = 0;
      fVar27 = (float)uVar19 + 0.0;
      LOCK();
      *(int *)pSVar13 = 0;
      UNLOCK();
      *(undefined8 *)(pSVar13 + 8) = 4;
      *(undefined2 *)(pSVar13 + 0x10) = 0x2530;
      pSVar13[0x12] = (SVGState)0x0;
      fVar41 = fVar27;
      for (plVar30 = *(long **)(pXVar37 + 0x10); plVar30 != (long *)0x0; plVar30 = (long *)*plVar30)
      {
        uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)plVar30[1],&DAT_005e3ae1);
        if (uVar36 == 0) {
          local_a8 = (SVGState *)plVar30[2];
          pSVar17 = local_a8 + -0x10;
          if (pSVar17 != (SVGState *)&emptyString) goto LAB_002b3a94;
          goto LAB_002b3aa0;
        }
      }
      local_a8 = pSVar13 + 0x10;
      pSVar17 = pSVar13;
LAB_002b3a94:
      LOCK();
      *(int *)pSVar17 = *(int *)pSVar17 + 1;
      UNLOCK();
LAB_002b3aa0:
      pSVar17 = local_a8;
      uVar19 = getCoordLength(fVar43,CONCAT44(uVar44,fVar41),param_3,(String *)&local_a8);
      fVar41 = (float)uVar19 + 0.0;
      goto LAB_002b3ac0;
    }
                    /* try { // try from 002b2dab to 002b2db4 has its CatchHandler @ 002b3c6a */
    pSVar12 = operator_new__(0x1b);
    LOCK();
    *(int *)pSVar12 = 0;
    UNLOCK();
    *(undefined8 *)(pSVar12 + 8) = 4;
    *(int *)(pSVar12 + 0x10) = 0x253035;
    for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
        puVar26 = (undefined8 *)*puVar26) {
      uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar26[1],&DAT_005e3ad5);
      if (uVar36 == 0) {
        local_d8 = (SVGState *)puVar26[2];
        pSVar13 = local_d8 + -0x10;
        if (pSVar13 != (SVGState *)&emptyString) goto LAB_002b2ffb;
        goto LAB_002b2fff;
      }
    }
    local_d8 = pSVar12 + 0x10;
    pSVar13 = pSVar12;
LAB_002b2ffb:
    LOCK();
    *(int *)pSVar13 = *(int *)pSVar13 + 1;
    UNLOCK();
LAB_002b2fff:
    uVar19 = getCoordLength(fVar41,dVar42,param_3,(String *)&local_d8);
    pXVar37 = local_b8;
    local_88._0_4_ = (float)uVar19;
                    /* try { // try from 002b301c to 002b3025 has its CatchHandler @ 002b3c63 */
    pSVar13 = operator_new__(0x1b);
    uVar44 = 0;
    fVar27 = (float)local_88._0_4_ + 0.0;
    local_88._0_4_ = fVar27;
    LOCK();
    *(int *)pSVar13 = 0;
    UNLOCK();
    *(undefined8 *)(pSVar13 + 8) = 4;
    *(int *)(pSVar13 + 0x10) = 0x253035;
    for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
        puVar26 = (undefined8 *)*puVar26) {
      uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar26[1],&DAT_005e3ad8);
      if (uVar36 == 0) {
        local_a8 = (SVGState *)puVar26[2];
        pSVar17 = local_a8 + -0x10;
        if (pSVar17 != (SVGState *)&emptyString) goto LAB_002b3168;
        goto LAB_002b3174;
      }
    }
    local_a8 = pSVar13 + 0x10;
    pSVar17 = pSVar13;
LAB_002b3168:
    LOCK();
    *(int *)pSVar17 = *(int *)pSVar17 + 1;
    UNLOCK();
LAB_002b3174:
    pSVar17 = local_a8;
    uVar19 = getCoordLength(fVar43,CONCAT44(uVar44,fVar27),param_3,(String *)&local_a8);
    fVar27 = 0.0;
    fVar43 = (float)uVar19 + 0.0;
    fVar38 = (float)local_88._0_4_;
LAB_002b3197:
    local_108 = CONCAT44(fVar43,fVar38);
    pSVar17 = pSVar17 + -0x10;
    if (pSVar17 != (SVGState *)&emptyString) {
      LOCK();
      iVar21 = *(int *)pSVar17;
      *(int *)pSVar17 = *(int *)pSVar17 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(pSVar17);
      }
    }
    LOCK();
    iVar21 = *(int *)pSVar13;
    *(int *)pSVar13 = *(int *)pSVar13 + -1;
    UNLOCK();
    if (iVar21 == 0) {
      operator_delete__(pSVar13);
    }
    pSVar13 = local_d8 + -0x10;
    if (pSVar13 != (SVGState *)&emptyString) {
      LOCK();
      iVar21 = *(int *)pSVar13;
      *(int *)pSVar13 = *(int *)pSVar13 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(pSVar13);
      }
    }
    LOCK();
    iVar21 = *(int *)pSVar12;
    *(int *)pSVar12 = *(int *)pSVar12 + -1;
    UNLOCK();
    if (iVar21 == 0) {
      operator_delete__(pSVar12);
    }
    pXVar37 = local_b8;
                    /* try { // try from 002b3212 to 002b321b has its CatchHandler @ 002b3cb0 */
    pSVar12 = operator_new__(0x1b);
    LOCK();
    *(int *)pSVar12 = 0;
    UNLOCK();
    *(undefined8 *)(pSVar12 + 8) = 4;
    *(int *)(pSVar12 + 0x10) = 0x253035;
    for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
        puVar26 = (undefined8 *)*puVar26) {
      uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar26[1],(byte *)0x655291);
      if (uVar36 == 0) {
        local_d8 = (SVGState *)puVar26[2];
        pSVar13 = local_d8 + -0x10;
        if (pSVar13 != (SVGState *)&emptyString) goto LAB_002b327f;
        goto LAB_002b3288;
      }
    }
    local_d8 = pSVar12 + 0x10;
    pSVar13 = pSVar12;
LAB_002b327f:
    LOCK();
    *(int *)pSVar13 = *(int *)pSVar13 + 1;
    UNLOCK();
LAB_002b3288:
    pSVar13 = local_d8;
    uVar19 = getCoordLength(fVar41,CONCAT44(fVar27,fVar43),param_3,(String *)&local_d8);
    pSVar13 = pSVar13 + -0x10;
    if (pSVar13 != (SVGState *)&emptyString) {
      LOCK();
      iVar21 = *(int *)pSVar13;
      *(int *)pSVar13 = *(int *)pSVar13 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(pSVar13);
      }
    }
    LOCK();
    iVar21 = *(int *)pSVar12;
    *(int *)pSVar12 = *(int *)pSVar12 + -1;
    UNLOCK();
    local_118._0_4_ = SUB84(uVar19,0);
    if (iVar21 == 0) {
      operator_delete__(pSVar12);
    }
    local_118._0_4_ = (float)local_118._0_4_ + (float)local_108;
    fVar41 = (float)(local_108 >> 0x20) + 0.0;
    uStack_100 = CONCAT44(fVar41,local_118._0_4_);
    param_3 = local_108;
LAB_002b32f5:
                    /* try { // try from 002b32f5 to 002b32fe has its CatchHandler @ 002b3d1d */
    pfVar14 = operator_new(0x28);
    fVar43 = uStack_e8._4_4_;
    pdVar11 = local_f0;
    *(ulong *)pfVar14 = local_108;
    *(undefined8 *)(pfVar14 + 2) = uStack_100;
    *(char *)(pfVar14 + 4) = local_f8;
    uVar44 = 0;
    uVar40 = 0;
    pfVar14[6] = 0.0;
    pfVar14[7] = 0.0;
    pfVar14[8] = 0.0;
    pfVar14[9] = 0.0;
    uVar19 = (ulong)(uint)uStack_e8._4_4_;
    uVar22 = extraout_RDX_11;
    if (0 < (int)uStack_e8._4_4_) {
      fVar27 = (float)((int)uStack_e8._4_4_ + ((uint)uStack_e8._4_4_ >> 1) + 8 & 0xfffffff8);
      if ((int)fVar27 < 1) {
        pvVar15 = (void *)0x0;
      }
      else {
        pvVar15 = malloc((ulong)(uint)fVar27 << 4);
        *(void **)(pfVar14 + 6) = pvVar15;
      }
      pfVar14[8] = fVar27;
      memcpy(pvVar15,pdVar11,uVar19 << 4);
      uVar22 = extraout_RDX_12;
      uVar44 = extraout_XMM0_Da_03;
      uVar40 = extraout_XMM0_Db_03;
    }
    pfVar14[9] = fVar43;
    for (puVar26 = *(undefined8 **)(local_b8 + 0x10); puVar26 != (undefined8 *)0x0;
        puVar26 = (undefined8 *)*puVar26) {
      uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar26[1],(byte *)"gradientTransform");
      uVar39 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
      uVar22 = extraout_RDX_13;
      if (uVar36 == 0) {
        plVar30 = puVar26 + 2;
        goto LAB_002b33ff;
      }
      uVar44 = extraout_XMM0_Da_04;
      uVar40 = extraout_XMM0_Db_04;
    }
    uVar39 = CONCAT44(uVar40,uVar44);
    plVar30 = (long *)&getEmptyStringRef()::empty;
    if (getEmptyStringRef()::empty == '\0') {
      iVar21 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
      uVar39 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
      uVar22 = extraout_RDX_14;
      if (iVar21 != 0) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        plVar30 = (long *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        uVar39 = __cxa_guard_release(&getEmptyStringRef()::empty);
        uVar22 = extraout_RDX_15;
      }
    }
LAB_002b33ff:
    local_60 = *plVar30;
    piVar24 = (int *)(local_60 + -0x10);
    if (piVar24 != &emptyString) {
      LOCK();
      *piVar24 = *piVar24 + 1;
      UNLOCK();
    }
                    /* try { // try from 002b3418 to 002b3429 has its CatchHandler @ 002b3cdc */
    parseTransform(uVar39,CONCAT44(fVar41,local_118._0_4_),param_3,(float *)&local_d8,&local_60,
                   uVar22,(char *)pdVar20,param_8,param_9);
    piVar24 = (int *)(local_60 + -0x10);
    puVar26 = uStack_d0;
    if (piVar24 != &emptyString) {
      LOCK();
      iVar21 = *piVar24;
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(piVar24);
        puVar26 = uStack_d0;
      }
    }
    uStack_d0._4_4_ = (float)((ulong)puVar26 >> 0x20);
    uStack_d0._0_4_ = SUB84(puVar26,0);
    uStack_d0 = puVar26;
    if (local_f8 == '\0') {
      uStack_9c = CONCAT44(fStack_c8,uStack_d0._4_4_);
      local_a8 = local_d8;
      pSVar12 = local_a8;
      uStack_a0 = 0;
      uStack_94 = 0;
      local_a8._0_4_ = SUB84(local_d8,0);
      local_a8._4_4_ = (float)((ulong)local_d8 >> 0x20);
      fVar52 = (uStack_100._4_4_ - local_108._4_4_) * (float)local_a8 +
               local_a8._4_4_ * ((float)local_108 - (float)uStack_100) + 0.0;
      fVar53 = (uStack_100._4_4_ - local_108._4_4_) * uStack_d0._4_4_ +
               fStack_c8 * ((float)local_108 - (float)uStack_100) + 0.0;
      fVar41 = (float)local_108 * (float)local_a8 + local_108._4_4_ * local_a8._4_4_ +
               (float)uStack_d0;
      fVar43 = (float)local_108 * uStack_d0._4_4_ + local_108._4_4_ * fStack_c8 + fStack_c4;
      fVar27 = (float)uStack_100 * (float)local_a8 + uStack_100._4_4_ * local_a8._4_4_ +
               (float)uStack_d0;
      fStack_c4 = (float)uStack_100 * uStack_d0._4_4_ + uStack_100._4_4_ * fStack_c8 + fStack_c4;
      fVar38 = ((fVar27 - fVar41) * fVar52 + fVar53 * (fStack_c4 - fVar43)) /
               (fVar52 * fVar52 + fVar53 * fVar53);
      *pfVar14 = fVar41;
      pfVar14[1] = fVar43;
      pfVar14[2] = fVar27 - fVar38 * fVar52;
      pfVar14[3] = fStack_c4 - fVar38 * fVar53;
      fVar41 = 0.0;
      local_118 = ZEXT416((uint)DAT_005d9038);
      uVar44 = 0xff000000;
      local_a8 = pSVar12;
    }
    else {
      local_118._8_8_ = puVar26;
      local_118._0_8_ = local_d8;
      local_70 = (ulong *)CONCAT44(local_70._4_4_,fStack_c8);
      uVar44 = 0xff000000;
      fVar41 = fStack_c4;
    }
  }
  else {
    param_3 = *(ulong *)(lVar35 + 0x10);
    local_88 = ZEXT416((uint)*(float *)(lVar35 + 0x18));
    uStack_50 = 0;
    fVar41 = (float)(param_3 >> 0x20) - (float)param_3;
    fVar43 = *(float *)(lVar35 + 0x1c) - *(float *)(lVar35 + 0x18);
    local_58 = param_3;
    local_48 = fVar43;
    fStack_44 = fVar43;
    fStack_40 = fVar43;
    fStack_3c = fVar43;
    if (local_f8 != '\0') {
      fVar27 = fVar43;
                    /* try { // try from 002b2d38 to 002b2d41 has its CatchHandler @ 002b3cae */
      pSVar12 = operator_new__(0x1b);
      LOCK();
      *(int *)pSVar12 = 0;
      UNLOCK();
      *(undefined8 *)(pSVar12 + 8) = 4;
      *(int *)(pSVar12 + 0x10) = 0x253035;
      for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
          puVar26 = (undefined8 *)*puVar26) {
        uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar26[1],&DAT_005e3ad5);
        if (uVar36 == 0) {
          local_d8 = (SVGState *)puVar26[2];
          pSVar13 = local_d8 + -0x10;
          if (pSVar13 != (SVGState *)&emptyString) goto LAB_002b2ef8;
          goto LAB_002b2efc;
        }
      }
      local_d8 = pSVar12 + 0x10;
      pSVar13 = pSVar12;
LAB_002b2ef8:
      LOCK();
      *(int *)pSVar13 = *(int *)pSVar13 + 1;
      UNLOCK();
LAB_002b2efc:
      uVar19 = getCoordLength(DAT_005d9038,CONCAT44(fVar27,fVar43),param_3,(String *)&local_d8);
      pXVar37 = local_b8;
                    /* try { // try from 002b2f19 to 002b2f22 has its CatchHandler @ 002b3c6f */
      pSVar13 = operator_new__(0x1b);
      fVar38 = (float)uVar19 * fVar41 + (float)local_58;
      LOCK();
      *(int *)pSVar13 = 0;
      UNLOCK();
      *(undefined8 *)(pSVar13 + 8) = 4;
      *(int *)(pSVar13 + 0x10) = 0x253035;
      for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
          puVar26 = (undefined8 *)*puVar26) {
        uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar26[1],&DAT_005e3ad8);
        if (uVar36 == 0) {
          local_a8 = (SVGState *)puVar26[2];
          pSVar17 = local_a8 + -0x10;
          if (pSVar17 != (SVGState *)&emptyString) goto LAB_002b2fa8;
          goto LAB_002b2fb4;
        }
      }
      local_a8 = pSVar13 + 0x10;
      pSVar17 = pSVar13;
LAB_002b2fa8:
      LOCK();
      *(int *)pSVar17 = *(int *)pSVar17 + 1;
      UNLOCK();
LAB_002b2fb4:
      pSVar17 = local_a8;
      uVar19 = getCoordLength(DAT_005d9038,CONCAT44(fVar27,fVar43),param_3,(String *)&local_a8);
      fVar43 = local_48 * (float)uVar19 + (float)local_88._0_4_;
      fVar27 = fStack_44;
      goto LAB_002b3197;
    }
    fVar27 = fVar43;
                    /* try { // try from 002b2e13 to 002b2e1c has its CatchHandler @ 002b3c65 */
    pSVar12 = operator_new__(0x1b);
    LOCK();
    *(int *)pSVar12 = 0;
    UNLOCK();
    *(undefined8 *)(pSVar12 + 8) = 4;
    *(undefined2 *)(pSVar12 + 0x10) = 0x2530;
    pSVar12[0x12] = (SVGState)0x0;
    for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
        puVar26 = (undefined8 *)*puVar26) {
      uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar26[1],(byte *)0x5dbe9d);
      if (uVar36 == 0) {
        local_d8 = (SVGState *)puVar26[2];
        pSVar13 = local_d8 + -0x10;
        if (pSVar13 != (SVGState *)&emptyString) goto LAB_002b30ad;
        goto LAB_002b30b1;
      }
    }
    local_d8 = pSVar12 + 0x10;
    pSVar13 = pSVar12;
LAB_002b30ad:
    LOCK();
    *(int *)pSVar13 = *(int *)pSVar13 + 1;
    UNLOCK();
LAB_002b30b1:
    uVar19 = getCoordLength(DAT_005d9038,CONCAT44(fVar27,fVar43),param_3,(String *)&local_d8);
    pXVar37 = local_b8;
                    /* try { // try from 002b30ce to 002b30d7 has its CatchHandler @ 002b3c61 */
    piVar24 = operator_new__(0x1b);
    fVar38 = (float)uVar19 * fVar41 + (float)local_58;
    LOCK();
    *piVar24 = 0;
    UNLOCK();
    piVar24[2] = 4;
    piVar24[3] = 0;
    *(undefined2 *)(piVar24 + 4) = 0x2530;
    *(undefined1 *)((long)piVar24 + 0x12) = 0;
    for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
        puVar26 = (undefined8 *)*puVar26) {
      uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar26[1],&DAT_005e3adb);
      if (uVar36 == 0) {
        local_a8 = (SVGState *)puVar26[2];
        piVar16 = (int *)((long)local_a8 + -0x10);
        if (piVar16 != &emptyString) goto LAB_002b35ee;
        goto LAB_002b35fa;
      }
    }
    local_a8 = (SVGState *)(piVar24 + 4);
    piVar16 = piVar24;
LAB_002b35ee:
    LOCK();
    *piVar16 = *piVar16 + 1;
    UNLOCK();
LAB_002b35fa:
    piVar16 = (int *)local_a8;
    uVar19 = getCoordLength(DAT_005d9038,CONCAT44(fVar27,fVar43),param_3,(String *)&local_a8);
    uVar44 = 0;
    local_108 = CONCAT44((float)uVar19 * local_48 + (float)local_88._0_4_,fVar38);
    piVar16 = piVar16 + -4;
    if (piVar16 != &emptyString) {
      LOCK();
      iVar21 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(piVar16);
      }
    }
    LOCK();
    iVar21 = *piVar24;
    *piVar24 = *piVar24 + -1;
    UNLOCK();
    if (iVar21 == 0) {
      operator_delete__(piVar24);
    }
    pSVar13 = local_d8 + -0x10;
    if (pSVar13 != (SVGState *)&emptyString) {
      LOCK();
      iVar21 = *(int *)pSVar13;
      *(int *)pSVar13 = *(int *)pSVar13 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(pSVar13);
      }
    }
    LOCK();
    iVar21 = *(int *)pSVar12;
    *(int *)pSVar12 = *(int *)pSVar12 + -1;
    UNLOCK();
    if (iVar21 == 0) {
      operator_delete__(pSVar12);
    }
    pXVar37 = local_b8;
                    /* try { // try from 002b36a2 to 002b36ab has its CatchHandler @ 002b3c5c */
    pSVar12 = operator_new__(0x1f);
    LOCK();
    *(int *)pSVar12 = 0;
    UNLOCK();
    *(undefined8 *)(pSVar12 + 8) = 8;
    *(int *)(pSVar12 + 0x10) = 0x25303031;
    pSVar12[0x14] = (SVGState)0x0;
    for (puVar26 = *(undefined8 **)(pXVar37 + 0x10); puVar26 != (undefined8 *)0x0;
        puVar26 = (undefined8 *)*puVar26) {
      uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar26[1],&DAT_005e3ade);
      if (uVar36 == 0) {
        local_d8 = (SVGState *)puVar26[2];
        pSVar13 = local_d8 + -0x10;
        if (pSVar13 != (SVGState *)&emptyString) goto LAB_002b3715;
        goto LAB_002b3719;
      }
    }
    local_d8 = pSVar12 + 0x10;
    pSVar13 = pSVar12;
LAB_002b3715:
    LOCK();
    *(int *)pSVar13 = *(int *)pSVar13 + 1;
    UNLOCK();
LAB_002b3719:
    uVar19 = getCoordLength(DAT_005d9038,CONCAT44(uVar44,fVar38),param_3,(String *)&local_d8);
    pXVar37 = local_b8;
                    /* try { // try from 002b3736 to 002b373f has its CatchHandler @ 002b3c5a */
    pSVar13 = operator_new__(0x1b);
    fVar27 = (float)uVar19 * fVar41 + (float)local_58;
    LOCK();
    *(int *)pSVar13 = 0;
    UNLOCK();
    *(undefined8 *)(pSVar13 + 8) = 4;
    *(undefined2 *)(pSVar13 + 0x10) = 0x2530;
    pSVar13[0x12] = (SVGState)0x0;
    for (plVar30 = *(long **)(pXVar37 + 0x10); plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
      uVar36 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)plVar30[1],&DAT_005e3ae1);
      if (uVar36 == 0) {
        local_a8 = (SVGState *)plVar30[2];
        pSVar17 = local_a8 + -0x10;
        if (pSVar17 != (SVGState *)&emptyString) goto LAB_002b37c9;
        goto LAB_002b37d5;
      }
    }
    local_a8 = pSVar13 + 0x10;
    pSVar17 = pSVar13;
LAB_002b37c9:
    LOCK();
    *(int *)pSVar17 = *(int *)pSVar17 + 1;
    UNLOCK();
LAB_002b37d5:
    pSVar17 = local_a8;
    uVar19 = getCoordLength(DAT_005d9038,CONCAT44(uVar44,fVar38),param_3,(String *)&local_a8);
    fVar41 = local_48 * (float)uVar19 + (float)local_88._0_4_;
LAB_002b3ac0:
    uStack_100 = CONCAT44(fVar41,fVar27);
    pSVar17 = pSVar17 + -0x10;
    if (pSVar17 != (SVGState *)&emptyString) {
      LOCK();
      iVar21 = *(int *)pSVar17;
      *(int *)pSVar17 = *(int *)pSVar17 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(pSVar17);
      }
    }
    LOCK();
    iVar21 = *(int *)pSVar13;
    *(int *)pSVar13 = *(int *)pSVar13 + -1;
    UNLOCK();
    if (iVar21 == 0) {
      operator_delete__(pSVar13);
    }
    pSVar13 = local_d8 + -0x10;
    if (pSVar13 != (SVGState *)&emptyString) {
      LOCK();
      iVar21 = *(int *)pSVar13;
      *(int *)pSVar13 = *(int *)pSVar13 + -1;
      UNLOCK();
      if (iVar21 == 0) {
        operator_delete__(pSVar13);
      }
    }
    LOCK();
    iVar21 = *(int *)pSVar12;
    *(int *)pSVar12 = *(int *)pSVar12 + -1;
    UNLOCK();
    if (iVar21 == 0) {
      operator_delete__(pSVar12);
    }
    fVar43 = (float)((ulong)uStack_100 >> 0x20);
    fVar41 = 0.0;
    local_118._0_4_ = (float)local_108;
    if (((float)local_108 != (float)uStack_100) || (NAN((float)local_108) || NAN((float)uStack_100))
       ) goto LAB_002b32f5;
    fVar41 = 0.0;
    local_118._0_4_ = local_108._4_4_;
    if ((local_108._4_4_ != fVar43) || (NAN(local_108._4_4_) || NAN(fVar43))) goto LAB_002b32f5;
    local_118 = ZEXT416((uint)DAT_005d9038);
    local_70 = (ulong *)CONCAT44(local_70._4_4_,DAT_005d9038);
    fVar41 = 0.0;
    if ((long)(int)uStack_e8._4_4_ == 0) {
      pfVar14 = (float *)0x0;
      uVar44 = 0;
    }
    else {
      uVar44 = *(undefined4 *)(local_f0 + (long)(int)uStack_e8._4_4_ * 2 + -1);
      pfVar14 = (float *)0x0;
    }
  }
  uStack_e8 = (ulong)(uint)uStack_e8;
  free(local_f0);
  *(undefined4 *)(local_68 + 3) = uVar44;
  pvVar15 = (void *)local_68[4];
  local_68[4] = pfVar14;
  if (pvVar15 != (void *)0x0) {
    *(undefined4 *)((long)pvVar15 + 0x24) = 0;
    free(*(void **)((long)pvVar15 + 0x18));
    operator_delete(pvVar15);
  }
  plVar2 = (long *)local_68[5];
  local_68[5] = 0;
  local_68[6] = local_118._0_8_;
  local_68[7] = local_118._8_8_;
  *(undefined4 *)(local_68 + 8) = local_70._0_4_;
  *(float *)((long)local_68 + 0x44) = fVar41;
  uVar19 = CONCAT71((int7)((ulong)plVar30 >> 8),1);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar30 = plVar2 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
LAB_002b27a4:
  return uVar19 & 0xffffffff;
}



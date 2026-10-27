// Function : drawDocumentWindowTitleBar
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f68c0
// Prototype: undefined drawDocumentWindowTitleBar(LookAndFeel_V4 * this, Component * param_1, Graphics * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_6_00, int param_6, long * param_7, char param_8)
// Body     : 001f68c0 - 001f70b6


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V4::drawDocumentWindowTitleBar(juce::DocumentWindow&, juce::Graphics&, int,
   int, int, int, juce::Image const*, bool) */

void __thiscall
juce::LookAndFeel_V4::drawDocumentWindowTitleBar
          (LookAndFeel_V4 *this,Component *param_1,Graphics *param_2,undefined8 param_3,
          uint *param_4,undefined8 *param_6_00,int param_6,long *param_7,char param_8)

{
  long *plVar1;
  byte *pbVar2;
  SharedFontInternal *pSVar3;
  Graphics GVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  Component *pCVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar13;
  long *plVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  undefined1 uVar19;
  bool bVar20;
  float fVar21;
  undefined8 uVar22;
  int iVar23;
  float extraout_XMM1_Da;
  int iVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  SharedFontInternal *local_1a0;
  int local_194;
  Component *local_190;
  LookAndFeel_V4 *local_188;
  float local_17c;
  undefined1 *local_178;
  undefined8 uStack_170;
  undefined2 local_168;
  undefined2 uStack_166;
  float fStack_164;
  undefined2 local_160;
  undefined4 uStack_15e;
  undefined2 uStack_15a;
  long *plStack_158;
  undefined8 local_150;
  void *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 uStack_11a;
  undefined1 *local_110;
  undefined1 *local_108;
  long lStack_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_aa;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  iVar23 = (int)param_6_00;
  iVar15 = (int)param_4;
  iVar17 = (int)param_3;
  if (iVar15 * iVar17 == 0) {
    return;
  }
  Graphics::setColour(param_2,*(undefined4 *)(this + 0x160));
  (**(code **)(**(long **)(param_2 + 8) + 0xa8))();
  FontOptions::FontOptions((float)iVar15 * DAT_005de438,(FontOptions *)&local_98,0);
                    /* try { // try from 001f6937 to 001f6950 has its CatchHandler @ 001f7113 */
  uVar9 = (**(code **)(*(long *)this + 0x50))(this);
  FontOptions::FontOptions((FontOptions *)&local_178,&local_98);
  local_108 = local_178;
  local_178 = &DAT_0061ac58;
  lStack_100 = (long)uStack_170;
  uStack_170 = &DAT_0061ac58;
  local_f8 = (long *)CONCAT44(fStack_164,CONCAT22(uStack_166,local_168));
  local_168 = 0;
  uStack_166 = 0;
  fStack_164 = 0.0;
  local_f0 = (long *)CONCAT26(uStack_15a,CONCAT42(uStack_15e,local_160));
  plStack_e8 = plStack_158;
  local_e0 = local_150;
  local_160 = 0;
  uStack_15e = 0;
  uStack_15a = 0;
  plStack_158 = (long *)0x0;
  local_150 = 0;
  local_d8 = local_148;
  uStack_d0 = uStack_140;
  local_c8 = local_138;
  local_148 = (void *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_c0 = CONCAT44(uStack_12c,uVar9);
  uStack_aa = uStack_11a;
                    /* try { // try from 001f6a05 to 001f6a16 has its CatchHandler @ 001f70ff */
  local_130 = uVar9;
  Font::Font((Font *)&local_1a0,(long *)&local_108);
  local_194 = iVar15;
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
  }
  plVar1 = plStack_e8;
  plVar14 = local_f0;
  local_190 = param_1;
  if (local_f0 != plStack_e8) {
    do {
      piVar16 = (int *)(*plVar14 + -0x10);
      if (piVar16 != &emptyString) {
        LOCK();
        iVar15 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar15 == 0) {
          operator_delete__(piVar16);
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar1);
  }
  pCVar7 = local_190;
  if (local_f0 != (long *)0x0) {
    operator_delete(local_f0);
  }
  local_188 = this;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  piVar16 = (int *)(lStack_100 + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    iVar15 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar16);
    }
  }
  piVar16 = (int *)(local_108 + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    iVar15 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar16);
    }
  }
  plVar1 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar1 = local_80;
  }
  for (; plVar1 != local_78; plVar1 = plVar1 + 1) {
    piVar16 = (int *)(*plVar1 + -0x10);
    if (piVar16 != &emptyString) {
      LOCK();
      iVar15 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar15 == 0) {
        operator_delete__(piVar16);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  piVar16 = (int *)(local_90 + -0x10);
  if (piVar16 == &emptyString) {
LAB_001f6b74:
    piVar16 = (int *)(local_98 + -0x10);
    if (piVar16 != &emptyString) {
LAB_001f6b85:
      LOCK();
      iVar15 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar15 == 0) {
        operator_delete__(piVar16);
        GVar4 = param_2[0x10];
        goto joined_r0x001f6cd9;
      }
    }
  }
  else {
    LOCK();
    iVar15 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar15 != 0) goto LAB_001f6b74;
    operator_delete__(piVar16);
    piVar16 = (int *)(local_98 + -0x10);
    if (piVar16 != &emptyString) goto LAB_001f6b85;
  }
  GVar4 = param_2[0x10];
joined_r0x001f6cd9:
  if (GVar4 != (Graphics)0x0) {
    param_2[0x10] = (Graphics)0x0;
                    /* try { // try from 001f6ba9 to 001f6bbd has its CatchHandler @ 001f7111 */
    (**(code **)(**(long **)(param_2 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_2 + 8) + 0xf8))(*(long **)(param_2 + 8),&local_1a0);
  pbVar5 = *(byte **)(pCVar7 + 8);
  pbVar2 = pbVar5 + -0x10;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar2 = *(int *)pbVar2 + 1;
    UNLOCK();
  }
                    /* try { // try from 001f6bd0 to 001f6bd9 has its CatchHandler @ 001f70df */
  fVar21 = extraout_XMM1_Da;
  GlyphArrangement::getStringBounds
            (&local_1a0,pbVar5,extraout_RDX,param_3,param_4,(ulong)param_6_00);
  fVar21 = ceilf(fVar21);
  uVar22 = extraout_RDX_00;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    iVar15 = *(int *)pbVar2;
    *(int *)pbVar2 = *(int *)pbVar2 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(pbVar2);
      uVar22 = extraout_RDX_01;
    }
  }
  if (param_7 == (long *)0x0) {
    iVar18 = 0;
    iVar15 = 0;
  }
  else {
    fVar27 = *(float *)((long)local_1a0 + 100);
    if (fVar27 <= 0.0) {
      local_17c = *(float *)((long)local_1a0 + 0x68);
                    /* try { // try from 001f6c2d to 001f6c36 has its CatchHandler @ 001f70b7 */
      uVar22 = Font::SharedFontInternal::getAscentDescent
                         (local_1a0,(long *)&local_1a0,uVar22,param_3,param_4,(ulong)param_6_00);
      fVar27 = local_17c * ((float)((ulong)uVar22 >> 0x20) + (float)uVar22);
    }
    iVar15 = (int)fVar27;
    lVar13 = *param_7;
    if (lVar13 == 0) {
      iVar10 = 0;
      iVar18 = 0;
    }
    else {
      iVar10 = *(int *)(lVar13 + 0x10) * iVar15;
      iVar18 = *(int *)(lVar13 + 0x14);
    }
    iVar18 = iVar10 / iVar18 + 4;
  }
  iVar10 = (int)fVar21 + iVar18;
  if (param_6 <= (int)fVar21 + iVar18) {
    iVar10 = param_6;
  }
  iVar12 = iVar23;
  if ((param_8 == '\0') && (iVar12 = (iVar17 - iVar10) / 2, iVar12 <= iVar23)) {
    iVar12 = iVar23;
  }
  iVar17 = (param_6 + iVar23) - iVar10;
  if (iVar12 + iVar10 <= param_6 + iVar23) {
    iVar17 = iVar12;
  }
  if (param_7 != (long *)0x0) {
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
                    /* try { // try from 001f6d99 to 001f7020 has its CatchHandler @ 001f712b */
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x98))();
    lVar13 = *param_7;
    if (lVar13 != 0) {
      iVar12 = (int)*(undefined8 *)(lVar13 + 0x10);
      auVar25._0_4_ = -(uint)(iVar12 < _DAT_00654cd0);
      iVar26 = (int)((ulong)*(undefined8 *)(lVar13 + 0x10) >> 0x20);
      iVar23 = -(uint)(iVar26 < _UNK_00654cd4);
      auVar25._4_4_ = auVar25._0_4_;
      auVar25._8_4_ = iVar23;
      auVar25._12_4_ = iVar23;
      iVar23 = movmskpd((int)lVar13,auVar25);
      if (iVar23 == 0) {
        auVar24._4_4_ = (float)iVar15;
        auVar24._0_4_ = (float)iVar18;
        fVar27 = (float)iVar12;
        fVar29 = (float)iVar26;
        auVar24._8_8_ = 0;
        auVar6._4_4_ = fVar29;
        auVar6._0_4_ = fVar27;
        auVar6._8_8_ = 0;
        auVar25 = divps(auVar24,auVar6);
        fVar21 = auVar25._4_4_;
        if (auVar25._0_4_ <= auVar25._4_4_) {
          fVar21 = auVar25._0_4_;
        }
        fVar28 = fVar21 * 0.0;
        uVar22 = CONCAT44(fVar21,fVar21);
        fVar27 = (((float)iVar18 - fVar27 * fVar21) * _DAT_005d9920 + (float)iVar17) - fVar28;
        fStack_164 = (((float)iVar15 - fVar29 * fVar21) * _UNK_005d9924 +
                     (float)((local_194 - iVar15) / 2)) - fVar28;
      }
      else {
        fVar27 = 0.0;
        fStack_164 = 0.0;
        fVar28 = 0.0;
        uVar22 = _DAT_005dcc70;
      }
      local_178 = (undefined1 *)CONCAT44(fVar28,(int)uVar22);
      uStack_170 = (undefined1 *)CONCAT44(fVar28,fVar27);
      local_168 = (undefined2)((ulong)uVar22 >> 0x20);
      uStack_166 = (undefined2)((ulong)uVar22 >> 0x30);
      cVar8 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
      if (cVar8 == '\0') {
        (**(code **)(**(long **)(param_2 + 8) + 0xe0))(*(long **)(param_2 + 8),param_7,&local_178);
      }
    }
    iVar17 = iVar17 + iVar18;
    iVar10 = iVar10 - iVar18;
  }
  uStack_15a = 0x31;
  uStack_15e = 0x30373530;
  uStack_166 = 0x636a;
  fStack_164 = 1.7468446e+19;
  local_160 = 0x3031;
  Identifier::Identifier((Identifier *)&local_110,(byte *)&uStack_166);
  if ((long)*(int *)(local_190 + 0xd4) == 0) {
    uVar19 = false;
  }
  else {
    lVar13 = 0;
    do {
      uVar19 = *(undefined1 **)(*(long *)(local_190 + 200) + lVar13) == local_110;
      if ((bool)uVar19) break;
      bVar20 = (long)*(int *)(local_190 + 0xd4) * 0x18 + -0x18 != lVar13;
      lVar13 = lVar13 + 0x18;
    } while (bVar20);
  }
  if (local_110 != &DAT_0061ac58) {
    piVar16 = (int *)(local_110 + -0x10);
    LOCK();
    iVar15 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar15 == 0) {
      operator_delete__(piVar16);
    }
  }
  if ((bool)uVar19) {
LAB_001f6f81:
    uVar11 = Component::findColour(local_190,0x1005701,'\0');
    Graphics::setColour(param_2,(int)uVar11);
  }
  else {
    if (0 < *(int *)(local_188 + 0xf4)) {
      iVar15 = *(int *)(local_188 + 0xf4);
      iVar23 = 0;
      do {
        while( true ) {
          if (*(int *)(*(long *)(local_188 + 0xe8) + (long)iVar23 * 8) == 0x1005701) {
            if (-1 < iVar23) goto LAB_001f6f81;
            goto LAB_001f700e;
          }
          iVar18 = (iVar23 + iVar15) / 2;
          if (iVar18 == iVar23) goto LAB_001f700e;
          if (*(int *)(*(long *)(local_188 + 0xe8) + (long)iVar18 * 8) < 0x1005702) break;
          iVar15 = iVar18;
          if (iVar18 <= iVar23) goto LAB_001f700e;
        }
        iVar23 = iVar18;
      } while (iVar18 < iVar15);
    }
LAB_001f700e:
    Graphics::setColour(param_2,*(undefined4 *)(local_188 + 0x16c));
  }
  local_178 = *(undefined1 **)(local_190 + 8);
  piVar16 = (int *)(local_178 + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    *piVar16 = *piVar16 + 1;
    UNLOCK();
  }
                    /* try { // try from 001f7055 to 001f706d has its CatchHandler @ 001f70bf */
  Graphics::drawText((ulong)(uint)(float)iVar17,CONCAT44((float)local_194,(float)iVar10),
                     (long)param_2,(ulong *)&local_178,0x21,1,param_4,param_6_00);
  piVar16 = (int *)(local_178 + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    iVar17 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar17 == 0) {
      operator_delete__(piVar16);
    }
  }
  if (local_1a0 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar3 = local_1a0 + 8;
    *(int *)pSVar3 = *(int *)pSVar3 + -1;
    UNLOCK();
    if (*(int *)pSVar3 == 0) {
      (**(code **)(*(long *)local_1a0 + 8))();
    }
  }
  return;
}



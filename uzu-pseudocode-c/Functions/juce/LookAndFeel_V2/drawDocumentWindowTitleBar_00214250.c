// Function : drawDocumentWindowTitleBar
// Namespace: juce:LookAndFeel_V2
// Entry    : 00214250
// Prototype: undefined drawDocumentWindowTitleBar(LookAndFeel_V2 * this, Component * param_1, Graphics * param_2, int param_3, undefined8 param_4, undefined8 param_6_00, int param_6, long * param_7, char param_8)
// Body     : 00214250 - 00214b52


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawDocumentWindowTitleBar(juce::DocumentWindow&, juce::Graphics&, int,
   int, int, int, juce::Image const*, bool) */

void __thiscall
juce::LookAndFeel_V2::drawDocumentWindowTitleBar
          (LookAndFeel_V2 *this,Component *param_1,Graphics *param_2,int param_3,uint *param_4,
          undefined8 *param_6_00,int param_6,long *param_7,char param_8)

{
  long *plVar1;
  byte *pbVar2;
  SharedFontInternal *pSVar3;
  Component CVar4;
  Graphics GVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined8 uVar9;
  Component *pCVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar20;
  long *plVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  undefined1 uVar26;
  bool bVar27;
  float fVar28;
  int iVar29;
  float extraout_XMM1_Da;
  int iVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  SharedFontInternal *local_1a8;
  Component *local_1a0;
  int local_194;
  LookAndFeel_V2 *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  float local_180;
  int local_17c;
  undefined1 *local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined1 uStack_167;
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
  
  iVar29 = (int)param_6_00;
  iVar22 = (int)param_4;
  if (iVar22 * param_3 == 0) {
    return;
  }
  CVar4 = param_1[0xef];
  local_190 = this;
                    /* try { // try from 0021428d to 0021429b has its CatchHandler @ 00214bdb */
  uVar15 = Component::findColour(param_1,0x1005700,'\0');
                    /* try { // try from 0021429e to 002142b0 has its CatchHandler @ 00214bd3 */
  uVar16 = Component::findColour(param_1,0x1005700,'\0');
  local_188 = (undefined4)uVar16;
  uVar12 = Colour::contrasting(*(float *)(&DAT_005de618 + (ulong)(CVar4 == (Component)0x0) * 4),
                               (Colour *)&local_188);
  local_178 = (undefined1 *)0x0;
  uStack_170 = (undefined1 *)((ulong)(uint)(float)iVar22 << 0x20);
  local_168 = 0;
  puVar17 = malloc(0x80);
  local_160 = SUB82(puVar17,0);
  uStack_15e = (undefined4)((ulong)puVar17 >> 0x10);
  uStack_15a = (undefined2)((ulong)puVar17 >> 0x30);
  *puVar17 = 0;
  *(int *)(puVar17 + 1) = (int)uVar15;
  plStack_158 = (long *)0x200000008;
  uVar19 = 0x3ff0000000000000;
  puVar17[2] = 0x3ff0000000000000;
  *(uint *)(puVar17 + 3) = uVar12;
                    /* try { // try from 00214339 to 00214345 has its CatchHandler @ 00214bbe */
  Graphics::setGradientFill(param_2,&local_178);
  free((void *)CONCAT26(uStack_15a,CONCAT42(uStack_15e,local_160)));
  (**(code **)(**(long **)(param_2 + 8) + 0xa8))();
  FontOptions::FontOptions((float)iVar22 * DAT_005de438,(FontOptions *)&local_98,1);
                    /* try { // try from 00214385 to 0021439b has its CatchHandler @ 00214be5 */
  uVar13 = (**(code **)(*(long *)local_190 + 0x50))();
  FontOptions::FontOptions((FontOptions *)&local_178,&local_98);
  local_108 = local_178;
  local_178 = &DAT_0061ac58;
  lStack_100 = (long)uStack_170;
  uStack_170 = &DAT_0061ac58;
  local_f8 = (long *)CONCAT44(fStack_164,CONCAT22(uStack_166,CONCAT11(uStack_167,local_168)));
  local_168 = 0;
  uStack_167 = 0;
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
  uStack_c0 = CONCAT44(uStack_12c,uVar13);
  uStack_aa = uStack_11a;
                    /* try { // try from 0021445c to 0021446d has its CatchHandler @ 00214bac */
  local_130 = uVar13;
  Font::Font((Font *)&local_1a8,(long *)&local_108);
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
  }
  plVar1 = plStack_e8;
  plVar21 = local_f0;
  local_1a0 = param_1;
  if (local_f0 != plStack_e8) {
    do {
      piVar23 = (int *)(*plVar21 + -0x10);
      if (piVar23 != &emptyString) {
        LOCK();
        iVar25 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar25 == 0) {
          operator_delete__(piVar23);
        }
      }
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar1);
  }
  pCVar10 = local_1a0;
  if (local_f0 != (long *)0x0) {
    operator_delete(local_f0);
  }
  local_194 = iVar22;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  piVar23 = (int *)(lStack_100 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    iVar22 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar22 == 0) {
      operator_delete__(piVar23);
    }
  }
  piVar23 = (int *)(local_108 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    iVar22 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar22 == 0) {
      operator_delete__(piVar23);
    }
  }
  local_17c = param_3;
  plVar1 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar1 = local_80;
  }
  for (; plVar1 != local_78; plVar1 = plVar1 + 1) {
    piVar23 = (int *)(*plVar1 + -0x10);
    if (piVar23 != &emptyString) {
      LOCK();
      iVar22 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar22 == 0) {
        operator_delete__(piVar23);
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
  piVar23 = (int *)(local_90 + -0x10);
  if (piVar23 == &emptyString) {
LAB_002145de:
    piVar23 = (int *)(local_98 + -0x10);
    if (piVar23 != &emptyString) {
LAB_002145ef:
      LOCK();
      iVar22 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar22 == 0) {
        operator_delete__(piVar23);
        GVar5 = param_2[0x10];
        goto joined_r0x0021474f;
      }
    }
  }
  else {
    LOCK();
    iVar22 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar22 != 0) goto LAB_002145de;
    operator_delete__(piVar23);
    piVar23 = (int *)(local_98 + -0x10);
    if (piVar23 != &emptyString) goto LAB_002145ef;
  }
  GVar5 = param_2[0x10];
joined_r0x0021474f:
  if (GVar5 != (Graphics)0x0) {
    param_2[0x10] = (Graphics)0x0;
                    /* try { // try from 00214616 to 0021462b has its CatchHandler @ 00214be3 */
    (**(code **)(**(long **)(param_2 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_2 + 8) + 0xf8))(*(long **)(param_2 + 8),&local_1a8);
  pbVar6 = *(byte **)(pCVar10 + 8);
  pbVar2 = pbVar6 + -0x10;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar2 = *(int *)pbVar2 + 1;
    UNLOCK();
  }
                    /* try { // try from 0021463e to 00214647 has its CatchHandler @ 00214b8c */
  fVar28 = extraout_XMM1_Da;
  GlyphArrangement::getStringBounds(&local_1a8,pbVar6,extraout_RDX,uVar19,param_4,(ulong)param_6_00)
  ;
  fVar28 = ceilf(fVar28);
  uVar9 = extraout_RDX_00;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    iVar22 = *(int *)pbVar2;
    *(int *)pbVar2 = *(int *)pbVar2 + -1;
    UNLOCK();
    if (iVar22 == 0) {
      operator_delete__(pbVar2);
      uVar9 = extraout_RDX_01;
    }
  }
  if (param_7 == (long *)0x0) {
    iVar25 = 0;
    iVar22 = 0;
  }
  else {
    fVar33 = *(float *)((long)local_1a8 + 100);
    if (fVar33 <= 0.0) {
      local_180 = *(float *)((long)local_1a8 + 0x68);
                    /* try { // try from 0021469b to 002146a4 has its CatchHandler @ 00214b53 */
      uVar19 = Font::SharedFontInternal::getAscentDescent
                         (local_1a8,(long *)&local_1a8,uVar9,uVar19,param_4,(ulong)param_6_00);
      fVar33 = local_180 * ((float)((ulong)uVar19 >> 0x20) + (float)uVar19);
    }
    iVar22 = (int)fVar33;
    lVar20 = *param_7;
    if (lVar20 == 0) {
      iVar14 = 0;
      iVar25 = 0;
    }
    else {
      iVar14 = *(int *)(lVar20 + 0x10) * iVar22;
      iVar25 = *(int *)(lVar20 + 0x14);
    }
    iVar25 = iVar14 / iVar25 + 4;
  }
  iVar14 = (int)fVar28 + iVar25;
  if (param_6 <= (int)fVar28 + iVar25) {
    iVar14 = param_6;
  }
  iVar18 = iVar29;
  if ((param_8 == '\0') && (iVar18 = (local_17c - iVar14) / 2, iVar18 <= iVar29)) {
    iVar18 = iVar29;
  }
  iVar24 = (param_6 + iVar29) - iVar14;
  if (iVar18 + iVar14 <= param_6 + iVar29) {
    iVar24 = iVar18;
  }
  if (param_7 != (long *)0x0) {
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
                    /* try { // try from 00214812 to 00214a0d has its CatchHandler @ 00214bfd */
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x98))();
    lVar20 = *param_7;
    if (lVar20 != 0) {
      iVar18 = (int)*(undefined8 *)(lVar20 + 0x10);
      auVar31._0_4_ = -(uint)(iVar18 < _DAT_00654cd0);
      iVar32 = (int)((ulong)*(undefined8 *)(lVar20 + 0x10) >> 0x20);
      iVar29 = -(uint)(iVar32 < _UNK_00654cd4);
      auVar31._4_4_ = auVar31._0_4_;
      auVar31._8_4_ = iVar29;
      auVar31._12_4_ = iVar29;
      iVar29 = movmskpd((int)lVar20,auVar31);
      if (iVar29 == 0) {
        auVar30._4_4_ = (float)iVar22;
        auVar30._0_4_ = (float)iVar25;
        fVar33 = (float)iVar18;
        fVar35 = (float)iVar32;
        auVar30._8_8_ = 0;
        auVar7._4_4_ = fVar35;
        auVar7._0_4_ = fVar33;
        auVar7._8_8_ = 0;
        auVar31 = divps(auVar30,auVar7);
        fVar28 = auVar31._4_4_;
        if (auVar31._0_4_ <= auVar31._4_4_) {
          fVar28 = auVar31._0_4_;
        }
        fVar34 = fVar28 * 0.0;
        uVar19 = CONCAT44(fVar28,fVar28);
        fVar33 = (((float)iVar25 - fVar33 * fVar28) * _DAT_005d9920 + (float)iVar24) - fVar34;
        fStack_164 = (((float)iVar22 - fVar35 * fVar28) * _UNK_005d9924 +
                     (float)((local_194 - iVar22) / 2)) - fVar34;
      }
      else {
        fVar33 = 0.0;
        fStack_164 = 0.0;
        fVar34 = 0.0;
        uVar19 = _DAT_005dcc70;
      }
      local_178 = (undefined1 *)CONCAT44(fVar34,(int)uVar19);
      uStack_170 = (undefined1 *)CONCAT44(fVar34,fVar33);
      local_168 = (undefined1)((ulong)uVar19 >> 0x20);
      uStack_167 = (undefined1)((ulong)uVar19 >> 0x28);
      uStack_166 = (undefined2)((ulong)uVar19 >> 0x30);
      cVar11 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
      if (cVar11 == '\0') {
        (**(code **)(**(long **)(param_2 + 8) + 0xe0))(*(long **)(param_2 + 8),param_7,&local_178);
      }
    }
    iVar24 = iVar24 + iVar25;
    iVar14 = iVar14 - iVar25;
  }
  uStack_15a = 0x31;
  uStack_15e = 0x30373530;
  uStack_166 = 0x636a;
  fStack_164 = 1.7468446e+19;
  local_160 = 0x3031;
  Identifier::Identifier((Identifier *)&local_188,(byte *)&uStack_166);
  puVar8 = (undefined1 *)CONCAT44(uStack_184,local_188);
  if ((long)*(int *)(local_1a0 + 0xd4) == 0) {
    uVar26 = false;
  }
  else {
    lVar20 = 0;
    do {
      uVar26 = *(undefined1 **)(*(long *)(local_1a0 + 200) + lVar20) == puVar8;
      if ((bool)uVar26) break;
      bVar27 = (long)*(int *)(local_1a0 + 0xd4) * 0x18 + -0x18 != lVar20;
      lVar20 = lVar20 + 0x18;
    } while (bVar27);
  }
  if (puVar8 != &DAT_0061ac58) {
    piVar23 = (int *)(puVar8 + -0x10);
    LOCK();
    iVar22 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar22 == 0) {
      operator_delete__(piVar23);
    }
  }
  if ((bool)uVar26) {
LAB_002149f1:
    uVar15 = Component::findColour(local_1a0,0x1005701,'\0');
    Graphics::setColour(param_2,(int)uVar15);
  }
  else {
    if (0 < *(int *)(local_190 + 0xf4)) {
      iVar22 = *(int *)(local_190 + 0xf4);
      iVar29 = 0;
      do {
        while( true ) {
          if (*(int *)(*(long *)(local_190 + 0xe8) + (long)iVar29 * 8) == 0x1005701) {
            if (-1 < iVar29) goto LAB_002149f1;
            goto LAB_00214a7e;
          }
          iVar25 = (iVar29 + iVar22) / 2;
          if (iVar25 == iVar29) goto LAB_00214a7e;
          if (*(int *)(*(long *)(local_190 + 0xe8) + (long)iVar25 * 8) < 0x1005702) break;
          iVar22 = iVar25;
          if (iVar25 <= iVar29) goto LAB_00214a7e;
        }
        iVar29 = iVar25;
      } while (iVar25 < iVar22);
    }
LAB_00214a7e:
                    /* try { // try from 00214a7e to 00214a8e has its CatchHandler @ 00214b60 */
    uVar15 = Component::findColour(local_1a0,0x1005700,'\0');
    local_178 = (undefined1 *)CONCAT44(local_178._4_4_,(int)uVar15);
    uVar12 = Colour::contrasting(*(float *)(&DAT_005de620 + (ulong)(CVar4 == (Component)0x0) * 4),
                                 (Colour *)&local_178);
                    /* try { // try from 00214ab3 to 00214abc has its CatchHandler @ 00214b5b */
    Graphics::setColour(param_2,uVar12);
  }
  local_178 = *(undefined1 **)(local_1a0 + 8);
  piVar23 = (int *)(local_178 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    *piVar23 = *piVar23 + 1;
    UNLOCK();
  }
                    /* try { // try from 00214af1 to 00214b09 has its CatchHandler @ 00214b68 */
  Graphics::drawText((ulong)(uint)(float)iVar24,CONCAT44((float)local_194,(float)iVar14),
                     (long)param_2,(ulong *)&local_178,0x21,1,param_4,param_6_00);
  piVar23 = (int *)(local_178 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    iVar22 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar22 == 0) {
      operator_delete__(piVar23);
    }
  }
  if (local_1a8 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar3 = local_1a8 + 8;
    *(int *)pSVar3 = *(int *)pSVar3 + -1;
    UNLOCK();
    if (*(int *)pSVar3 == 0) {
      (**(code **)(*(long *)local_1a8 + 8))();
    }
  }
  return;
}



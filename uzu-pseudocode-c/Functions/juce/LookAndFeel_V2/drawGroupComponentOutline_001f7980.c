// Function : drawGroupComponentOutline
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f7980
// Prototype: undefined drawGroupComponentOutline(LookAndFeel_V2 * this, Graphics * param_1, int param_2, undefined8 param_4_00, ulong * param_4, uint * param_5, Component * param_6)
// Body     : 001f7980 - 001f8923


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawGroupComponentOutline(juce::Graphics&, int, int, juce::String const&,
   juce::Justification const&, juce::GroupComponent&) */

void __thiscall
juce::LookAndFeel_V2::drawGroupComponentOutline
          (LookAndFeel_V2 *this,Graphics *param_1,int param_2,undefined8 param_4_00,ulong *param_4,
          uint *param_5,Component *param_6)

{
  long *plVar1;
  SharedFontInternal *pSVar2;
  long *plVar3;
  ulong *puVar4;
  long *plVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  Component *pCVar9;
  ulong uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  undefined1 extraout_var [12];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_268;
  uint uStack_260;
  uint uStack_25c;
  SharedFontInternal *local_248;
  float local_23c;
  undefined1 local_238 [16];
  float local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  float local_20c;
  undefined1 local_208 [16];
  float *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_19a;
  float local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  float local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  undefined1 local_168 [16];
  ulong *local_150;
  undefined8 local_148;
  undefined4 local_140;
  float *local_138;
  long lStack_130;
  long *local_128;
  long *local_120;
  long *plStack_118;
  undefined8 local_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_da;
  float local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  uVar14 = param_4_00;
  puVar18 = param_5;
  local_150 = param_4;
  FontOptions::FontOptions(DAT_005d906c,(FontOptions *)&local_98,0);
                    /* try { // try from 001f79c4 to 001f79e0 has its CatchHandler @ 001f8948 */
  uVar7 = (**(code **)(*(long *)this + 0x50))(this);
  FontOptions::FontOptions((FontOptions *)&local_1f8,&local_98);
  local_138 = local_1f8;
  local_1f8 = (float *)&DAT_0061ac58;
  lStack_130 = (long)uStack_1f0;
  uStack_1f0 = &DAT_0061ac58;
  local_128 = local_1e8;
  local_1e8 = (long *)0x0;
  local_120 = uStack_1e0;
  plStack_118 = plStack_1d8;
  local_110 = local_1d0;
  uStack_1e0 = (long *)0x0;
  plStack_1d8 = (long *)0x0;
  local_1d0 = 0;
  local_108 = local_1c8;
  uStack_100 = uStack_1c0;
  local_f8 = local_1b8;
  local_1c8 = (void *)0x0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_f0 = CONCAT44(uStack_1ac,uVar7);
  uStack_da = uStack_19a;
                    /* try { // try from 001f7ab6 to 001f7ac7 has its CatchHandler @ 001f8930 */
  local_1b0 = uVar7;
  Font::Font((Font *)&local_248,(long *)&local_138);
  uVar22 = extraout_RDX;
  plVar1 = local_120;
  plVar3 = plStack_118;
  if (local_108 != (void *)0x0) {
    operator_delete(local_108);
    uVar22 = extraout_RDX_00;
    plVar1 = local_120;
    plVar3 = plStack_118;
  }
  for (; plVar5 = plStack_118, plVar1 != plStack_118; plVar1 = plVar1 + 1) {
    piVar17 = (int *)(*plVar1 + -0x10);
    plStack_118 = plVar3;
    if (piVar17 != &emptyString) {
      LOCK();
      iVar12 = *piVar17;
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        operator_delete__(piVar17);
        uVar22 = extraout_RDX_01;
      }
    }
    plVar3 = plStack_118;
    plStack_118 = plVar5;
  }
  plStack_118 = plVar3;
  if (local_120 != (long *)0x0) {
    operator_delete(local_120);
    uVar22 = extraout_RDX_02;
  }
  if (local_128 != (long *)0x0) {
    LOCK();
    plVar1 = local_128 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_128 + 8))();
      uVar22 = extraout_RDX_03;
    }
  }
  piVar17 = (int *)(lStack_130 + -0x10);
  if (piVar17 != &emptyString) {
    LOCK();
    iVar12 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      operator_delete__(piVar17);
      uVar22 = extraout_RDX_04;
    }
  }
  pfVar11 = local_138 + -4;
  if (pfVar11 != (float *)&emptyString) {
    LOCK();
    fVar31 = *pfVar11;
    *pfVar11 = (float)((int)*pfVar11 + -1);
    UNLOCK();
    if (fVar31 == 0.0) {
      operator_delete__(pfVar11);
      uVar22 = extraout_RDX_05;
    }
  }
  plVar1 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    uVar22 = extraout_RDX_06;
    plVar1 = local_80;
  }
  for (; plVar1 != local_78; plVar1 = plVar1 + 1) {
    piVar17 = (int *)(*plVar1 + -0x10);
    if (piVar17 != &emptyString) {
      LOCK();
      iVar12 = *piVar17;
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        operator_delete__(piVar17);
        uVar22 = extraout_RDX_13;
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
    uVar22 = extraout_RDX_07;
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_88 + 8))();
      uVar22 = extraout_RDX_08;
    }
  }
  piVar17 = (int *)(local_90 + -0x10);
  if (piVar17 != &emptyString) {
    LOCK();
    iVar12 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      operator_delete__(piVar17);
      uVar22 = extraout_RDX_09;
    }
  }
  piVar17 = (int *)(local_98 + -0x10);
  if (piVar17 != &emptyString) {
    LOCK();
    iVar12 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      operator_delete__(piVar17);
      uVar22 = extraout_RDX_10;
    }
  }
  local_1e8 = (long *)0x0;
  uStack_1e0 = (long *)0x0;
  local_1f8 = (float *)0x0;
  uStack_1f0 = (undefined1 *)0x0;
  plStack_1d8 = (long *)CONCAT71(plStack_1d8._1_7_,1);
                    /* try { // try from 001f7c5e to 001f7c67 has its CatchHandler @ 001f892e */
  uVar21 = Font::SharedFontInternal::getAscentDescent
                     (local_248,(long *)&local_248,uVar22,uVar14,(uint *)param_4,(ulong)puVar18);
  fVar31 = *(float *)(local_248 + 100);
  uVar22 = extraout_RDX_11;
  if (fVar31 <= 0.0) {
    local_238._8_8_ = extraout_XMM0_Qb;
    local_238._0_8_ = uVar21;
    fVar31 = *(float *)(local_248 + 0x68);
                    /* try { // try from 001f7c8a to 001f7c93 has its CatchHandler @ 001f8924 */
    uVar22 = Font::SharedFontInternal::getAscentDescent
                       (local_248,(long *)&local_248,extraout_RDX_11,uVar14,(uint *)param_4,
                        (ulong)puVar18);
    fVar31 = fVar31 * ((float)((ulong)uVar22 >> 0x20) + (float)uVar22);
    uVar22 = extraout_RDX_12;
    uVar21 = local_238._0_8_;
  }
  puVar4 = local_150;
  uStack_bc = 0;
  uStack_c0 = 0;
  local_c8 = 0.0;
  fVar28 = (DAT_005d9038 / ((float)((ulong)uVar21 >> 0x20) + (float)uVar21)) * (float)uVar21 *
           fVar31 + DAT_00652610;
  fVar31 = (float)param_2 + DAT_005d98e0;
  if (fVar31 <= 0.0) {
    fVar31 = 0.0;
  }
  local_208 = ZEXT416((uint)fVar28);
  fVar28 = ((float)(int)param_4_00 - fVar28) + DAT_00652610;
  auVar25 = ZEXT416((uint)fVar28);
  if (fVar28 <= 0.0) {
    auVar25 = ZEXT816(0);
  }
  local_23c = DAT_005d9044;
  auVar26._4_12_ = auVar25._4_12_;
  fVar24 = auVar25._0_4_ * DAT_005d9044;
  fVar28 = fVar31 * DAT_005d9044;
  if (DAT_00652628 <= fVar31 * DAT_005d9044) {
    fVar28 = DAT_00652628;
  }
  if (fVar28 <= fVar24) {
    fVar24 = fVar28;
  }
  auVar26._0_4_ = fVar24 + fVar24;
  if (*(byte *)*local_150 != 0) {
                    /* try { // try from 001f7d5e to 001f7d67 has its CatchHandler @ 001f892c */
    auVar27 = auVar26;
    GlyphArrangement::getStringBounds
              (&local_248,(byte *)*local_150,uVar22,uVar14,(uint *)param_4,(ulong)puVar18);
    fVar28 = (fVar31 - auVar26._0_4_) + _DAT_005de444;
    auVar23 = ZEXT416((uint)fVar28);
    if (fVar28 <= 0.0) {
      auVar23 = ZEXT816(0);
    }
    fVar28 = ceilf(auVar27._0_4_);
    fVar28 = (float)(int)fVar28 + DAT_00651f38;
    local_268 = auVar23._0_4_;
    uStack_260 = auVar23._8_4_;
    uStack_25c = auVar23._12_4_;
    if (fVar28 <= local_268) {
      local_268 = fVar28;
    }
    local_c8 = (float)(~-(uint)(fVar28 < DAT_005d9058) & (uint)local_268);
    uStack_c0 = ~(uint)(float)(int)extraout_var._4_4_ & uStack_260;
    uStack_bc = ~(uint)(float)(int)extraout_var._8_4_ & uStack_25c;
  }
  uStack_c4 = 0;
  if ((*param_5 & 4) == 0) {
    if ((*param_5 & 2) == 0) {
      local_20c = DAT_005d94d4 + fVar24;
    }
    else {
      local_20c = ((fVar31 - fVar24) - local_c8) + DAT_0065b5a8;
    }
  }
  else {
    local_20c = ((fVar31 - auVar26._0_4_) - local_c8) * DAT_005d9044 + fVar24;
  }
  local_20c = local_20c + DAT_0065449c;
  fVar28 = local_c8 + local_20c;
  if (uStack_1f0._4_4_ == 0) {
    local_1e8 = (long *)CONCAT44(fVar28,fVar28);
    uStack_1e0 = (long *)CONCAT44(local_208._0_4_,local_208._0_4_);
  }
  else {
    if ((float)local_1e8 <= fVar28) {
      if (local_1e8._4_4_ < fVar28) {
        pfVar11 = (float *)((long)&local_1e8 + 4);
        goto LAB_001f7eb3;
      }
    }
    else {
      pfVar11 = (float *)&local_1e8;
LAB_001f7eb3:
      *pfVar11 = fVar28;
    }
    if ((float)uStack_1e0 <= (float)local_208._0_4_) {
      if ((float)local_208._0_4_ <= uStack_1e0._4_4_) goto LAB_001f7ee5;
      pfVar11 = (float *)((long)&uStack_1e0 + 4);
    }
    else {
      pfVar11 = (float *)&uStack_1e0;
    }
    *pfVar11 = (float)local_208._0_4_;
  }
LAB_001f7ee5:
  iVar12 = uStack_1f0._4_4_ + 3;
  fVar29 = (float)local_208._0_4_;
  if ((int)(uint)uStack_1f0 < iVar12) {
    uVar15 = uStack_1f0._4_4_ + iVar12 / 2 + 0xb;
    uVar16 = uVar15 & 0xfffffff8;
    if ((uint)uStack_1f0 != uVar16) {
      if ((int)uVar16 < 1) {
        free(local_1f8);
        local_1f8 = (float *)0x0;
      }
      else {
        local_1f8 = realloc(local_1f8,(ulong)uVar16 << 2);
      }
    }
    uStack_1f0 = (undefined1 *)(CONCAT44(uStack_1f0._4_4_,uVar15) & 0xfffffffffffffff8);
    iVar12 = uStack_1f0._4_4_ + 3;
    fVar29 = (float)local_208._0_4_;
  }
  lVar8 = (long)uStack_1f0._4_4_;
  local_1f8[lVar8] = 100002.0;
  local_1f8[lVar8 + 1] = fVar28;
  uStack_1f0 = (undefined1 *)CONCAT44(iVar12,(uint)uStack_1f0);
  local_1f8[lVar8 + 2] = fVar29;
  fVar31 = fVar31 + DAT_0065449c;
  Path::lineTo(fVar31 - fVar24,fVar29,(Path *)&local_1f8);
  fVar30 = DAT_005d9044 * auVar26._0_4_;
  fVar29 = (fVar31 - auVar26._0_4_) + fVar30;
  fVar28 = fVar30 + (float)local_208._0_4_;
  local_168 = ZEXT416((uint)fVar28);
  local_238 = ZEXT416((uint)fVar30);
  if (0.0 < fVar30) {
    local_178 = (fVar28 * DAT_005d9058 - fVar29) + fVar29;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    local_228 = (DAT_00652e14 * fVar29 - fVar28) + fVar28;
    local_188 = (float)(_DAT_006524b0 ^ (uint)fVar30);
    uStack_180 = _UNK_006524b8;
    uStack_17c = _UNK_006524bc;
    uStack_184 = _UNK_006524b4;
    fVar28 = 0.0;
    do {
      fVar30 = sinf(fVar28);
      fVar30 = fVar30 * (float)local_238._0_4_ + fVar29;
      fVar19 = cosf(fVar28);
      fVar19 = fVar19 * local_188 + (float)local_168._0_4_;
      Path::lineTo(fVar19 * DAT_00652e14 + fVar30 + local_178,
                   fVar30 * DAT_005d9058 + fVar19 + local_228,(Path *)&local_1f8);
      fVar28 = fVar28 + DAT_005d904c;
    } while (fVar28 < DAT_005de3fc);
    fVar28 = local_188 * DAT_005de400 + (float)local_168._0_4_;
    Path::lineTo(local_178 + DAT_00652e14 * fVar28 + (float)local_238._0_4_ + fVar29,
                 local_228 + ((float)local_238._0_4_ + fVar29) * 0.0 + fVar28,(Path *)&local_1f8);
  }
  fVar28 = auVar25._0_4_ + (float)local_208._0_4_;
  Path::lineTo(fVar31,fVar28 - fVar24,(Path *)&local_1f8);
  if ((float)local_238._0_4_ <= DAT_005d9058) {
    Path::lineTo(DAT_0065449c + fVar24,fVar28,(Path *)&local_1f8);
LAB_001f865f:
    fVar24 = fVar24 + (float)local_208._0_4_;
    fVar31 = DAT_0065449c;
  }
  else {
    local_228 = (fVar28 - auVar26._0_4_) + (float)local_238._0_4_;
    local_188 = (local_228 * 0.0 - fVar29) + fVar29;
    fVar30 = (DAT_00652e14 * fVar29 - local_228) + local_228;
    local_178 = (float)(_DAT_006524b0 ^ local_238._0_4_);
    uStack_174 = _UNK_006524b4 ^ local_238._4_4_;
    uStack_170 = _UNK_006524b8 ^ local_238._8_4_;
    uStack_16c = _UNK_006524bc ^ local_238._12_4_;
    fVar31 = DAT_005de3fc;
    do {
      fVar19 = sinf(fVar31);
      fVar19 = fVar19 * (float)local_238._0_4_ + fVar29;
      fVar20 = cosf(fVar31);
      fVar20 = fVar20 * local_178 + local_228;
      Path::lineTo(fVar20 * DAT_00652e14 + fVar19 + local_188,
                   fVar19 * DAT_005d9058 + fVar20 + fVar30,(Path *)&local_1f8);
      fVar31 = fVar31 + DAT_005d904c;
    } while (fVar31 < DAT_00652ba0);
    fVar29 = DAT_005de404 * (float)local_238._0_4_ + fVar29;
    Path::lineTo(local_188 + DAT_00652e14 * (local_228 - local_178) + fVar29,
                 fVar30 + fVar29 * 0.0 + (local_228 - local_178),(Path *)&local_1f8);
    Path::lineTo(fVar24 + DAT_0065449c,fVar28,(Path *)&local_1f8);
    if ((float)local_238._0_4_ <= DAT_005d9058) goto LAB_001f865f;
    fVar28 = DAT_0065449c + (float)local_238._0_4_;
    local_188 = (local_228 * DAT_005d9058 - fVar28) + fVar28;
    fVar29 = DAT_00652e14 * fVar28;
    fVar30 = (fVar29 - local_228) + local_228;
    fVar31 = DAT_00652ba0;
    do {
      fVar19 = sinf(fVar31);
      fVar19 = fVar19 * (float)local_238._0_4_ + fVar28;
      fVar20 = cosf(fVar31);
      fVar20 = fVar20 * local_178 + local_228;
      Path::lineTo(fVar20 * DAT_00652e14 + fVar19 + local_188,
                   fVar19 * DAT_005d9058 + fVar20 + fVar30,(Path *)&local_1f8);
      fVar31 = fVar31 + DAT_005d904c;
    } while (fVar31 < DAT_005de408);
    fVar31 = DAT_005de40c * local_178 + local_228;
    Path::lineTo(local_188 + DAT_00652e14 * fVar31 + (fVar28 - (float)local_238._0_4_),
                 fVar30 + (fVar28 - (float)local_238._0_4_) * 0.0 + fVar31,(Path *)&local_1f8);
    Path::lineTo(DAT_0065449c,fVar24 + (float)local_208._0_4_,(Path *)&local_1f8);
    if ((float)local_238._0_4_ <= DAT_005d9058) goto LAB_001f868b;
    local_228 = ((float)local_168._0_4_ * DAT_005d9058 - fVar28) + fVar28;
    uStack_224 = local_168._4_4_;
    uStack_220 = local_168._8_4_;
    uStack_21c = local_168._12_4_;
    fVar24 = (fVar29 - (float)local_168._0_4_) + (float)local_168._0_4_;
    fVar31 = DAT_005de408;
    do {
      fVar29 = sinf(fVar31);
      fVar29 = fVar29 * (float)local_238._0_4_ + fVar28;
      fVar30 = cosf(fVar31);
      fVar30 = fVar30 * local_178 + (float)local_168._0_4_;
      Path::lineTo(fVar30 * DAT_00652e14 + fVar29 + local_228,
                   fVar29 * DAT_005d9058 + fVar30 + fVar24,(Path *)&local_1f8);
      fVar31 = fVar31 + DAT_005d904c;
    } while (fVar31 < DAT_005de448);
    fVar28 = (float)local_238._0_4_ * _DAT_005de44c + fVar28;
    fVar24 = fVar24 + fVar28 * 0.0 + ((float)local_168._0_4_ - (float)local_238._0_4_);
    fVar31 = local_228 + DAT_00652e14 * ((float)local_168._0_4_ - (float)local_238._0_4_) + fVar28;
  }
  Path::lineTo(fVar31,fVar24,(Path *)&local_1f8);
LAB_001f868b:
  Path::lineTo(local_20c,(float)local_208._0_4_,(Path *)&local_1f8);
  pCVar9 = param_6;
  do {
    if ((*(ushort *)(pCVar9 + 0xe8) & 0x8000) != 0) goto LAB_001f86d6;
    pCVar9 = *(Component **)(pCVar9 + 0x30);
  } while (pCVar9 != (Component *)0x0);
  local_23c = DAT_005d9038;
LAB_001f86d6:
                    /* try { // try from 001f86d6 to 001f8729 has its CatchHandler @ 001f8946 */
  uVar10 = Component::findColour(param_6,0x1005400,'\0');
  iVar13 = SUB84((double)((float)((uint)(uVar10 >> 0x18) & 0xff) * local_23c) + DAT_005d9098,0);
  iVar12 = 0xff;
  if (iVar13 < 0xff) {
    iVar12 = iVar13;
  }
  Graphics::setColour(param_1,(uint)uVar10 & 0xffffff | iVar12 << 0x18);
  local_148 = 0x40000000;
  local_140 = 0;
  local_b8 = ZEXT416((uint)DAT_005d9038);
  local_a8 = 0x3f800000;
                    /* try { // try from 001f8764 to 001f8801 has its CatchHandler @ 001f8942 */
  cVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  if (cVar6 == '\0') {
    if ((long)uStack_1f0._4_4_ != 0) {
      pfVar11 = local_1f8;
      do {
        fVar31 = *pfVar11;
        if ((fVar31 != DAT_005de3d0) || (NAN(fVar31) || NAN(DAT_005de3d0))) {
          if ((fVar31 != DAT_005de3d4) || (NAN(fVar31) || NAN(DAT_005de3d4))) {
            if (((fVar31 != DAT_005de3d8) || (NAN(fVar31) || NAN(DAT_005de3d8))) &&
               ((fVar31 != DAT_005de3dc || (NAN(fVar31) || NAN(DAT_005de3dc))))) goto LAB_001f87b4;
          }
          (**(code **)(**(long **)(param_1 + 8) + 0xd8))
                    (*(long **)(param_1 + 8),&local_1f8,&local_148,local_b8);
          break;
        }
        pfVar11 = pfVar11 + 2;
LAB_001f87b4:
        pfVar11 = pfVar11 + 1;
      } while (pfVar11 != local_1f8 + uStack_1f0._4_4_);
    }
  }
                    /* try { // try from 001f8802 to 001f885c has its CatchHandler @ 001f8944 */
  uVar10 = Component::findColour(param_6,0x1005410,'\0');
  iVar13 = SUB84((double)(local_23c * (float)((uint)(uVar10 >> 0x18) & 0xff)) + DAT_005d9098,0);
  iVar12 = 0xff;
  if (iVar13 < 0xff) {
    iVar12 = iVar13;
  }
  Graphics::setColour(param_1,(uint)uVar10 & 0xffffff | iVar12 << 0x18);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 001f8870 to 001f88e2 has its CatchHandler @ 001f8960 */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_248);
  Graphics::drawText((ulong)(uint)(float)SUB84((double)local_20c + DAT_005d9098,0),
                     CONCAT44((float)_UNK_005dced4,(float)SUB84((double)local_c8 + DAT_005d9098,0)),
                     (long)param_1,puVar4,0x24,1,(uint *)param_4,(undefined8 *)puVar18);
  uStack_1f0 = (undefined1 *)((ulong)uStack_1f0 & 0xffffffff);
  free(local_1f8);
  if (local_248 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar2 = local_248 + 8;
    *(int *)pSVar2 = *(int *)pSVar2 + -1;
    UNLOCK();
    if (*(int *)pSVar2 == 0) {
      (**(code **)(*(long *)local_248 + 8))();
    }
  }
  return;
}



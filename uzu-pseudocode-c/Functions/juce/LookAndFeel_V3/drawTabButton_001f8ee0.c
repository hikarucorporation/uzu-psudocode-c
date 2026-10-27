// Function : drawTabButton
// Namespace: juce:LookAndFeel_V3
// Entry    : 001f8ee0
// Prototype: undefined drawTabButton(LookAndFeel_V3 * this, TabBarButton * param_1, Graphics * param_2, undefined4 param_3, undefined4 param_4)
// Body     : 001f8ee0 - 001f9e66


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V3::drawTabButton(juce::TabBarButton&, juce::Graphics&, bool, bool) */

void __thiscall
juce::LookAndFeel_V3::drawTabButton
          (LookAndFeel_V3 *this,TabBarButton *param_1,Graphics *param_2,undefined4 param_3,
          undefined4 param_4)

{
  SharedFontInternal *pSVar1;
  pthread_mutex_t *__mutex;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [14];
  uint3 uVar6;
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [14];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  unkuint9 Var16;
  undefined1 auVar17 [15];
  undefined1 auVar18 [11];
  undefined1 auVar19 [15];
  undefined1 auVar20 [14];
  ulong uVar21;
  undefined8 uVar22;
  void *pvVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  Component *this_00;
  ulong uVar30;
  char *pcVar31;
  int iVar32;
  uint *puVar33;
  int iVar34;
  Graphics *pGVar35;
  long *plVar36;
  long *plVar37;
  long lVar38;
  long lVar39;
  int iVar40;
  uint uVar41;
  byte *pbVar42;
  uint uVar43;
  uint uVar44;
  int *piVar45;
  SharedFontInternal *pSVar46;
  int iVar47;
  uint uVar48;
  ulong uVar49;
  uint uVar50;
  bool bVar51;
  bool bVar52;
  float fVar53;
  undefined1 auVar54 [15];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 in_XMM3_Db;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auVar59 [16];
  SharedFontInternal *local_1f0;
  float local_1e8;
  uint local_1e4;
  ulong local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  void *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [8];
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  void *local_168;
  ulong local_128;
  Graphics *local_120;
  char *local_118;
  uint local_110 [2];
  uint local_108;
  undefined4 local_104;
  SharedFontInternal *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int local_dc;
  undefined1 local_d8 [16];
  ulong local_c8;
  LookAndFeel_V3 *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 *local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  local_104 = param_4;
  local_c0 = this;
  auVar59 = TabBarButton::getActiveArea(param_1);
  auVar55 = local_d8;
  local_1e0 = auVar59._8_8_;
  uVar30 = auVar59._0_8_;
  local_1d8._0_8_ = uVar30 >> 0x20;
  lVar38 = *(long *)(param_1 + 0x1f8);
  local_1e4 = *(uint *)(lVar38 + 0x150);
  uVar26 = *(uint *)(lVar38 + 0x14c);
  plVar36 = (long *)(*(long *)(lVar38 + 0x140) + (long)(int)(uVar26 - 1) * 8 + 8);
  pbVar27 = (byte *)&_ZN4juce7ColoursL16transparentBlackE_5;
  uVar50 = uVar26;
  do {
    if ((int)uVar50 < 1) goto LAB_001f8f8b;
    uVar50 = uVar50 - 1;
    plVar36 = plVar36 + -1;
  } while ((TabBarButton *)**(long **)(*(long *)(lVar38 + 0x140) + (ulong)uVar50 * 8) != param_1);
  if ((uVar50 < uVar26) && (*plVar36 != 0)) {
    pbVar27 = (byte *)(*plVar36 + 0x10);
  }
LAB_001f8f8b:
  local_d8._1_3_ = 0;
  local_d8[0] = *pbVar27;
  local_d8._4_12_ = auVar55._4_12_;
  uVar3 = *(ushort *)(pbVar27 + 1);
  uVar26 = (uint)uVar3;
  bVar2 = pbVar27[3];
  local_1c8._0_8_ = param_1;
                    /* try { // try from 001f8fbc to 001f8fc3 has its CatchHandler @ 001f9ece */
  local_1e8 = (float)param_3;
  local_120 = param_2;
  (**(code **)(**(long **)(param_1 + 0x1c0) + 0x10))(local_198);
                    /* try { // try from 001f8fce to 001f8fd3 has its CatchHandler @ 001f9ec6 */
  cVar24 = (**(code **)((long)local_198 + 0x30))(&uStack_190);
                    /* try { // try from 001f8fdb to 001f8fe0 has its CatchHandler @ 001f9ebe */
  (**(code **)((long)local_198 + 0x58))(&uStack_190);
  pGVar35 = local_120;
  uVar21 = local_1e0;
  local_b8 = ZEXT416((uint)uVar3);
  iVar32 = (int)(local_1e0 >> 0x20);
  if (cVar24 != '\0') {
    Graphics::setColour(local_120,((uint)uVar3 << 8 | (uint)bVar2 << 0x18) + local_d8._0_4_);
    goto LAB_001f9203;
  }
  iVar47 = auVar59._0_4_;
  iVar25 = local_1d8._0_4_;
  iVar40 = iVar47;
  iVar34 = iVar25;
  switch(local_1e4) {
  case 0:
    iVar25 = iVar32 + iVar25;
    goto LAB_001f907b;
  case 1:
    iVar34 = iVar32 + iVar25;
    break;
  case 2:
    iVar47 = (int)local_1e0 + iVar47;
LAB_001f907b:
    break;
  case 3:
    iVar40 = (int)local_1e0 + iVar47;
    break;
  default:
    iVar40 = 0;
    iVar34 = 0;
    iVar47 = 0;
    iVar25 = 0;
  }
  auVar55._8_4_ = 0xffffffff;
  auVar55._0_8_ = 0xffffffffffffffff;
  auVar55._12_4_ = 0xffffffff;
  auVar54 = auVar55._0_15_ ^ ZEXT415((uint)uVar3);
  auVar4[0xd] = 0;
  auVar4._0_13_ = auVar54._0_13_;
  auVar4[0xe] = auVar54[7];
  auVar7[0xc] = auVar54[6];
  auVar7._0_12_ = auVar54._0_12_;
  auVar7._13_2_ = auVar4._13_2_;
  auVar8[0xb] = 0;
  auVar8._0_11_ = auVar54._0_11_;
  auVar8._12_3_ = auVar7._12_3_;
  auVar9[10] = auVar54[5];
  auVar9._0_10_ = auVar54._0_10_;
  auVar9._11_4_ = auVar8._11_4_;
  auVar11[9] = 0;
  auVar11._0_9_ = auVar54._0_9_;
  auVar11._10_5_ = auVar9._10_5_;
  auVar12[8] = auVar54[4];
  auVar12._0_8_ = auVar54._0_8_;
  auVar12._9_6_ = auVar11._9_6_;
  auVar15._7_8_ = 0;
  auVar15._0_7_ = auVar12._8_7_;
  Var16 = CONCAT81(SUB158(auVar15 << 0x40,7),auVar54[3]);
  auVar17._9_6_ = 0;
  auVar17._0_9_ = Var16;
  auVar18._1_10_ = SUB1510(auVar17 << 0x30,5);
  auVar18[0] = auVar54[2];
  auVar19._11_4_ = 0;
  auVar19._0_11_ = auVar18;
  auVar13[2] = auVar54[1];
  auVar13._0_2_ = auVar54._0_2_;
  auVar13._3_12_ = SUB1512(auVar19 << 0x20,3);
  auVar14._2_13_ = auVar13._2_13_;
  auVar14._0_2_ = auVar54._0_2_ & 0xff;
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar14._0_10_;
  auVar5._12_2_ = (short)Var16;
  auVar20._2_4_ = auVar5._10_4_;
  auVar20._0_2_ = auVar18._0_2_;
  auVar20._6_8_ = 0;
  auVar10._4_2_ = auVar13._2_2_;
  auVar10._0_4_ = auVar14._0_4_;
  auVar10._6_8_ = SUB148(auVar20 << 0x40,6);
  fVar58 = (float)(byte)~local_d8[0] * _DAT_005de450 + DAT_005de3b0;
  uVar50 = (uint)bVar2 << 0x18;
  uVar48 = (int)((float)(auVar14._0_4_ & 0xffff) * _DAT_005dcee0 + _DAT_005dcd50) & _DAT_005dcd60;
  uVar41 = (int)((float)auVar10._4_4_ * _UNK_005dcee4 + _UNK_005dcd54) & _UNK_005dcd64;
  local_198._4_4_ = (float)iVar34;
  local_198._0_4_ = (float)iVar40;
  local_a8[1] = (byte)(uVar3 >> 8);
  fVar53 = (float)local_a8[1] * DAT_005de454;
  fVar57 = (float)(uVar26 & 0xff) * DAT_005de454;
  fVar56 = (float)(int)local_d8._0_4_ * DAT_005de454;
  uStack_190._4_4_ = (float)iVar25;
  uStack_190._0_4_ = (float)iVar47;
  local_188 = (long *)((ulong)local_188 & 0xffffffffffffff00);
  local_a8 = local_b8;
  local_180 = malloc(0x80);
  pGVar35 = local_120;
  local_178 = 8;
  *local_180 = 0;
  *(uint *)(local_180 + 1) = (int)fVar58 & 0xffU | uVar48 << 8 | uVar41 << 0x10 | uVar50;
  uStack_174 = 2;
  local_180[2] = 0x3ff0000000000000;
  *(uint *)(local_180 + 3) =
       (int)fVar56 & 0xffU | ((int)fVar57 & 0xffU) << 8 | ((int)fVar53 & 0xffU) << 0x10 | uVar50;
                    /* try { // try from 001f91e4 to 001f91f8 has its CatchHandler @ 001f9e7f */
  Graphics::setGradientFill(local_120,(undefined8 *)local_198);
  free(local_180);
LAB_001f9203:
  local_128 = uVar30 & 0xffffffff;
  uStack_190 = uVar21;
  local_198 = (undefined1  [8])uVar30;
  (**(code **)(**(long **)(pGVar35 + 8) + 0xb0))(*(long **)(pGVar35 + 8),local_198,0);
  uVar28 = Component::findColour((Component *)local_1c8._0_8_,0x1005812,'\0');
  Graphics::setColour(pGVar35,(int)uVar28);
  uVar50 = local_1e4;
  uVar28 = uVar21 >> 0x20;
  local_108 = uVar26;
  local_c8 = uVar30;
  if (local_1e4 == 1) {
    uVar49 = local_1d8._0_8_;
LAB_001f92bb:
    iVar32 = (int)uVar28;
    uVar30 = 1;
    if (iVar32 < 1) {
      uVar30 = uVar28;
    }
    uVar28 = (ulong)(uint)(iVar32 - (int)uVar30);
    local_198 = (undefined1  [8])
                (((ulong)(uint)((iVar32 + (int)uVar49) - (int)uVar30) << 0x20) + local_128);
    uStack_190 = uVar30 << 0x20 | uVar21 & 0xffffffff;
    (**(code **)(**(long **)(pGVar35 + 8) + 0xb0))(*(long **)(pGVar35 + 8),local_198,0);
    if (uVar50 != 3) {
      uVar50 = local_1e4;
      goto LAB_001f9330;
    }
    uVar28 = uVar28 << 0x20;
    iVar32 = (int)local_c8;
    uVar26 = (uint)local_1e0;
    lVar38 = local_1c8._0_8_;
    uVar30 = uVar49 << 0x20;
LAB_001f93a5:
    fVar58 = local_1e8;
    uStack_190 = 1;
    if ((int)uVar26 < 1) {
      uStack_190 = (ulong)uVar26;
    }
    local_198 = (undefined1  [8])((iVar32 + uVar26) - (int)uStack_190 | uVar30);
    uStack_190 = uStack_190 | uVar28;
    (**(code **)(**(long **)(pGVar35 + 8) + 0xb0))(*(long **)(pGVar35 + 8),local_198,0);
  }
  else {
    uVar29 = 1;
    if (iVar32 < 1) {
      uVar29 = uVar28;
    }
    uVar49 = (ulong)(uint)(local_1d8._0_4_ + (int)uVar29);
    uVar28 = (ulong)(uint)(iVar32 - (int)uVar29);
    uStack_190 = uVar29 << 0x20 | uVar21 & 0xffffffff;
    local_198 = (undefined1  [8])uVar30;
    (**(code **)(**(long **)(pGVar35 + 8) + 0xb0))(*(long **)(pGVar35 + 8),local_198,0);
    if (uVar50 != 0) goto LAB_001f92bb;
LAB_001f9330:
    iVar32 = (int)local_1e0;
    uVar30 = 1;
    if (iVar32 < 1) {
      uVar30 = local_1e0 & 0xffffffff;
    }
    local_1d8._0_8_ = uVar49 << 0x20;
    local_198 = (undefined1  [8])(local_128 | uVar49 << 0x20);
    uVar28 = uVar28 << 0x20;
    uStack_190 = uVar28 + uVar30;
    (**(code **)(**(long **)(pGVar35 + 8) + 0xb0))(*(long **)(pGVar35 + 8),local_198,0);
    lVar38 = local_1c8._0_8_;
    fVar58 = local_1e8;
    if (uVar50 != 2) {
      uVar26 = iVar32 - (int)uVar30;
      iVar32 = (int)local_c8 + (int)uVar30;
      pGVar35 = local_120;
      uVar30 = local_1d8._0_8_;
      goto LAB_001f93a5;
    }
  }
  lVar39 = lVar38;
  do {
    uVar6 = *(uint3 *)(lVar39 + 0xe8);
    if ((uVar6 & 0x8000) != 0) break;
    lVar39 = *(long *)(lVar39 + 0x30);
  } while (lVar39 != 0);
  cVar24 = (char)local_104;
  fVar57 = (float)((uint)local_b8._0_4_ >> 8 & 0xff) / DAT_005de3b0;
  fVar53 = (float)(local_108 & 0xff) / DAT_005de3b0;
  fVar53 = ((float)(int)local_d8._0_4_ / DAT_005de3b0) * ((float)(int)local_d8._0_4_ / DAT_005de3b0)
           * _DAT_005de3bc + fVar57 * fVar57 * _DAT_005de3b8 + fVar53 * fVar53 * _DAT_005de3b4;
  if (fVar53 < 0.0) {
    fVar53 = sqrtf(fVar53);
  }
  else {
    fVar53 = SQRT(fVar53);
  }
  puVar33 = &_ZN4juce7ColoursL5whiteE_474;
  if (DAT_005d9044 <= fVar53) {
    puVar33 = &_ZN4juce7ColoursL5blackE_344;
  }
  uVar26 = 0xcc000000;
  if (SUB41(fVar58,0) != '\0' || cVar24 != '\0') {
    uVar26 = 0xff000000;
  }
  uVar50 = 0x4c000000;
  if ((uVar6 & 0x8000) == 0) {
    uVar50 = uVar26;
  }
  uVar50 = *puVar33 & 0xffffff | uVar50;
  do {
    lVar38 = *(long *)(lVar38 + 0x30);
    if (lVar38 == 0) goto LAB_001f96d5;
    this_00 = (Component *)__dynamic_cast(lVar38,&Component::typeinfo,&TabbedButtonBar::typeinfo,0);
  } while (this_00 == (Component *)0x0);
                    /* try { // try from 001f9515 to 001f951c has its CatchHandler @ 001f9e77 */
  (**(code **)(**(long **)(local_1c8._0_8_ + 0x1c0) + 0x10))(local_198);
                    /* try { // try from 001f9527 to 001f952c has its CatchHandler @ 001f9e6f */
  uVar26 = (**(code **)((long)local_198 + 0x30))(&uStack_190);
                    /* try { // try from 001f9534 to 001f9539 has its CatchHandler @ 001f9e67 */
  (**(code **)((long)local_198 + 0x58))(&uStack_190);
  uVar48 = (uVar26 & 0xff) * 2 + 0x1005813;
  local_180 = (long *)((ulong)local_180 & 0xffffffffffffff);
  pbVar27 = (byte *)((long)&local_180 + 1);
  uVar26 = uVar48;
  do {
    pbVar42 = pbVar27;
    pbVar42[5] = "0123456789abcdef"[uVar26 & 0xf];
    pbVar27 = pbVar42 + -1;
    bVar51 = 0xf < uVar26;
    uVar26 = uVar26 >> 4;
  } while (bVar51);
  pbVar42[3] = 0x72;
  pbVar42[4] = 0x5f;
  pbVar27[0] = 0x6a;
  pbVar27[1] = 99;
  pbVar27[2] = 99;
  pbVar27[3] = 0x6c;
  Identifier::Identifier((Identifier *)&local_98,pbVar27);
  if ((long)*(int *)(this_00 + 0xd4) == 0) {
    bVar51 = false;
  }
  else {
    lVar38 = 0;
    do {
      bVar51 = *(undefined1 **)(*(long *)(this_00 + 200) + lVar38) == local_98;
      if (bVar51) break;
      bVar52 = (long)*(int *)(this_00 + 0xd4) * 0x18 + -0x18 != lVar38;
      lVar38 = lVar38 + 0x18;
    } while (bVar52);
  }
  if (local_98 != &DAT_0061ac58) {
    piVar45 = (int *)(local_98 + -0x10);
    LOCK();
    iVar32 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar32 == 0) {
      operator_delete__(piVar45);
    }
  }
  if (bVar51) {
    uVar30 = Component::findColour(this_00,uVar48,'\0');
    uVar50 = (uint)uVar30;
  }
  else {
    uVar26 = *(uint *)(local_c0 + 0xf4);
    if (0 < (int)uVar26) {
      lVar38 = *(long *)(local_c0 + 0xe8);
      uVar41 = uVar26;
      uVar44 = 0;
      do {
        while( true ) {
          if (*(uint *)(lVar38 + (long)(int)uVar44 * 8) == uVar48) {
            if (-1 < (int)uVar44) {
              uVar41 = 0;
              uVar50 = uVar26;
              goto LAB_001f9690;
            }
            goto LAB_001f96d5;
          }
          uVar43 = (int)(uVar44 + uVar41) / 2;
          if (uVar43 == uVar44) goto LAB_001f96d5;
          if (*(int *)(lVar38 + (long)(int)uVar43 * 8) <= (int)uVar48) break;
          uVar41 = uVar43;
          if ((int)uVar43 <= (int)uVar44) goto LAB_001f96d5;
        }
        uVar44 = uVar43;
      } while ((int)uVar43 < (int)uVar41);
    }
  }
LAB_001f96d5:
  _local_198 = ZEXT816(0);
  uVar22 = local_1c8._0_8_;
  TabBarButton::calcAreas
            ((TabBarButton *)local_1c8._0_8_,(undefined1 (*) [16])&local_98,
             (undefined1 (*) [16])local_198);
  auVar55 = _local_198;
  fVar58 = (float)local_198._8_4_;
  local_1e8 = (float)local_198._12_4_;
  local_1d8._4_4_ = in_XMM3_Db;
  local_1d8._0_4_ = local_1e8;
  local_1d8._8_4_ = in_XMM3_Dc;
  local_1d8._12_4_ = in_XMM3_Dd;
  local_d8 = ZEXT416((uint)fVar58);
  if ((*(uint *)(*(long *)(uVar22 + 0x1f8) + 0x150) & 0xfffffffe) != 2) {
    local_d8._4_4_ = in_XMM3_Db;
    local_d8._0_4_ = local_1e8;
    local_d8._8_4_ = in_XMM3_Dc;
    local_d8._12_4_ = in_XMM3_Dd;
    local_1d8 = ZEXT416((uint)fVar58);
  }
  local_128 = CONCAT44(local_128._4_4_,fVar58);
  local_1b8 = (void *)0x0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 9;
                    /* try { // try from 001f9777 to 001f9785 has its CatchHandler @ 001f9ebc */
  FontOptions::FontOptions(DAT_005d9044 * local_d8._0_4_,(FontOptions *)&local_98,0);
                    /* try { // try from 001f9786 to 001f979c has its CatchHandler @ 001f9eaa */
  Component::withDefaultMetrics((undefined8 *)local_198,local_1c8._0_8_,(long *)&local_98);
                    /* try { // try from 001f979d to 001f97ab has its CatchHandler @ 001f9e9b */
  Font::Font((Font *)&local_1f0,(long *)local_198);
  if (local_168 != (void *)0x0) {
    operator_delete(local_168);
  }
  plVar36 = (long *)CONCAT44(uStack_174,local_178);
  for (plVar37 = local_180; plVar37 != plVar36; plVar37 = plVar37 + 1) {
    piVar45 = (int *)(*plVar37 + -0x10);
    if (piVar45 != &emptyString) {
      LOCK();
      iVar32 = *piVar45;
      *piVar45 = *piVar45 + -1;
      UNLOCK();
      if (iVar32 == 0) {
        operator_delete__(piVar45);
      }
    }
  }
  if (local_180 != (long *)0x0) {
    operator_delete(local_180);
  }
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar36 = local_188 + 1;
    *(int *)plVar36 = (int)*plVar36 + -1;
    UNLOCK();
    if ((int)*plVar36 == 0) {
      (**(code **)(*local_188 + 8))();
    }
  }
  piVar45 = (int *)(uStack_190 + -0x10);
  if (piVar45 != &emptyString) {
    LOCK();
    iVar32 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar32 == 0) {
      operator_delete__(piVar45);
    }
  }
  piVar45 = (int *)((long)local_198 + -0x10);
  if (piVar45 != &emptyString) {
    LOCK();
    iVar32 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar32 == 0) {
      operator_delete__(piVar45);
    }
  }
  plVar36 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar36 = local_80;
  }
  for (; plVar36 != local_78; plVar36 = plVar36 + 1) {
    piVar45 = (int *)(*plVar36 + -0x10);
    if (piVar45 != &emptyString) {
      LOCK();
      iVar32 = *piVar45;
      *piVar45 = *piVar45 + -1;
      UNLOCK();
      if (iVar32 == 0) {
        operator_delete__(piVar45);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar36 = local_88 + 1;
    *(int *)plVar36 = (int)*plVar36 + -1;
    UNLOCK();
    if ((int)*plVar36 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  piVar45 = (int *)(local_90 + -0x10);
  if (piVar45 != &emptyString) {
    LOCK();
    iVar32 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar32 == 0) {
      operator_delete__(piVar45);
    }
  }
  piVar45 = (int *)(local_98 + -0x10);
  if (piVar45 != &emptyString) {
    LOCK();
    iVar32 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar32 == 0) {
      operator_delete__(piVar45);
    }
  }
  lVar38 = Component::currentlyFocusedComponent;
  if (1 < *(int *)(local_1f0 + 8)) {
                    /* try { // try from 001f992a to 001f9936 has its CatchHandler @ 001f9ed6 */
    Font::SharedFontInternal::copy(&local_100,(long)local_1f0);
    pSVar46 = local_1f0;
    local_1f0 = local_100;
    local_100 = pSVar46;
    if (pSVar46 != (SharedFontInternal *)0x0) {
      LOCK();
      pSVar1 = pSVar46 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        (**(code **)(*(long *)pSVar46 + 8))();
      }
    }
  }
                    /* try { // try from 001f9973 to 001f9977 has its CatchHandler @ 001f9ed6 */
  Font::SharedFontInternal::setUnderline(local_1f0,lVar38 == local_1c8._0_8_);
  pSVar46 = local_1f0;
  __mutex = (pthread_mutex_t *)(local_1f0 + 0x80);
  pthread_mutex_lock(__mutex);
  plVar36 = *(long **)(pSVar46 + 0x10);
  *(long *)(pSVar46 + 0x10) = 0;
  if (plVar36 != (long *)0x0) {
    LOCK();
    plVar37 = plVar36 + 1;
    *(int *)plVar37 = (int)*plVar37 + -1;
    UNLOCK();
    if ((int)*plVar37 == 0) {
      (**(code **)(*plVar36 + 8))();
    }
  }
  pthread_mutex_unlock(__mutex);
  local_100 = (SharedFontInternal *)&DAT_0061ac58;
  local_f8 = 0x2400000000;
  local_f0 = 1;
  local_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_dc = 0;
                    /* try { // try from 001f9a00 to 001f9a0c has its CatchHandler @ 001f9e96 */
  juce::String::trim((long *)&local_118,(long *)(local_1c8._0_8_ + 0x158));
                    /* try { // try from 001f9a15 to 001f9aeb has its CatchHandler @ 001f9edb */
  local_110[0] = uVar50;
  juce::String::operator+=((String *)&local_100,(String *)&local_118);
  local_1e0 = CONCAT44(local_1e0._4_4_,(float)auVar55._0_4_);
  local_1c8 = ZEXT416((uint)(float)auVar55._4_4_);
  uVar26 = 0;
  pcVar31 = local_118;
  do {
    cVar24 = *pcVar31;
    if (cVar24 < '\0') {
      do {
        pbVar27 = (byte *)(pcVar31 + 1);
        pcVar31 = pcVar31 + 1;
      } while ((*pbVar27 & 0xc0) == 0x80);
    }
    else {
      pcVar31 = pcVar31 + 1;
      if (cVar24 == '\0') goto LAB_001f9acd;
    }
    uVar26 = uVar26 + 1;
  } while( true );
  while (uVar41 = uVar44, (int)uVar44 < (int)uVar50) {
LAB_001f9690:
    if (*(uint *)(lVar38 + (long)(int)uVar41 * 8) == uVar48) {
      if (-1 < (int)uVar41) {
        uVar50 = 0;
        if (uVar41 < uVar26) {
          uVar50 = *(uint *)(lVar38 + 4 + (ulong)uVar41 * 8);
        }
        goto LAB_001f96d5;
      }
      break;
    }
    uVar44 = (int)(uVar41 + uVar50) / 2;
    if (uVar44 == uVar41) break;
    if ((int)uVar48 < *(int *)(lVar38 + (long)(int)uVar44 * 8)) {
      uVar50 = uVar44;
      if ((int)uVar44 <= (int)uVar41) break;
      goto LAB_001f9690;
    }
  }
  uVar50 = _ZN4juce7ColoursL5blackE_14;
  goto LAB_001f96d5;
LAB_001f9acd:
  (anonymous_namespace)::appendRange
            ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)&uStack_e8,
             uVar26,(long *)&local_1f0,local_110);
  piVar45 = (int *)(local_118 + -0x10);
  if (piVar45 != &emptyString) {
    LOCK();
    iVar32 = *piVar45;
    *piVar45 = *piVar45 + -1;
    UNLOCK();
    if (iVar32 == 0) {
      operator_delete__(piVar45);
    }
  }
  pGVar35 = local_120;
  pvVar23 = local_1b8;
  if (0 < (int)uStack_1b0._4_4_) {
    lVar38 = (ulong)uStack_1b0._4_4_ + 1;
    do {
      ContainerDeletePolicy<juce::TextLayout::Line>::destroy
                (*(long **)((long)pvVar23 + (ulong)((int)lVar38 - 2) * 8));
      lVar38 = lVar38 + -1;
    } while (1 < lVar38);
    uStack_1b0 = uStack_1b0 & 0xffffffff;
  }
  if ((int)uStack_1b0 != 0) {
    free(local_1b8);
    local_1b8 = (void *)0x0;
  }
  uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
  local_1a8 = CONCAT44(0x4b189680,local_1d8._0_4_);
  local_1a0 = local_f8._4_4_;
                    /* try { // try from 001f9b8f to 001f9ba0 has its CatchHandler @ 001f9e94 */
  TextLayout::createStandardLayout((TextLayout *)&local_1b8,(ulong *)&local_100);
  TextLayout::recalculateSize((TextLayout *)&local_1b8);
  if (0 < local_dc) {
    lVar38 = 8;
    lVar39 = 0;
    do {
      plVar36 = *(long **)(CONCAT44(uStack_e4,uStack_e8) + lVar38);
      if (plVar36 != (long *)0x0) {
        LOCK();
        plVar37 = plVar36 + 1;
        *(int *)plVar37 = (int)*plVar37 + -1;
        UNLOCK();
        if ((int)*plVar37 == 0) {
          (**(code **)(*plVar36 + 8))();
        }
      }
      lVar39 = lVar39 + 1;
      lVar38 = lVar38 + 0x18;
    } while (lVar39 < local_dc);
  }
  local_dc = 0;
  free((void *)CONCAT44(uStack_e4,uStack_e8));
  pSVar46 = local_100 + -0x10;
  if (pSVar46 != (SharedFontInternal *)&emptyString) {
    LOCK();
    iVar32 = *(int *)pSVar46;
    *(int *)pSVar46 = *(int *)pSVar46 + -1;
    UNLOCK();
    if (iVar32 == 0) {
      operator_delete__(pSVar46);
    }
  }
  uVar26 = local_1e4;
  if (local_1f0 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar46 = local_1f0 + 8;
    *(int *)pSVar46 = *(int *)pSVar46 + -1;
    UNLOCK();
    if (*(int *)pSVar46 == 0) {
      (**(code **)(*(long *)local_1f0 + 8))();
    }
  }
  _local_198 = ZEXT416((uint)DAT_005d9038);
  local_188 = (long *)0x3f800000;
  if (uVar26 < 2) {
    uStack_190._0_4_ = (float)local_1e0;
    local_198 = (undefined1  [8])0x3f800000;
    uStack_190._4_4_ = 0;
    fVar58 = (float)local_1c8._0_4_;
    fVar53 = DAT_005d9038;
  }
  else if (uVar26 == 2) {
    local_198._4_4_ = _UNK_005dcf14 * 1.0 + _UNK_005dcf24;
    local_198._0_4_ = _DAT_005dcf10 * 0.0 + _DAT_005dcf20;
    uStack_190._0_4_ = _UNK_005dcf18 * 0.0 + _UNK_005dcf28 + (float)local_1e0;
    uStack_190._4_4_ = _UNK_005dcf1c * 0.0 + _UNK_005dcf2c;
    fVar58 = (float)local_1c8._0_4_ + local_1e8 + DAT_005de400 * 0.0;
    fVar53 = DAT_005de400 * 1.0;
  }
  else {
    if (uVar26 != 3) goto LAB_001f9dcd;
    local_198._4_4_ = _UNK_005dcef4 * 1.0 + _UNK_005dcf04;
    local_198._0_4_ = _DAT_005dcef0 * 0.0 + _DAT_005dcf00;
    uStack_190._0_4_ = _UNK_005dcef8 * 0.0 + _UNK_005dcf08 + (float)local_1e0 + (float)local_128;
    uStack_190._4_4_ = _UNK_005dcefc * 0.0 + _UNK_005dcf0c;
    fVar58 = (float)local_1c8._0_4_ + DAT_005de400 * 0.0 + 0.0;
    fVar53 = DAT_005de400 * 1.0 + 0.0;
  }
  local_188 = (long *)CONCAT44(fVar58,fVar53);
LAB_001f9dcd:
  if (pGVar35[0x10] != (Graphics)0x0) {
    pGVar35[0x10] = (Graphics)0x0;
                    /* try { // try from 001f9de0 to 001f9e0f has its CatchHandler @ 001f9f27 */
    (**(code **)(**(long **)(pGVar35 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(pGVar35 + 8) + 0x20))(*(long **)(pGVar35 + 8),local_198);
  TextLayout::draw(0,CONCAT44(local_d8._0_4_,local_1d8._0_4_),(long *)&local_1b8,
                   *(long **)(pGVar35 + 8));
  pvVar23 = local_1b8;
  if (0 < (int)uStack_1b0._4_4_) {
    lVar38 = (ulong)uStack_1b0._4_4_ + 1;
    do {
      ContainerDeletePolicy<juce::TextLayout::Line>::destroy
                (*(long **)((long)pvVar23 + (ulong)((int)lVar38 - 2) * 8));
      lVar38 = lVar38 + -1;
    } while (1 < lVar38);
  }
  free(pvVar23);
  return;
}



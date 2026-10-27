// Function : drawScrollbar
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020bb00
// Prototype: undefined drawScrollbar(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, long param_4, Graphics * param_5, Component * param_6_00, int param_7, long param_8_00, int param_9, int param_10, char param_11, int param_12, int param_13)
// Body     : 0020bb00 - 0020c6f7


/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V2::drawScrollbar(juce::Graphics&, juce::ScrollBar&, int, int, int, int, bool,
   int, int, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::drawScrollbar
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,long param_4,
          Graphics *param_5,Component *param_6_00,int param_7,long param_8_00,int param_9,
          int param_10,char param_11,int param_12,int param_13)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar24;
  float fVar25;
  undefined1 local_148 [8];
  undefined8 uStack_140;
  undefined1 local_138;
  undefined1 uStack_137;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined2 uStack_12a;
  undefined4 local_128;
  undefined4 local_124;
  float local_118;
  float local_114;
  int local_110;
  int local_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  long local_f0;
  float *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined4 local_a0;
  float *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar23 = (undefined4)((ulong)param_3 >> 0x20);
  local_110 = param_7;
  local_f0 = param_8_00;
  local_70 = param_4;
  uVar4 = Component::findColour(param_6_00,0x1000300,'\0');
  Graphics::fillAll(param_5,(uint)uVar4);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (float *)0x0;
  uStack_90 = 0;
  local_78 = 1;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  local_c8 = 1;
  iVar10 = param_9;
  if (param_10 < param_9) {
    iVar10 = param_10;
  }
  fVar22 = DAT_005d9038;
  if (iVar10 < 0x10) {
    fVar22 = 0.0;
  }
  local_68 = (float)local_110;
  fVar21 = DAT_005d9038 + fVar22;
  local_108._0_4_ = fVar21;
  local_114 = (float)(int)local_f0;
  local_b8._0_4_ = fVar21 + fVar21;
  local_118 = (float)param_9;
  fVar25 = (float)param_10;
  fVar21 = local_118 - (fVar22 + fVar22);
  fVar24 = fVar25 - (fVar22 + fVar22);
  local_10c = param_9;
  uStack_64 = uVar23;
  if (param_11 == '\0') {
    Path::addRoundedRectangle
              (fVar22 + local_68,fVar22 + local_114,fVar21,fVar24,DAT_005d9044 * fVar24,
               DAT_005d9044 * fVar24,(Path *)&local_98,1,'\x01','\x01','\x01');
    if (0 < param_13) {
      fVar22 = DAT_005d9044 * (fVar25 - (float)local_b8._0_4_);
      Path::addRoundedRectangle
                ((float)param_12 + (float)local_108._0_4_,(float)local_108._0_4_ + local_114,
                 (float)param_13 - (float)local_b8._0_4_,fVar25 - (float)local_b8._0_4_,fVar22,
                 fVar22,(Path *)&local_e8,1,'\x01','\x01','\x01');
    }
    local_b8 = ZEXT416((uint)((float)s_333_power__f_00652630._0_4_ * fVar25 + local_114));
    local_58 = ZEXT816(0);
    _local_108 = ZEXT416((uint)local_114);
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    uStack_60 = in_XMM2_Dc;
    uStack_5c = in_XMM2_Dd;
    Path::addRoundedRectangle
              (fVar22 + local_68,fVar22 + local_114,fVar21,fVar24,DAT_005d9044 * fVar21,
               DAT_005d9044 * fVar21,(Path *)&local_98,1,'\x01','\x01','\x01');
    if (0 < param_13) {
      fVar22 = DAT_005d9044 * (local_118 - (float)local_b8._0_4_);
      Path::addRoundedRectangle
                ((float)local_108._0_4_ + local_68,(float)param_12 + (float)local_108._0_4_,
                 local_118 - (float)local_b8._0_4_,(float)param_13 - (float)local_b8._0_4_,fVar22,
                 fVar22,(Path *)&local_e8,1,'\x01','\x01','\x01');
    }
    local_58 = ZEXT416((uint)((float)s_333_power__f_00652630._0_4_ * local_118 + local_68));
    local_b8 = ZEXT816(0);
    _local_108 = ZEXT816(0);
    local_48 = CONCAT44(uStack_64,local_68);
    uStack_40 = CONCAT44(uStack_5c,uStack_60);
  }
                    /* try { // try from 0020bdef to 0020bdfd has its CatchHandler @ 0020c717 */
  uVar4 = Component::findColour(param_6_00,0x1000400,'\0');
  uStack_12a = 0x31;
  uStack_12e = 0x30343030;
  uStack_136 = 0x5f726c63636a;
  uStack_130 = 0x3031;
                    /* try { // try from 0020be24 to 0020be30 has its CatchHandler @ 0020c728 */
  Identifier::Identifier((Identifier *)&local_a8,(byte *)&uStack_136);
  uVar18 = (uint)uVar4;
  if ((long)*(int *)(param_6_00 + 0xd4) == 0) {
    bVar19 = false;
  }
  else {
    lVar9 = 0;
    do {
      bVar19 = *(undefined1 **)(*(long *)(param_6_00 + 200) + lVar9) == local_a8;
      if (bVar19) break;
      bVar20 = (long)*(int *)(param_6_00 + 0xd4) * 0x18 + -0x18 != lVar9;
      lVar9 = lVar9 + 0x18;
    } while (bVar20);
  }
  if (local_a8 != &DAT_0061ac58) {
    piVar17 = (int *)(local_a8 + -0x10);
    LOCK();
    iVar10 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar17);
    }
  }
  if (bVar19) {
LAB_0020beac:
                    /* try { // try from 0020beac to 0020beba has its CatchHandler @ 0020c700 */
    uVar4 = Component::findColour(param_6_00,0x1000401,'\0');
    uVar12 = (uint)uVar4;
    uVar13 = uVar12;
  }
  else {
    if (0 < *(int *)(local_70 + 0xf4)) {
      iVar10 = *(int *)(local_70 + 0xf4);
      iVar8 = 0;
      do {
        while( true ) {
          if (*(int *)(*(long *)(local_70 + 0xe8) + (long)iVar8 * 8) == 0x1000401) {
            if (-1 < iVar8) goto LAB_0020beac;
            goto LAB_0020bf3e;
          }
          iVar14 = (iVar8 + iVar10) / 2;
          if (iVar14 == iVar8) goto LAB_0020bf3e;
          if (*(int *)(*(long *)(local_70 + 0xe8) + (long)iVar14 * 8) < 0x1000402) break;
          iVar10 = iVar14;
          if (iVar14 <= iVar8) goto LAB_0020bf3e;
        }
        iVar8 = iVar14;
      } while (iVar14 < iVar10);
    }
LAB_0020bf3e:
    uVar15 = uVar18 >> 0x18;
    uVar13 = (uint)(uVar4 >> 0x10);
    if (uVar18 < 0x1000000) {
      uVar7 = 0x44;
      uVar12 = 0;
      uVar2 = 0;
      uVar11 = 0;
    }
    else {
      uVar7 = (uVar15 ^ 0xff) * 0xbb >> 8 ^ 0xff;
      uVar2 = (uVar15 * 0xbb) / uVar7;
      uVar12 = ((uVar13 & 0xff) * uVar2 >> 8) + 0x4400;
      uVar11 = (uVar18 >> 8 & 0xff) * uVar2 & 0xffff00;
      uVar2 = (uVar18 & 0xff) * uVar2 >> 8;
    }
    if (uVar18 < 0x1000000) {
      uVar16 = 0x19;
      uVar15 = 0;
      uVar3 = 0;
      uVar13 = 0;
    }
    else {
      uVar16 = (uVar15 ^ 0xff) * 0xe6 >> 8 ^ 0xff;
      uVar3 = (uVar15 * 0xe6) / uVar16;
      uVar15 = ((uVar13 & 0xff) * uVar3 >> 8) + 0x1900;
      uVar13 = (uVar18 >> 8 & 0xff) * uVar3 & 0xffff00;
      uVar3 = (uVar18 & 0xff) * uVar3 >> 8;
    }
    uVar12 = uVar11 & 0xff00 | (uVar12 & 0xff) << 0x10 | uVar7 << 0x18 | uVar2 & 0xff;
    uVar13 = uVar3 & 0xff | uVar13 & 0xff00 | (uVar15 & 0xff) << 0x10 | uVar16 << 0x18;
  }
  local_148._4_4_ = local_108._0_4_;
  local_148._0_4_ = (float)local_48;
  uStack_140._0_4_ = local_58._0_4_;
  uStack_140._4_4_ = local_b8._0_4_;
  local_138 = 0;
  puVar5 = malloc(0x80);
  uStack_130 = SUB82(puVar5,0);
  uStack_12e = (undefined4)((ulong)puVar5 >> 0x10);
  uStack_12a = (undefined2)((ulong)puVar5 >> 0x30);
  local_128 = 8;
  *puVar5 = 0;
  *(uint *)(puVar5 + 1) = uVar12;
  local_124 = 2;
  puVar5[2] = 0x3ff0000000000000;
  *(uint *)(puVar5 + 3) = uVar13;
                    /* try { // try from 0020c0cc to 0020c0d8 has its CatchHandler @ 0020c708 */
  Graphics::setGradientFill(param_5,(undefined8 *)local_148);
  free((void *)CONCAT26(uStack_12a,CONCAT42(uStack_12e,uStack_130)));
                    /* try { // try from 0020c0ea to 0020c19c has its CatchHandler @ 0020c728 */
  cVar1 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar1 == '\0') {
    if ((long)uStack_90._4_4_ != 0) {
      pfVar6 = local_98;
      do {
        fVar22 = *pfVar6;
        if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
          if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
            if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
               ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc))))) goto LAB_0020c144;
          }
          _local_148 = ZEXT416((uint)DAT_005d9038);
          local_138 = 0;
          uStack_137 = 0;
          uStack_136 = 0x3f80;
          (**(code **)(**(long **)(param_5 + 8) + 200))(*(long **)(param_5 + 8),&local_98,local_148)
          ;
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_0020c144:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_98 + uStack_90._4_4_);
    }
  }
  uVar23 = _ZN4juce7ColoursL16transparentBlackE_5;
  if (param_11 == '\0') {
    local_108._4_4_ = DAT_005d98e8 * fVar25 + local_114;
    fStack_fc = local_114 + fVar25;
    fStack_100 = (float)local_58._0_4_;
    local_108._0_4_ = (float)local_48;
  }
  else {
    local_108._4_4_ = local_108._0_4_;
    fStack_100 = local_68 + local_118;
    fStack_fc = (float)local_b8._0_4_;
    local_108._0_4_ = DAT_005d98e8 * local_118 + local_68;
  }
  local_148._4_4_ = local_108._4_4_;
  local_148._0_4_ = local_108._0_4_;
  uStack_140._0_4_ = fStack_100;
  uStack_140._4_4_ = fStack_fc;
  local_138 = 0;
  puVar5 = malloc(0x80);
  uStack_130 = SUB82(puVar5,0);
  uStack_12e = (undefined4)((ulong)puVar5 >> 0x10);
  uStack_12a = (undefined2)((ulong)puVar5 >> 0x30);
  local_128 = 8;
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = uVar23;
  local_124 = 2;
  puVar5[2] = 0x3ff0000000000000;
  *(undefined4 *)(puVar5 + 3) = 0x19000000;
                    /* try { // try from 0020c262 to 0020c26e has its CatchHandler @ 0020c706 */
  Graphics::setGradientFill(param_5,(undefined8 *)local_148);
  free((void *)CONCAT26(uStack_12a,CONCAT42(uStack_12e,uStack_130)));
                    /* try { // try from 0020c280 to 0020c3e9 has its CatchHandler @ 0020c728 */
  cVar1 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar1 == '\0') {
    if ((long)uStack_90._4_4_ != 0) {
      pfVar6 = local_98;
      do {
        fVar22 = *pfVar6;
        if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
          if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
            if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
               ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc))))) goto LAB_0020c2d4;
          }
          _local_148 = ZEXT416((uint)DAT_005d9038);
          local_138 = 0;
          uStack_137 = 0;
          uStack_136 = 0x3f80;
          (**(code **)(**(long **)(param_5 + 8) + 200))(*(long **)(param_5 + 8),&local_98,local_148)
          ;
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_0020c2d4:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_98 + uStack_90._4_4_);
    }
  }
  Graphics::setColour(param_5,uVar18);
  cVar1 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar1 == '\0') {
    if ((long)uStack_e0._4_4_ != 0) {
      pfVar6 = local_e8;
      do {
        fVar22 = *pfVar6;
        if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
          if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
            if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
               ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc))))) goto LAB_0020c394;
          }
          _local_148 = ZEXT416((uint)DAT_005d9038);
          local_138 = 0;
          uStack_137 = 0;
          uStack_136 = 0x3f80;
          (**(code **)(**(long **)(param_5 + 8) + 200))(*(long **)(param_5 + 8),&local_e8,local_148)
          ;
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_0020c394:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_e8 + uStack_e0._4_4_);
    }
  }
  uVar23 = _ZN4juce7ColoursL16transparentBlackE_5;
  _local_148 = _local_108;
  local_138 = 0;
  puVar5 = malloc(0x80);
  uStack_130 = SUB82(puVar5,0);
  uStack_12e = (undefined4)((ulong)puVar5 >> 0x10);
  uStack_12a = (undefined2)((ulong)puVar5 >> 0x30);
  local_128 = 8;
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 0x10000000;
  local_124 = 2;
  puVar5[2] = 0x3ff0000000000000;
  *(undefined4 *)(puVar5 + 3) = uVar23;
                    /* try { // try from 0020c433 to 0020c43f has its CatchHandler @ 0020c704 */
  Graphics::setGradientFill(param_5,(undefined8 *)local_148);
  free((void *)CONCAT26(uStack_12a,CONCAT42(uStack_12e,uStack_130)));
  if (param_5[0x10] != (Graphics)0x0) {
    param_5[0x10] = (Graphics)0x0;
                    /* try { // try from 0020c45d to 0020c45f has its CatchHandler @ 0020c702 */
    (**(code **)(**(long **)(param_5 + 8) + 0x70))();
  }
  param_5[0x10] = (Graphics)0x1;
  if (param_11 == '\0') {
    local_148._4_4_ = param_10 / 2 + (int)local_f0;
    local_148._0_4_ = local_110;
    uStack_140._4_4_ = param_10;
    uStack_140._0_4_ = local_10c;
    param_5[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_5 + 8) + 0x70))();
    (**(code **)(**(long **)(param_5 + 8) + 0x30))(*(long **)(param_5 + 8),local_148);
  }
  else {
    uStack_140._4_4_ = param_10;
    uStack_140._0_4_ = local_10c;
    local_148 = (undefined1  [8])((ulong)(uint)(local_10c / 2 + local_110) | local_f0 << 0x20);
    param_5[0x10] = (Graphics)0x0;
                    /* try { // try from 0020c4b2 to 0020c5c9 has its CatchHandler @ 0020c71b */
    (**(code **)(**(long **)(param_5 + 8) + 0x70))();
    (**(code **)(**(long **)(param_5 + 8) + 0x30))(*(long **)(param_5 + 8),local_148);
  }
  cVar1 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar1 == '\0') {
    if ((long)uStack_e0._4_4_ != 0) {
      pfVar6 = local_e8;
      do {
        fVar22 = *pfVar6;
        if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
          if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
            if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
               ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc))))) goto LAB_0020c574;
          }
          _local_148 = ZEXT416((uint)DAT_005d9038);
          local_138 = 0;
          uStack_137 = 0;
          uStack_136 = 0x3f80;
          (**(code **)(**(long **)(param_5 + 8) + 200))(*(long **)(param_5 + 8),&local_e8,local_148)
          ;
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_0020c574:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_e8 + uStack_e0._4_4_);
    }
  }
  if (param_5[0x10] == (Graphics)0x0) {
                    /* try { // try from 0020c5df to 0020c5e1 has its CatchHandler @ 0020c6f8 */
    (**(code **)(**(long **)(param_5 + 8) + 0x78))();
  }
  else {
    param_5[0x10] = (Graphics)0x0;
  }
                    /* try { // try from 0020c5e2 to 0020c5ee has its CatchHandler @ 0020c728 */
  Graphics::setColour(param_5,0x4c000000);
  local_a8 = (undefined1 *)0x3ecccccd;
  local_a0 = 0;
  _local_148 = ZEXT416((uint)DAT_005d9038);
  local_138 = 0;
  uStack_137 = 0;
  uStack_136 = 0x3f80;
                    /* try { // try from 0020c623 to 0020c6bb has its CatchHandler @ 0020c719 */
  cVar1 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
  if (cVar1 == '\0') {
    if ((long)uStack_e0._4_4_ != 0) {
      pfVar6 = local_e8;
      do {
        fVar22 = *pfVar6;
        if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
          if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
            if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
               ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc))))) goto LAB_0020c674;
          }
          (**(code **)(**(long **)(param_5 + 8) + 0xd8))
                    (*(long **)(param_5 + 8),&local_e8,&local_a8,local_148);
          break;
        }
        pfVar6 = pfVar6 + 2;
LAB_0020c674:
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != local_e8 + uStack_e0._4_4_);
    }
  }
  uStack_e0 = uStack_e0 & 0xffffffff;
  free(local_e8);
  uStack_90 = uStack_90 & 0xffffffff;
  free(local_98);
  return;
}



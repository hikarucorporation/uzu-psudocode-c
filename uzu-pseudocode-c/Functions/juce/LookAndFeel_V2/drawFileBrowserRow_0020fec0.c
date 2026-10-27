// Function : drawFileBrowserRow
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020fec0
// Prototype: undefined drawFileBrowserRow(LookAndFeel_V2 * this, Graphics * param_1, int param_2, int param_3, undefined8 param_5_00, long * param_5, long * param_6, long * param_7, long * param_8, byte param_9, char param_10, undefined8 param_11, undefined8 param_12)
// Body     : 0020fec0 - 00210494


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::drawFileBrowserRow(juce::Graphics&, int, int, juce::File const&,
   juce::String const&, juce::Image*, juce::String const&, juce::String const&, bool, bool, int,
   juce::DirectoryContentsDisplayComponent&) */

void __thiscall
juce::LookAndFeel_V2::drawFileBrowserRow
          (LookAndFeel_V2 *this,Graphics *param_1,int param_2,int param_3,undefined8 param_5_00,
          long *param_5,long *param_6,long *param_7,long *param_8,byte param_9,char param_10,
          undefined8 param_11,undefined8 param_12)

{
  undefined1 auVar1 [16];
  char cVar2;
  Component *this_00;
  ulong uVar3;
  Component *pCVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar13;
  double dVar12;
  int iVar17;
  double dVar14;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long *local_38;
  
  local_38 = param_5;
  this_00 = (Component *)
            __dynamic_cast(param_12,&DirectoryContentsDisplayComponent::typeinfo,
                           &Component::typeinfo,0xfffffffffffffffe);
  if (param_10 != '\0') {
    if (this_00 == (Component *)0x0) {
      uVar6 = *(uint *)(this + 0xf4);
      if (0 < (int)uVar6) {
        lVar5 = *(long *)(this + 0xe8);
        uVar8 = uVar6;
        uVar7 = 0;
        do {
          while( true ) {
            if (*(int *)(lVar5 + (long)(int)uVar7 * 8) == 0x1000540) {
              if (-1 < (int)uVar7) {
                uVar8 = 0;
                if (uVar7 < uVar6) {
                  uVar8 = *(uint *)(lVar5 + 4 + (ulong)uVar7 * 8);
                }
                goto LAB_0020ffa6;
              }
              goto LAB_0020ff9c;
            }
            uVar9 = (int)(uVar7 + uVar8) / 2;
            if (uVar9 == uVar7) goto LAB_0020ff9c;
            if (*(int *)(lVar5 + (long)(int)uVar9 * 8) < 0x1000541) break;
            uVar8 = uVar9;
            if ((int)uVar9 <= (int)uVar7) goto LAB_0020ff9c;
          }
          uVar7 = uVar9;
        } while ((int)uVar9 < (int)uVar8);
      }
LAB_0020ff9c:
      uVar8 = _ZN4juce7ColoursL5blackE_14;
    }
    else {
      uVar3 = Component::findColour(this_00,0x1000540,'\0');
      uVar8 = (uint)uVar3;
    }
LAB_0020ffa6:
    Graphics::fillAll(param_1,uVar8);
  }
  Graphics::setColour(param_1,_ZN4juce7ColoursL5blackE_14);
  if ((param_6 == (long *)0x0) || (lVar5 = *param_6, lVar5 == 0)) {
    pCVar4 = (Component *)(**(code **)(*(long *)this + 0x160 + (ulong)(param_9 ^ 1) * 8))(this);
    if (pCVar4 == (Component *)0x0) goto LAB_002101a5;
    auVar22 = (**(code **)(*(long *)pCVar4 + 0x1a8))(pCVar4);
    auVar16._0_8_ = auVar22._8_8_;
    auVar16._8_8_ = extraout_XMM1_Qb;
    local_4c = 0.0;
    local_50 = _DAT_005dcc70;
    local_40 = _UNK_005dcc74;
    if (auVar22._8_4_ <= 0.0) {
      local_48 = 0.0;
      local_3c = 0.0;
    }
    else {
      local_48 = 0.0;
      local_3c = 0.0;
      if (0.0 < auVar22._12_4_) {
        auVar20._4_4_ = (float)param_3 + DAT_0065b5a8;
        auVar20._0_4_ = _DAT_005dd080;
        auVar20._8_4_ = _UNK_005dd084;
        auVar20._12_4_ = 0;
        auVar16 = divps(auVar20,auVar16);
        fVar21 = auVar16._4_4_;
        if (auVar16._0_4_ <= auVar16._4_4_) {
          fVar21 = auVar16._0_4_;
        }
        local_50 = DAT_005d9038;
        if (fVar21 <= DAT_005d9038) {
          local_50 = fVar21;
        }
        local_4c = local_50 * 0.0;
        local_48 = ((DAT_005de460 - auVar22._8_4_ * local_50) * DAT_005d9044 + DAT_005d9078) -
                   local_50 * auVar22._0_4_;
        local_3c = ((((float)param_3 + DAT_0065b5a8) - auVar22._12_4_ * local_50) * DAT_005d9044 +
                   DAT_005d9078) - auVar22._4_4_ * local_50;
        local_40 = local_50;
      }
    }
    local_44 = local_4c;
    Drawable::nonConstDraw(pCVar4,(long)param_1,&local_50);
    if (param_10 == '\0') goto LAB_00210281;
LAB_002101b3:
    if (this_00 == (Component *)0x0) {
      uVar6 = *(uint *)(this + 0xf4);
      if (0 < (int)uVar6) {
        lVar5 = *(long *)(this + 0xe8);
        uVar8 = uVar6;
        uVar7 = 0;
        do {
          while( true ) {
            if (*(int *)(lVar5 + (long)(int)uVar7 * 8) == 0x1000542) goto LAB_002102f6;
            uVar9 = (int)(uVar7 + uVar8) / 2;
            if (uVar9 == uVar7) goto LAB_0021030c;
            if (*(int *)(lVar5 + (long)(int)uVar9 * 8) < 0x1000543) break;
            uVar8 = uVar9;
            if ((int)uVar9 <= (int)uVar7) goto LAB_0021030c;
          }
          uVar7 = uVar9;
        } while ((int)uVar9 < (int)uVar8);
      }
      goto LAB_0021030c;
    }
    uVar6 = 0x1000542;
  }
  else {
    iVar11 = (int)*(undefined8 *)(lVar5 + 0x10);
    auVar22._0_4_ = -(uint)(iVar11 < _DAT_00654cd0);
    iVar17 = (int)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20);
    iVar13 = -(uint)(iVar17 < _UNK_00654cd4);
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_4_ = iVar13;
    auVar22._12_4_ = iVar13;
    iVar13 = movmskpd((int)lVar5,auVar22);
    if (iVar13 == 0) {
      auVar15._4_4_ = (float)(param_3 + -4);
      auVar15._0_4_ = (float)_DAT_005dd060;
      fVar18 = (float)iVar11;
      fVar19 = (float)iVar17;
      auVar15._8_4_ = (float)_UNK_005dd064;
      auVar15._12_4_ = 0;
      auVar1._4_4_ = fVar19;
      auVar1._0_4_ = fVar18;
      auVar1._8_8_ = 0;
      auVar16 = divps(auVar15,auVar1);
      fVar21 = auVar16._4_4_;
      if (auVar16._0_4_ <= auVar16._4_4_) {
        fVar21 = auVar16._0_4_;
      }
      local_50 = DAT_005d9038;
      if (fVar21 <= DAT_005d9038) {
        local_50 = fVar21;
      }
      local_4c = local_50 * 0.0;
      local_48 = (((float)_DAT_005dd060 - fVar18 * local_50) * _DAT_005d9920 + _DAT_005dd070) -
                 local_4c;
      local_3c = (((float)(param_3 + -4) - fVar19 * local_50) * _UNK_005d9924 + _UNK_005dd074) -
                 local_4c;
      local_40 = local_50;
    }
    else {
      local_48 = 0.0;
      local_3c = 0.0;
      local_4c = 0.0;
      local_50 = _DAT_005dcc70;
      local_40 = _UNK_005dcc74;
    }
    local_44 = local_4c;
    cVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
    if (cVar2 == '\0') {
      (**(code **)(**(long **)(param_1 + 8) + 0xe0))(*(long **)(param_1 + 8),param_6,&local_50);
    }
LAB_002101a5:
    if (param_10 != '\0') goto LAB_002101b3;
LAB_00210281:
    if (this_00 == (Component *)0x0) {
      uVar6 = *(uint *)(this + 0xf4);
      if (0 < (int)uVar6) {
        lVar5 = *(long *)(this + 0xe8);
        uVar7 = 0;
        uVar8 = uVar6;
        do {
          while( true ) {
            if (*(int *)(lVar5 + (long)(int)uVar7 * 8) == 0x1000541) goto LAB_002102f6;
            uVar9 = (int)(uVar7 + uVar8) / 2;
            if (uVar9 == uVar7) goto LAB_0021030c;
            if (*(int *)(lVar5 + (long)(int)uVar9 * 8) < 0x1000542) break;
            uVar8 = uVar9;
            if ((int)uVar9 <= (int)uVar7) goto LAB_0021030c;
          }
          uVar7 = uVar9;
        } while ((int)uVar9 < (int)uVar8);
      }
      goto LAB_0021030c;
    }
    uVar6 = 0x1000541;
  }
  uVar3 = Component::findColour(this_00,uVar6,'\0');
  uVar8 = (uint)uVar3;
LAB_00210316:
  Graphics::setColour(param_1,uVar8);
  Graphics::setFont((float)s_333_power__f_00652630._0_4_ * (float)param_3,param_1);
  if ((param_2 < 0x1c3) || (param_9 != 0)) {
    iVar13 = param_2 + -0x20;
    uVar3 = 0x20;
    puVar10 = (uint *)0x21;
    param_8 = local_38;
  }
  else {
    dVar14 = (double)((float)s_333_power__f_00652630._0_4_ * (float)param_2) + DAT_005d9098;
    dVar12 = (double)((float)param_2 * DAT_005de3cc) + DAT_005d9098;
    iVar11 = SUB84(dVar14,0);
    Graphics::drawFittedText
              (0,DAT_005d9960,(long)param_1,local_38,0x20,CONCAT44(param_3,iVar11 + -0x20),
               (uint *)0x21,1);
    Graphics::setFont((float)param_3 * DAT_005d9044,param_1);
    Graphics::setColour(param_1,_ZN4juce7ColoursL8darkgreyE_31);
    iVar13 = SUB84(dVar12,0);
    Graphics::drawFittedText
              (0,DAT_005d9960,(long)param_1,param_7,(ulong)dVar14 & 0xffffffff,
               CONCAT44(param_3,(iVar13 - iVar11) + -8),(uint *)0x22,1);
    iVar13 = (param_2 - iVar13) + -8;
    uVar3 = (ulong)dVar12 & 0xffffffff;
    puVar10 = (uint *)0x22;
  }
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,param_8,uVar3,CONCAT44(param_3,iVar13),puVar10,1);
  return;
LAB_002102f6:
  if (-1 < (int)uVar7) {
    uVar8 = 0;
    if (uVar7 < uVar6) {
      uVar8 = *(uint *)(lVar5 + 4 + (ulong)uVar7 * 8);
    }
    goto LAB_00210316;
  }
LAB_0021030c:
  uVar8 = _ZN4juce7ColoursL5blackE_14;
  goto LAB_00210316;
}



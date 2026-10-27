// Function : drawButtonBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 00217890
// Prototype: undefined drawButtonBackground(undefined8 param_1_00, undefined8 param_2, long param_3, undefined4 * param_4, char param_5, char param_6)
// Body     : 00217890 - 00217894


/* non-virtual thunk to juce::LookAndFeel_V2::drawButtonBackground(juce::Graphics&, juce::Button&,
   juce::Colour const&, bool, bool) */

void __thiscall
juce::LookAndFeel_V2::drawButtonBackground
          (undefined8 param_1_00,undefined8 param_2,long param_3,undefined4 *param_4,char param_5,
          char param_6)

{
  uint3 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  uint auStack_58 [2];
  uint auStack_50 [2];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 uStack_38;
  
  iVar2 = *(int *)(param_3 + 0x44);
  lVar6 = param_3;
  do {
    puVar1 = (uint3 *)(lVar6 + 0xe8);
    if ((*puVar1 & 0x8000) != 0) break;
    lVar6 = *(long *)(lVar6 + 0x30);
  } while (lVar6 != 0);
  fStack_3c = DAT_005de45c;
  if (param_5 == '\0' && param_6 == '\0') {
    fStack_3c = (float)s_333_power__f_00652630._0_4_;
  }
  if ((*puVar1 & 0x8000) != 0) {
    fStack_3c = DAT_005d98f0;
  }
  fStack_48 = DAT_005d9044 * fStack_3c;
  uVar3 = *(uint *)(param_3 + 0x1b0);
  fStack_40 = fStack_48;
  if ((uVar3 & 1) != 0) {
    fStack_40 = DAT_005d9068;
  }
  fStack_44 = fStack_48;
  if ((uVar3 & 4) != 0) {
    fStack_44 = DAT_005d9068;
  }
  for (lVar6 = Component::currentlyFocusedComponent; uStack_38 = param_2, lVar6 != param_3;
      lVar6 = *(long *)(lVar6 + 0x30)) {
    if (lVar6 == 0) {
      uVar4 = Colour::withMultipliedSaturation(DAT_005de3c8,*param_4);
      auStack_50[0] = uVar4;
      if (param_5 == '\0' && param_6 == '\0') goto LAB_0020cbc0;
      goto LAB_0020cb9f;
    }
  }
  uVar4 = Colour::withMultipliedSaturation(DAT_005de3e8,*param_4);
  auStack_50[0] = uVar4;
  if (param_5 != '\0' || param_6 != '\0') {
LAB_0020cb9f:
    if (param_6 == '\0') {
      fVar8 = DAT_005d9068;
    }
    else {
      fVar8 = DAT_005d9070;
    }
    uVar4 = Colour::contrasting(fVar8,(Colour *)auStack_50);
  }
LAB_0020cbc0:
  lVar6 = param_3;
  do {
    fVar8 = DAT_005d9044;
    if ((*(ushort *)(lVar6 + 0xe8) & 0x8000) != 0) goto LAB_0020cbfb;
    lVar6 = *(long *)(lVar6 + 0x30);
  } while (lVar6 != 0);
  fVar8 = DAT_005d9038;
LAB_0020cbfb:
  fVar9 = fStack_48;
  if ((uVar3 & 8) != 0) {
    fVar9 = DAT_005d9068;
  }
  iVar5 = SUB84((double)(fVar8 * (float)(uVar4 >> 0x18)) + DAT_005d9098,0);
  iVar7 = 0xff;
  if (iVar5 < 0xff) {
    iVar7 = iVar5;
  }
  auStack_58[0] = uVar4 & 0xffffff | iVar7 << 0x18;
  uVar3 = *(uint *)(param_3 + 0x1b0);
  drawGlassLozenge((ulong)(uint)fStack_40,(ulong)(uint)fStack_44,
                   (ulong)(uint)(((float)iVar2 - fStack_44) - fVar9),fStack_3c,DAT_005d9054,
                   uStack_38,auStack_58,(byte)uVar3 & 1,(byte)((uVar3 & 2) >> 1),
                   (ulong)((uVar3 & 4) >> 2),(uVar3 & 8) >> 3);
  return;
}



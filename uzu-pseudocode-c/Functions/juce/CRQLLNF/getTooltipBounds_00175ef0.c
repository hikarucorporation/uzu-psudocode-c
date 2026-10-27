// Function : getTooltipBounds
// Namespace: juce:CRQLLNF
// Entry    : 00175ef0
// Prototype: undefined1[16] getTooltipBounds(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7)
// Body     : 00175ef0 - 00175ef4


/* non-virtual thunk to juce::CRQLLNF::getTooltipBounds(juce::String const&, juce::Point<int>,
   juce::Rectangle<int>) */

undefined1  [16] __thiscall
juce::CRQLLNF::getTooltipBounds
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,ulong param_6,uint *param_7)

{
  undefined8 extraout_RDX;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulong in_R9;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  Font aFStack_70 [8];
  Font aFStack_68 [8];
  undefined8 uStack_60;
  ulong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uVar6 = param_6;
  puVar3 = param_7;
  if (FontManager::getInstance()::instance == '\0') {
    iVar4 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar4 != 0) {
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
    }
  }
  Font::Font(aFStack_68,(long *)FontManager::getInstance()::instance);
  Font::withHeight(DAT_005d98f4,aFStack_70,(long *)aFStack_68);
  Font::~Font(aFStack_68);
  StringRef::StringRef((StringRef *)&pbStack_50,param_4);
  GlyphArrangement::getStringBounds
            ((undefined8 *)aFStack_70,pbStack_50,extraout_RDX,uVar6,puVar3,in_R9);
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_48 = param_2;
  fVar8 = ceilf((float)param_2);
  fVar9 = ceilf(uStack_48._4_4_);
  iVar4 = (int)param_7 + (int)uStack_58;
  if ((int)uStack_60 <= iVar4) {
    iVar4 = (int)uStack_60;
  }
  uVar5 = iVar4 - ((int)fVar8 + 0x10);
  uVar2 = (uint)(param_6 >> 0x20);
  iVar4 = (int)((ulong)param_7 >> 0x20) + uVar2;
  iVar7 = (int)((ulong)param_5 >> 0x20);
  if (iVar7 <= iVar4) {
    iVar4 = iVar7;
  }
  uVar1 = iVar4 - ((int)fVar9 + 8);
  uVar6 = (ulong)uVar5;
  if ((int)uVar5 < (int)uStack_58) {
    uVar6 = uStack_58 & 0xffffffff;
  }
  if ((int)uVar1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  Font::~Font(aFStack_70);
  auVar10._12_4_ = (int)fVar9 + 8;
  auVar10._8_4_ = (int)fVar8 + 0x10;
  auVar10._0_8_ = uVar6 | (ulong)uVar1 << 0x20;
  return auVar10;
}



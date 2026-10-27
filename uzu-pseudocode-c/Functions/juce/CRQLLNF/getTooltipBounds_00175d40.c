// Function : getTooltipBounds
// Namespace: juce:CRQLLNF
// Entry    : 00175d40
// Prototype: undefined1[16] getTooltipBounds(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 * param_4, undefined8 param_5, ulong param_6, uint * param_7, ulong param_8)
// Body     : 00175d40 - 00175ea3


/* WARNING: Unknown calling convention: __cdecl */
/* juce::CRQLLNF::getTooltipBounds(juce::String const&, juce::Point<int>, juce::Rectangle<int>) */

undefined1  [16] __cdecl
juce::CRQLLNF::getTooltipBounds
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,ulong param_6,uint *param_7,ulong param_8)

{
  undefined8 extraout_RDX;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  Font local_70 [8];
  Font local_68 [8];
  undefined8 local_60;
  ulong local_58;
  byte *local_50;
  undefined8 local_48;
  
  uVar6 = param_6;
  puVar3 = param_7;
  if (FontManager::getInstance()::instance == '\0') {
    iVar4 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
    if (iVar4 != 0) {
                    /* try { // try from 00175e6d to 00175e78 has its CatchHandler @ 00175ea4 */
      FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
      __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
      __cxa_guard_release(&FontManager::getInstance()::instance);
    }
  }
  Font::Font(local_68,(long *)FontManager::getInstance()::instance);
                    /* try { // try from 00175d7c to 00175d90 has its CatchHandler @ 00175ed0 */
  Font::withHeight(DAT_005d98f4,local_70,(long *)local_68);
  Font::~Font(local_68);
  StringRef::StringRef((StringRef *)&local_50,param_4);
                    /* try { // try from 00175dad to 00175db6 has its CatchHandler @ 00175ebb */
  GlyphArrangement::getStringBounds
            ((undefined8 *)local_70,local_50,extraout_RDX,uVar6,puVar3,param_8);
  local_60 = param_5;
  local_58 = param_6;
  local_48 = param_2;
  fVar8 = ceilf((float)param_2);
  fVar9 = ceilf(local_48._4_4_);
  iVar4 = (int)param_7 + (int)local_58;
  if ((int)local_60 <= iVar4) {
    iVar4 = (int)local_60;
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
  if ((int)uVar5 < (int)local_58) {
    uVar6 = local_58 & 0xffffffff;
  }
  if ((int)uVar1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  Font::~Font(local_70);
  auVar10._12_4_ = (int)fVar9 + 8;
  auVar10._8_4_ = (int)fVar8 + 0x10;
  auVar10._0_8_ = uVar6 | (ulong)uVar1 << 0x20;
  return auVar10;
}



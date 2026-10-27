// Function : drawPopupMenuItem
// Namespace: juce:CRQLLNF
// Entry    : 001759e0
// Prototype: undefined drawPopupMenuItem(undefined8 param_1_00, Graphics * param_2, int * param_3, int param_4_00, char param_5, char param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined4 * param_12)
// Body     : 001759e0 - 00175cb8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::CRQLLNF::drawPopupMenuItem(juce::Graphics&, juce::Rectangle<int> const&, bool, bool, bool,
   bool, bool, juce::String const&, juce::String const&, juce::Drawable const*, juce::Colour const*)
    */

void __thiscall
juce::CRQLLNF::drawPopupMenuItem
          (undefined8 param_1_00,Graphics *param_2,int *param_3,int param_4_00,char param_5,
          char param_6,undefined8 param_7,undefined8 param_8,long *param_9,undefined8 param_10,
          undefined8 param_11,undefined4 *param_12)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  Font aFStack_88 [8];
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  Colour local_70 [8];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  uVar2 = param_3[2];
  if (param_4_00 == 0) {
    if ((param_5 != '\0') && (param_6 != '\0')) {
      local_68 = (float)((int)*(undefined8 *)param_3 + _DAT_005d9930);
      fStack_64 = (float)((int)((ulong)*(undefined8 *)param_3 >> 0x20) + _UNK_005d9934);
      fStack_60 = (float)_UNK_005d9938;
      fStack_5c = (float)_UNK_005d993c;
      uVar7 = -(uint)((int)_UNK_005d9944 < param_3[3]);
      local_48 = (float)(int)((~-(uint)((int)_DAT_005d9940 < (int)uVar2) & _DAT_005d9940 |
                              uVar2 & -(uint)((int)_DAT_005d9940 < (int)uVar2)) + _DAT_005d9950);
      fStack_54 = (float)(int)((~uVar7 & _UNK_005d9944 | param_3[3] & uVar7) + _UNK_005d9954);
      fStack_40 = (float)(int)((~-(uint)((int)_UNK_005d9948 < 0) & _UNK_005d9948) + _UNK_005d9958);
      fStack_3c = (float)(int)((~-(uint)((int)_UNK_005d994c < 0) & _UNK_005d994c) + _UNK_005d995c);
      local_58 = fStack_54 * DAT_005d9044;
      fStack_50 = fStack_54;
      fStack_4c = fStack_54;
      fStack_44 = fStack_54;
      Colour::Colour(local_70,(Colour)0x33,(Colour)0x99,(Colour)0xff);
      uVar2 = Colour::withAlpha(DAT_005d98f0,local_70);
      Graphics::setColour(param_2,uVar2);
      local_68 = (float)(int)local_68;
      fStack_64 = (float)(int)fStack_64;
      fStack_60 = (float)(int)fStack_60;
      fStack_5c = (float)(int)fStack_5c;
      Graphics::fillRoundedRectangle(local_68,CONCAT44(fStack_44,local_48),local_58,(long)param_2);
      Colour::Colour((Colour *)local_80,(Colour)0x33,(Colour)0x99,(Colour)0xff);
      Graphics::setColour(param_2,local_80[0]);
      Graphics::drawRoundedRectangle(local_68,local_48,local_58,DAT_005d9038,(long)param_2);
    }
    puVar5 = &Colours::grey;
    if (param_5 != '\0') {
      puVar5 = &Colours::white;
    }
    if (param_12 != (undefined4 *)0x0) {
      puVar5 = param_12;
    }
    Graphics::setColour(param_2,*puVar5);
    if (FontManager::getInstance()::instance == '\0') {
      iVar3 = __cxa_guard_acquire(&FontManager::getInstance()::instance);
      if (iVar3 != 0) {
                    /* try { // try from 00175c82 to 00175c8d has its CatchHandler @ 00175cb9 */
        FontManager::FontManager((FontManager *)FontManager::getInstance()::instance);
        __cxa_atexit(FontManager::~FontManager,FontManager::getInstance()::instance,&__dso_handle);
        __cxa_guard_release(&FontManager::getInstance()::instance);
      }
    }
    Font::Font((Font *)local_70,(long *)FontManager::getInstance()::instance);
                    /* try { // try from 00175bd1 to 00175be3 has its CatchHandler @ 00175ce3 */
    Font::withHeight(DAT_005d98ec,aFStack_88,(long *)local_70);
    Font::~Font((Font *)local_70);
                    /* try { // try from 00175bee to 00175bf8 has its CatchHandler @ 00175cd0 */
    Graphics::setFont(param_2,aFStack_88);
    Font::~Font(aFStack_88);
    iVar3 = 0x20;
    if (0x20 < param_3[2]) {
      iVar3 = param_3[2];
    }
    uVar4 = 0;
    if (-1 < param_3[3]) {
      uVar4 = (ulong)(uint)param_3[3];
    }
    Graphics::drawFittedText
              (0,DAT_005d9960,(long)param_2,param_9,CONCAT44(param_3[1],*param_3 + 0x10),
               (ulong)(iVar3 - 0x20) | uVar4 << 0x20,(uint *)0x24,1);
  }
  else {
    uVar7 = 10;
    if (10 < (int)uVar2) {
      uVar7 = uVar2;
    }
    iVar3 = *param_3;
    uVar2 = 0;
    if (-1 < param_3[3]) {
      uVar2 = param_3[3];
    }
    uVar6 = uVar2 - (uVar2 >> 1);
    iVar1 = param_3[1];
    Colour::Colour((Colour *)local_78,(Colour)0x3c,(Colour)0x3c,(Colour)0x3c);
    Graphics::setColour(param_2,local_78[0]);
    uVar4 = 1;
    if ((int)uVar6 < 1) {
      uVar4 = (ulong)uVar6;
    }
    Graphics::fillRect((long)param_2,CONCAT44((uVar2 >> 1) + iVar1,iVar3 + 5),
                       (ulong)(uVar7 - 10) | uVar4 << 0x20);
  }
  return;
}



// Function : getDefaultPlatformTypefaceForFont
// Namespace: juce:Font:Native
// Entry    : 002f8750
// Prototype: undefined getDefaultPlatformTypefaceForFont(Native * this, long * param_1)
// Body     : 002f8750 - 002f89f2


/* juce::Font::Native::getDefaultPlatformTypefaceForFont(juce::Font const&) */

void __thiscall juce::Font::Native::getDefaultPlatformTypefaceForFont(Native *this,long *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte **ppbVar5;
  byte *pbVar6;
  byte *local_30;
  long *local_28;
  byte *local_20;
  
  if ((getDefaultPlatformTypefaceForFont(juce::Font_const&)::defaultInfo == '\0') &&
     (iVar3 = __cxa_guard_acquire(&getDefaultPlatformTypefaceForFont(juce::Font_const&)::defaultInfo
                                 ), iVar3 != 0)) {
                    /* try { // try from 002f88f7 to 002f88fb has its CatchHandler @ 002f8a08 */
    DefaultFontInfo::DefaultFontInfo();
    __cxa_atexit(DefaultFontInfo::~DefaultFontInfo,
                 &getDefaultPlatformTypefaceForFont(juce::Font_const&)::defaultInfo,&__dso_handle);
    __cxa_guard_release(&getDefaultPlatformTypefaceForFont(juce::Font_const&)::defaultInfo);
  }
  local_28 = (long *)*param_1;
  LOCK();
  plVar1 = (long *)*param_1 + 1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  local_30 = *(byte **)(*param_1 + 0x18);
  pbVar4 = *(byte **)(*param_1 + 0x18) + -0x10;
  if (pbVar4 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar4 = *(int *)pbVar4 + 1;
    UNLOCK();
  }
  if ((getFontPlaceholderNames()::names == '\0') &&
     (iVar3 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), iVar3 != 0)) {
                    /* try { // try from 002f893b to 002f893f has its CatchHandler @ 002f89f7 */
    FontPlaceholderNames::FontPlaceholderNames();
    __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                 &__dso_handle);
    __cxa_guard_release(&getFontPlaceholderNames()::names);
  }
  ppbVar5 = (byte **)&getDefaultPlatformTypefaceForFont(juce::Font_const&)::defaultInfo;
  if ((local_30 != getFontPlaceholderNames()::names) &&
     (uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (local_30,getFontPlaceholderNames()::names), uVar2 != 0)) {
    if ((getFontPlaceholderNames()::names == '\0') &&
       (iVar3 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), iVar3 != 0)) {
                    /* try { // try from 002f897f to 002f8983 has its CatchHandler @ 002f89f5 */
      FontPlaceholderNames::FontPlaceholderNames();
      __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                   &__dso_handle);
      __cxa_guard_release(&getFontPlaceholderNames()::names);
    }
    ppbVar5 = (byte **)&DAT_0071cbd8;
    if ((local_30 != DAT_0071cd38) &&
       (uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (local_30,DAT_0071cd38), uVar2 != 0)) {
      if ((getFontPlaceholderNames()::names == '\0') &&
         (iVar3 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), iVar3 != 0)) {
                    /* try { // try from 002f89c3 to 002f89c7 has its CatchHandler @ 002f89f3 */
        FontPlaceholderNames::FontPlaceholderNames();
        __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                     &__dso_handle);
        __cxa_guard_release(&getFontPlaceholderNames()::names);
      }
      if (local_30 == DAT_0071cd40) {
        ppbVar5 = (byte **)&DAT_0071cbe0;
      }
      else {
        uVar2 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (local_30,DAT_0071cd40);
        ppbVar5 = &local_30;
        if (uVar2 == 0) {
          ppbVar5 = (byte **)&DAT_0071cbe0;
        }
      }
    }
  }
  pbVar6 = *ppbVar5;
  pbVar4 = pbVar6 + -0x10;
  if (pbVar4 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar4 = *(int *)pbVar4 + 1;
    UNLOCK();
  }
  local_20 = pbVar6;
  if (*pbVar6 == 0) {
    *(undefined8 *)this = 0;
  }
  else {
                    /* try { // try from 002f8856 to 002f8871 has its CatchHandler @ 002f8a1f */
    setTypefaceName((Font *)&local_28,(long *)&local_20);
    FreeTypeTypeface::from((FreeTypeTypeface *)this,(long *)&local_28);
  }
  if (pbVar6 != &DAT_0061ac58) {
    pbVar6 = pbVar6 + -0x10;
    LOCK();
    iVar3 = *(int *)pbVar6;
    *(int *)pbVar6 = *(int *)pbVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(pbVar6);
    }
  }
  pbVar4 = local_30 + -0x10;
  if (pbVar4 != (byte *)&emptyString) {
    LOCK();
    iVar3 = *(int *)pbVar4;
    *(int *)pbVar4 = *(int *)pbVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(pbVar4);
    }
  }
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  return;
}



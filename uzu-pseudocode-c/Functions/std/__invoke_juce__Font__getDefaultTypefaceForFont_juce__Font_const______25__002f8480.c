// Function : __invoke<juce::Font::getDefaultTypefaceForFont(juce::Font_const&)::$_25>
// Namespace: std
// Entry    : 002f8480
// Prototype: type __invoke<juce::Font::getDefaultTypefaceForFont(juce::Font_const&)::$_25>(Native * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 002f8480 - 002f86b6


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::__invoke_result<juce::Font::getDefaultTypefaceForFont(juce::Font const&)::$_25>::type
   std::__invoke<juce::Font::getDefaultTypefaceForFont(juce::Font
   const&)::$_25>(juce::Font::getDefaultTypefaceForFont(juce::Font const&)::$_25&&) */

void __cdecl
std::__invoke<juce::Font::getDefaultTypefaceForFont(juce::Font_const&)::__25>
          (Native *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 extraout_RDX;
  bool bVar7;
  undefined1 uVar8;
  undefined1 auVar9 [16];
  long *local_50;
  long *local_48;
  long *local_40;
  Font *local_38;
  
  pbVar3 = *(byte **)(*(long *)*param_2 + 0x18);
  pbVar1 = pbVar3 + -0x10;
  if (pbVar1 != (byte *)&juce::emptyString) {
    LOCK();
    *(int *)pbVar1 = *(int *)pbVar1 + 1;
    UNLOCK();
  }
  if ((juce::getFontPlaceholderNames()::names == '\0') &&
     (iVar5 = __cxa_guard_acquire(&juce::getFontPlaceholderNames()::names), iVar5 != 0)) {
                    /* try { // try from 002f8687 to 002f868b has its CatchHandler @ 002f86b7 */
    juce::FontPlaceholderNames::FontPlaceholderNames();
    __cxa_atexit(juce::FontPlaceholderNames::~FontPlaceholderNames,
                 &juce::getFontPlaceholderNames()::names,&__dso_handle);
    __cxa_guard_release(&juce::getFontPlaceholderNames()::names);
  }
  if (DAT_0071cd50 == pbVar3) {
    bVar7 = false;
  }
  else {
    uVar4 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar3,DAT_0071cd50);
    bVar7 = uVar4 != 0;
  }
  if (pbVar1 != (byte *)&juce::emptyString) {
    LOCK();
    iVar5 = *(int *)pbVar1;
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(pbVar1);
    }
  }
  if (!bVar7) {
    auVar9 = FcNameParse("system-ui");
    lVar6 = auVar9._0_8_;
                    /* try { // try from 002f850b to 002f8517 has its CatchHandler @ 002f872d */
    juce::FreeTypeTypeface::fromPattern
              ((FreeTypeTypeface *)&local_50,lVar6,auVar9._8_8_,param_4,param_5,param_6);
    if (lVar6 != 0) {
                    /* try { // try from 002f851d to 002f8524 has its CatchHandler @ 002f8725 */
      FcPatternDestroy(lVar6);
    }
    if (local_50 != (long *)0x0) {
      lVar6 = *(long *)*param_2;
      pbVar3 = *(byte **)(lVar6 + 0x20);
      pbVar1 = pbVar3 + -0x10;
      if (pbVar1 != (byte *)&juce::emptyString) {
        LOCK();
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        UNLOCK();
      }
      if ((byte *)local_50[3] == pbVar3) {
        uVar8 = true;
      }
      else {
        uVar4 = juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          ((byte *)local_50[3],pbVar3);
        uVar8 = uVar4 == 0;
      }
      if (pbVar1 != (byte *)&juce::emptyString) {
        LOCK();
        iVar5 = *(int *)pbVar1;
        *(int *)pbVar1 = *(int *)pbVar1 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          operator_delete__(pbVar1);
        }
      }
      if ((bool)uVar8) {
        *(long **)param_1 = local_50;
        if (local_50 == (long *)0x0) {
          return;
        }
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      else {
        local_48 = *(long **)*param_2;
        if (local_48 != (long *)0x0) {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
                    /* try { // try from 002f85df to 002f85ff has its CatchHandler @ 002f86ec */
        juce::Font::setTypefaceName((Font *)&local_48,local_50 + 2);
        local_38 = (Font *)&local_48;
        __invoke<juce::Font::getDefaultTypefaceForFont(juce::Font_const&)::__25>
                  ((Native *)&local_40,&local_38,extraout_RDX,lVar6,param_5,param_6);
        if (local_40 == (long *)0x0) {
                    /* try { // try from 002f862b to 002f8637 has its CatchHandler @ 002f86ea */
          juce::Font::Native::getDefaultPlatformTypefaceForFont(param_1,(long *)&local_48);
        }
        else {
          *(long **)param_1 = local_40;
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
          if (local_40 != (long *)0x0) {
            LOCK();
            plVar2 = local_40 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)(*local_40 + 8))();
            }
          }
        }
        if (local_48 != (long *)0x0) {
          LOCK();
          plVar2 = local_48 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*local_48 + 8))();
          }
        }
      }
      if (local_50 == (long *)0x0) {
        return;
      }
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_50 + 8))();
        return;
      }
      return;
    }
  }
  *(undefined8 *)param_1 = 0;
  return;
}



// Function : getTypefaceForFont
// Namespace: juce:LookAndFeel
// Entry    : 001e9f90
// Prototype: FreeTypeTypeface * getTypefaceForFont(FreeTypeTypeface * param_1, long param_2, long * param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 001e9f90 - 001ea11e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel::getTypefaceForFont(juce::Font const&) */

FreeTypeTypeface * __cdecl
juce::LookAndFeel::getTypefaceForFont
          (FreeTypeTypeface *param_1,long param_2,long *param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long *extraout_RDX;
  long *plVar6;
  long *extraout_RDX_00;
  long *extraout_RDX_01;
  long *extraout_RDX_02;
  bool bVar7;
  long *local_40;
  long *local_38;
  
  pbVar2 = *(byte **)(*param_3 + 0x18);
  pbVar1 = pbVar2 + -0x10;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar1 = *(int *)pbVar1 + 1;
    UNLOCK();
  }
  plVar6 = param_3;
  if ((getFontPlaceholderNames()::names == '\0') &&
     (iVar5 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), plVar6 = extraout_RDX_01,
     iVar5 != 0)) {
                    /* try { // try from 001ea0ef to 001ea0f3 has its CatchHandler @ 001ea11f */
    FontPlaceholderNames::FontPlaceholderNames();
    __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                 &__dso_handle);
    __cxa_guard_release(&getFontPlaceholderNames()::names);
    plVar6 = extraout_RDX_02;
  }
  if (getFontPlaceholderNames()::names == pbVar2) {
    bVar7 = true;
    if (pbVar1 != (byte *)&emptyString) goto LAB_001e9ff9;
LAB_001ea008:
    if (bVar7) {
LAB_001ea00c:
      lVar3 = *(long *)(param_2 + 0x110);
      if (lVar3 != 0) {
        *(long *)param_1 = lVar3;
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        return param_1;
      }
      if (**(char **)(param_2 + 0xf8) != '\0') {
        local_40 = (long *)*param_3;
        if (local_40 != (long *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
                    /* try { // try from 001ea059 to 001ea072 has its CatchHandler @ 001ea14c */
        Font::setTypefaceName((Font *)&local_40,(long *)(param_2 + 0xf8));
        FreeTypeTypeface::from(param_1,(long *)&local_40);
        goto joined_r0x001ea07b;
      }
    }
  }
  else {
    uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar2,getFontPlaceholderNames()::names);
    bVar7 = uVar4 == 0;
    plVar6 = extraout_RDX;
    if (pbVar1 == (byte *)&emptyString) goto LAB_001ea008;
LAB_001e9ff9:
    LOCK();
    iVar5 = *(int *)pbVar1;
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    UNLOCK();
    if (iVar5 != 0) goto LAB_001ea008;
    operator_delete__(pbVar1);
    plVar6 = extraout_RDX_00;
    if (bVar7) goto LAB_001ea00c;
  }
  local_38 = param_3;
  std::__invoke<juce::Font::getDefaultTypefaceForFont(juce::Font_const&)::__25>
            ((Native *)&local_40,&local_38,plVar6,param_4,param_5,param_6);
  if (local_40 == (long *)0x0) {
    Font::Native::getDefaultPlatformTypefaceForFont((Native *)param_1,param_3);
    return param_1;
  }
  *(long **)param_1 = local_40;
  LOCK();
  *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  UNLOCK();
joined_r0x001ea07b:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*local_40 + 8))();
    }
  }
  return param_1;
}



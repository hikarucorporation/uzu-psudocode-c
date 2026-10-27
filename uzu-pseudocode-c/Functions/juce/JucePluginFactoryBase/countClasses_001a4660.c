// Function : countClasses
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a4660
// Prototype: undefined8 countClasses(void)
// Body     : 001a4660 - 001a4788


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JucePluginFactoryBase::countClasses() */

undefined8 juce::JucePluginFactoryBase::countClasses(void)

{
  int iVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (getClassEntries()::classEntries == '\0') {
    iVar1 = __cxa_guard_acquire(&getClassEntries()::classEntries);
    if (iVar1 != 0) {
      local_38 = _DAT_005d9a80;
      uStack_30 = _UNK_005d9a88;
                    /* try { // try from 001a46a5 to 001a46f1 has its CatchHandler @ 001a4791 */
      Steinberg::PClassInfo2::PClassInfo2
                ((PClassInfo2 *)getClassEntries()::classEntries,(PClassInfo2 *)&local_38,0x7fffffff,
                 (PClassInfo2 *)"Audio Module Class",0x5d91fb,0,0x5dbd15,0x5dbce2,0x5dbd18,0x5dbd1e)
      ;
      memset(getClassEntries()::classEntries + 0x1b8,0,0x2b8);
                    /* try { // try from 001a470f to 001a4716 has its CatchHandler @ 001a4791 */
      Steinberg::PClassInfoW::fromAscii
                ((PClassInfoW *)(getClassEntries()::classEntries + 0x1b8),
                 (PClassInfoW *)getClassEntries()::classEntries);
      local_38 = _DAT_005d9a70;
      uStack_30 = _UNK_005d9a78;
                    /* try { // try from 001a4722 to 001a4752 has its CatchHandler @ 001a4789 */
      Steinberg::PClassInfo2::PClassInfo2
                ((PClassInfo2 *)(getClassEntries()::classEntries + 0x470),(PClassInfo2 *)&local_38,
                 0x7fffffff,(PClassInfo2 *)"Component Controller Class",0x5d91fb,0,0x5dbd15,0x5dbce2
                 ,0x5dbd18,0x5dbd1e);
      memset(getClassEntries()::classEntries + 0x628,0,0x2b8);
                    /* try { // try from 001a4770 to 001a4777 has its CatchHandler @ 001a4789 */
      Steinberg::PClassInfoW::fromAscii
                ((PClassInfoW *)(getClassEntries()::classEntries + 0x628),
                 (PClassInfoW *)(getClassEntries()::classEntries + 0x470));
      __cxa_guard_release(&getClassEntries()::classEntries);
    }
  }
  return 2;
}



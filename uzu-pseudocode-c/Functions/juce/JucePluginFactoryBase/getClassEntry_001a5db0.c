// Function : getClassEntry
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a5db0
// Prototype: undefined1 * getClassEntry(undefined8 param_1_00, int param_2)
// Body     : 001a5db0 - 001a5ee9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JucePluginFactoryBase::getClassEntry(int) const */

undefined1 * __thiscall
juce::JucePluginFactoryBase::getClassEntry(undefined8 param_1_00,int param_2)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (getClassEntries()::classEntries == '\0') {
    iVar1 = __cxa_guard_acquire(&getClassEntries()::classEntries);
    if (iVar1 != 0) {
      local_48 = _DAT_005d9a80;
      uStack_40 = _UNK_005d9a88;
                    /* try { // try from 001a5e08 to 001a5e53 has its CatchHandler @ 001a5ef2 */
      Steinberg::PClassInfo2::PClassInfo2
                ((PClassInfo2 *)getClassEntries()::classEntries,(PClassInfo2 *)&local_48,0x7fffffff,
                 (PClassInfo2 *)"Audio Module Class",0x5d91fb,0,0x5dbd15,0x5dbce2,0x5dbd18,0x5dbd1e)
      ;
      memset(getClassEntries()::classEntries + 0x1b8,0,0x2b8);
                    /* try { // try from 001a5e71 to 001a5e78 has its CatchHandler @ 001a5ef2 */
      Steinberg::PClassInfoW::fromAscii
                ((PClassInfoW *)(getClassEntries()::classEntries + 0x1b8),
                 (PClassInfoW *)getClassEntries()::classEntries);
      local_48 = _DAT_005d9a70;
      uStack_40 = _UNK_005d9a78;
                    /* try { // try from 001a5e84 to 001a5eb3 has its CatchHandler @ 001a5eea */
      Steinberg::PClassInfo2::PClassInfo2
                ((PClassInfo2 *)(getClassEntries()::classEntries + 0x470),(PClassInfo2 *)&local_48,
                 0x7fffffff,(PClassInfo2 *)"Component Controller Class",0x5d91fb,0,0x5dbd15,0x5dbce2
                 ,0x5dbd18,0x5dbd1e);
      memset(getClassEntries()::classEntries + 0x628,0,0x2b8);
                    /* try { // try from 001a5ed1 to 001a5ed8 has its CatchHandler @ 001a5eea */
      Steinberg::PClassInfoW::fromAscii
                ((PClassInfoW *)(getClassEntries()::classEntries + 0x628),
                 (PClassInfoW *)(getClassEntries()::classEntries + 0x470));
      __cxa_guard_release(&getClassEntries()::classEntries);
    }
  }
  return getClassEntries()::classEntries + (long)param_2 * 0x470;
}



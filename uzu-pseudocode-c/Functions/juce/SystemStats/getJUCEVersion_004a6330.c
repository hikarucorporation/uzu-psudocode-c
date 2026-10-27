// Function : getJUCEVersion
// Namespace: juce:SystemStats
// Entry    : 004a6330
// Prototype: SystemStats * getJUCEVersion(SystemStats * this)
// Body     : 004a6330 - 004a636e


/* juce::SystemStats::getJUCEVersion() */

SystemStats * __thiscall juce::SystemStats::getJUCEVersion(SystemStats *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0x27);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 0x10;
  *(undefined8 *)(puVar1 + 4) = 0x2e3876204543554a;
  puVar1[6] = 0x31312e30;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined4 **)this = puVar1 + 4;
  return this;
}



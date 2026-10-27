// Function : ClassEntry
// Namespace: juce:JucePluginFactoryBase:ClassEntry
// Entry    : 001a4c80
// Prototype: undefined ClassEntry(ClassEntry * this, uint param_1, PClassInfo2 * param_2, char param_3)
// Body     : 001a4c80 - 001a4da6


/* juce::JucePluginFactoryBase::ClassEntry::ClassEntry(juce::VST3Interface::Type, char const*, bool)
    */

void __thiscall
juce::JucePluginFactoryBase::ClassEntry::ClassEntry
          (ClassEntry *this,uint param_1,PClassInfo2 *param_2,char param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_20 [2];
  
  uVar3 = 0xabcdef01;
  uVar1 = 0xabcdef01;
  if (3 < param_1) {
    uVar1 = 0x101abab;
    if (param_1 == 4) goto switchD_001a4cc2_caseD_0;
    uVar1 = 0;
  }
  uVar3 = 0xa1b2c3d4;
  switch(param_1) {
  case 0:
    break;
  case 1:
    uVar3 = 0x1234abcd;
    break;
  case 2:
    uVar3 = 0xc0def00d;
    break;
  case 3:
    uVar3 = 0x9182faeb;
    break;
  default:
    uVar3 = 0;
  }
switchD_001a4cc2_caseD_0:
  local_20[0] = (ulong)(uVar1 >> 8 & 0xff00) |
                (ulong)((uVar1 & 0xff00) << 8) |
                (ulong)(uVar1 << 0x18) |
                (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                uVar3 << 0x38 | (ulong)(uVar1 >> 0x18);
  local_20[1] = 0x337172434c515243;
  puVar2 = &DAT_005dae18;
  if (param_3 != '\0') {
    puVar2 = &DAT_005dbd15;
  }
                    /* try { // try from 001a4d43 to 001a4d7d has its CatchHandler @ 001a4da7 */
  Steinberg::PClassInfo2::PClassInfo2
            ((PClassInfo2 *)this,(PClassInfo2 *)local_20,0x7fffffff,param_2,0x5d91fb,0,(long)puVar2,
             0x5dbce2,0x5dbd18,0x5dbd1e);
  memset((PClassInfoW *)(this + 0x1b8),0,0x2b8);
                    /* try { // try from 001a4d94 to 001a4d9e has its CatchHandler @ 001a4da7 */
  Steinberg::PClassInfoW::fromAscii((PClassInfoW *)(this + 0x1b8),(PClassInfoW *)this);
  return;
}



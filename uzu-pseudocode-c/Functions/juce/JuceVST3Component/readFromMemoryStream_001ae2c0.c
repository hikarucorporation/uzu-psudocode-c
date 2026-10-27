// Function : readFromMemoryStream
// Namespace: juce:JuceVST3Component
// Entry    : 001ae2c0
// Prototype: undefined8 readFromMemoryStream(JuceVST3Component * this, long * param_1, undefined8 param_2, int * param_3, uint * param_4, undefined8 param_5)
// Body     : 001ae2c0 - 001ae43b


/* juce::JuceVST3Component::readFromMemoryStream(Steinberg::IBStream*) */

undefined8 __thiscall
juce::JuceVST3Component::readFromMemoryStream
          (JuceVST3Component *this,long *param_1,undefined8 param_2,int *param_3,uint *param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 extraout_RDX;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *local_48;
  int local_3c;
  int *local_38;
  uint local_30;
  undefined4 uStack_2c;
  size_t local_28;
  
  local_48 = (long *)0x0;
                    /* try { // try from 001ae2e0 to 001ae2ee has its CatchHandler @ 001ae45e */
  if (((param_1 == (long *)0x0) ||
      (iVar1 = (**(code **)*param_1)(param_1,0x71ac00,&local_48), iVar1 != 0)) ||
     (local_28 = 0, local_48 == (long *)0x0)) {
    return 0;
  }
                    /* try { // try from 001ae320 to 001ae327 has its CatchHandler @ 001ae459 */
  iVar1 = (**(code **)(*local_48 + 0x18))(local_48,&local_28);
  uVar3 = 0;
  if (((iVar1 != 0) || ((long)local_28 < 1)) || (0x63fffff < (long)local_28)) goto LAB_001ae3f8;
                    /* try { // try from 001ae34d to 001ae35a has its CatchHandler @ 001ae44d */
  uVar2 = 0;
  MemoryBlock::MemoryBlock((MemoryBlock *)&local_38,local_28,0);
  local_3c = 1;
  do {
                    /* try { // try from 001ae380 to 001ae388 has its CatchHandler @ 001ae482 */
    if (((int)local_30 <= (int)uVar2) ||
       (param_3 = &local_3c, iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_38), iVar1 != 0))
    break;
    uVar2 = (ulong)(uint)((int)uVar2 + local_3c);
  } while (0 < local_3c);
  if ((int)uVar2 == 0) {
LAB_001ae3ec:
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)(int)uVar2;
                    /* try { // try from 001ae39e to 001ae3e9 has its CatchHandler @ 001ae44f */
    MemoryBlock::setSize((MemoryBlock *)&local_38,uVar4,0);
    if (detail::PluginUtilities::getHostType()::hostType == '\0') {
      puVar5 = &detail::PluginUtilities::getHostType()::hostType;
      iVar1 = __cxa_guard_acquire();
      if (iVar1 != 0) {
                    /* try { // try from 001ae420 to 001ae424 has its CatchHandler @ 001ae43c */
        detail::PluginUtilities::getHostType()::hostType =
             PluginHostType::getHostType(puVar5,uVar4,extraout_RDX,param_3,param_4,param_5);
        __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
      }
    }
    if (((detail::PluginUtilities::getHostType()::hostType == 8) &&
        (4 < CONCAT44(uStack_2c,local_30))) && ((char)local_38[1] == 'E' && *local_38 == 0x21324356)
       ) goto LAB_001ae3ec;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
    setStateInformation(this,(long)local_38,local_30);
  }
  MemoryBlock::~MemoryBlock((MemoryBlock *)&local_38);
LAB_001ae3f8:
  if (local_48 != (long *)0x0) {
                    /* try { // try from 001ae408 to 001ae40a has its CatchHandler @ 001ae451 */
    (**(code **)(*local_48 + 0x10))();
  }
  return uVar3;
}



// Function : setState
// Namespace: juce:JuceVST3Component
// Entry    : 001a8ae0
// Prototype: undefined8 setState(JuceVST3Component * this, long * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001a8ae0 - 001a8c04


/* juce::JuceVST3Component::setState(Steinberg::IBStream*) */

undefined8 __thiscall
juce::JuceVST3Component::setState
          (JuceVST3Component *this,long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4
          ,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar5;
  undefined1 *puVar6;
  long *local_20;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(EventHandler::hostMessageThreadState + 8));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(EventHandler::hostMessageThreadState + 8));
  if (param_1 == (long *)0x0) {
    return 2;
  }
  local_20 = (long *)0x0;
                    /* try { // try from 001a8b23 to 001a8b33 has its CatchHandler @ 001a8c1e */
  iVar1 = (**(code **)*param_1)(param_1,0x71abe8,&local_20);
  if (iVar1 != 0) {
    local_20 = (long *)0x0;
  }
                    /* try { // try from 001a8b44 to 001a8ba4 has its CatchHandler @ 001a8c44 */
  (**(code **)(*param_1 + 0x28))(param_1,0,0);
  uVar2 = 0;
  piVar4 = (int *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0,0);
  if (iVar1 == 0) {
    uVar5 = extraout_RDX;
    if (detail::PluginUtilities::getHostType()::hostType == '\0') {
      puVar6 = &detail::PluginUtilities::getHostType()::hostType;
      iVar1 = __cxa_guard_acquire();
      uVar5 = extraout_RDX_01;
      if (iVar1 != 0) {
                    /* try { // try from 001a8be9 to 001a8bed has its CatchHandler @ 001a8c05 */
        detail::PluginUtilities::getHostType()::hostType =
             PluginHostType::getHostType(puVar6,uVar2,extraout_RDX_01,piVar4,param_4,param_5);
        __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
        uVar5 = extraout_RDX_02;
      }
    }
    if (detail::PluginUtilities::getHostType()::hostType != 0x19) {
      uVar2 = readFromMemoryStream(this,param_1,uVar5,piVar4,param_4,param_5);
      uVar5 = 0;
      if ((char)uVar2 != '\0') goto LAB_001a8bb0;
    }
  }
  uVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0,0);
  if (iVar1 == 0) {
    uVar3 = readFromUnknownStream(this,param_1,extraout_RDX_00,uVar2,param_4,param_5);
    uVar5 = 0;
    if ((char)uVar3 != '\0') goto LAB_001a8bb0;
  }
  uVar5 = 1;
LAB_001a8bb0:
  if (local_20 != (long *)0x0) {
                    /* try { // try from 001a8bbd to 001a8bbf has its CatchHandler @ 001a8c16 */
    (**(code **)(*local_20 + 0x10))();
  }
  return uVar5;
}



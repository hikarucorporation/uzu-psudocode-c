// Function : setValueNotifyingHost
// Namespace: juce:AudioProcessorParameter
// Entry    : 004c69e0
// Prototype: undefined setValueNotifyingHost(undefined4 param_1, AudioProcessorParameter * this)
// Body     : 004c69e0 - 004c6a82


/* juce::AudioProcessorParameter::setValueNotifyingHost(float) */

void __thiscall
juce::AudioProcessorParameter::setValueNotifyingHost
          (undefined4 param_1,AudioProcessorParameter *this)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  (**(code **)(*(long *)this + 0x18))();
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  uVar1 = *(uint *)(this + 0x44);
  uVar3 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
LAB_004c6a57:
    plVar2 = *(long **)(this + 0x48);
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 004c6a67 to 004c6a6f has its CatchHandler @ 004c6a83 */
      (**(code **)(*plVar2 + 0x10))(param_1,plVar2,*(undefined4 *)(this + 8));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
    return;
  }
  uVar4 = uVar3 - 1;
  uVar5 = uVar3;
  if (uVar1 <= (uint)uVar4) goto LAB_004c6a3f;
  do {
    plVar2 = *(long **)(*(long *)(this + 0x38) + (uVar4 & 0xffffffff) * 8);
    uVar5 = uVar3;
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 004c6a36 to 004c6a3e has its CatchHandler @ 004c6a85 */
      (**(code **)(*plVar2 + 0x10))(param_1,plVar2,*(undefined4 *)(this + 8));
    }
LAB_004c6a3f:
    do {
      uVar3 = uVar4;
      if (uVar5 < 2) goto LAB_004c6a57;
      uVar4 = uVar3 - 1;
      uVar5 = uVar3;
    } while (*(uint *)(this + 0x44) <= (uint)uVar4);
  } while( true );
}



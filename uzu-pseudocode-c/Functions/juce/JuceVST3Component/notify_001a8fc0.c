// Function : notify
// Namespace: juce:JuceVST3Component
// Entry    : 001a8fc0
// Prototype: undefined8 notify(JuceVST3Component * this, long * param_1)
// Body     : 001a8fc0 - 001a9181


/* WARNING: Removing unreachable block (ram,0x001a90d9) */
/* WARNING: Removing unreachable block (ram,0x001a90e4) */
/* juce::JuceVST3Component::notify(Steinberg::Vst::IMessage*) */

undefined8 __thiscall juce::JuceVST3Component::notify(JuceVST3Component *this,long *param_1)

{
  JuceAudioProcessor *pJVar1;
  long *plVar2;
  JuceVST3EditController *this_00;
  bool bVar3;
  JuceAudioProcessor *pJVar4;
  int iVar5;
  long *plVar6;
  long *local_c0;
  JuceAudioProcessor *local_b8 [20];
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(this + 0x80) != 0) {
    return 0;
  }
  local_c0 = (long *)0x0;
  plVar6 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  iVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,"JuceVST3EditController",&local_c0);
  plVar6 = local_c0;
  if (iVar5 != 0) {
    return 0;
  }
  if (local_c0 == (long *)0x0) {
    bVar3 = true;
  }
  else {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
    if (local_c0 != (long *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
      bVar3 = false;
      plVar2 = *(long **)(this + 0x80);
      *(long **)(this + 0x80) = local_c0;
      goto joined_r0x001a9077;
    }
    bVar3 = false;
  }
  plVar2 = *(long **)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
joined_r0x001a9077:
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
    UNLOCK();
    if ((int)plVar2[1] == 0) {
      *(undefined4 *)(plVar2 + 1) = 0xfffffc18;
      (**(code **)(*plVar2 + 0x28))();
    }
  }
                    /* try { // try from 001a9091 to 001a909c has its CatchHandler @ 001a9197 */
  MessageManagerLock::MessageManagerLock((MessageManagerLock *)local_b8,0);
  if (plVar6 != (long *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
    UNLOCK();
    if ((int)plVar6[1] == 0) {
      *(undefined4 *)(plVar6 + 1) = 0xfffffc18;
      (**(code **)(*plVar6 + 0x28))();
    }
  }
  MessageManagerLock::~MessageManagerLock((MessageManagerLock *)local_b8);
  if (!bVar3) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
    UNLOCK();
    if ((int)plVar6[1] == 0) {
      *(undefined4 *)(plVar6 + 1) = 0xfffffc18;
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
  }
  this_00 = *(JuceVST3EditController **)(this + 0x80);
  if ((this_00 != (JuceVST3EditController *)0x0) &&
     (local_b8[0] = *(JuceAudioProcessor **)(this + 0x78),
     *(JuceAudioProcessor **)(this_00 + 0xe8) != local_b8[0])) {
    if (local_b8[0] != (JuceAudioProcessor *)0x0) {
      LOCK();
      *(int *)(local_b8[0] + 0xd0) = *(int *)(local_b8[0] + 0xd0) + 1;
      UNLOCK();
    }
                    /* try { // try from 001a9147 to 001a9150 has its CatchHandler @ 001a9182 */
    JuceVST3EditController::installAudioProcessor(this_00,(long *)local_b8);
    pJVar4 = local_b8[0];
    if (local_b8[0] != (JuceAudioProcessor *)0x0) {
      LOCK();
      pJVar1 = local_b8[0] + 0xd0;
      *(int *)pJVar1 = *(int *)pJVar1 + -1;
      UNLOCK();
      if (*(int *)pJVar1 == 0) {
        JuceAudioProcessor::~JuceAudioProcessor(local_b8[0]);
        operator_delete(pJVar4);
      }
    }
  }
  return 0;
}



// Function : disconnect
// Namespace: juce:JuceVST3Component
// Entry    : 001a8ec0
// Prototype: undefined8 disconnect(JuceVST3Component * this, undefined8 param_1)
// Body     : 001a8ec0 - 001a8fa5


/* WARNING: Removing unreachable block (ram,0x001a8f4c) */
/* WARNING: Removing unreachable block (ram,0x001a8f57) */
/* WARNING: Removing unreachable block (ram,0x001a8f78) */
/* WARNING: Removing unreachable block (ram,0x001a8f8e) */
/* juce::JuceVST3Component::disconnect(Steinberg::Vst::IConnectionPoint*) */

undefined8 __thiscall
juce::JuceVST3Component::disconnect(JuceVST3Component *this,undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  MessageManagerLock local_a8 [160];
  
  if (*(long *)(this + 0x80) == 0) {
    *(undefined8 *)(this + 0x80) = 0;
  }
  else {
    LOCK();
    puVar1 = (undefined1 *)(*(long *)(this + 0x80) + 0x62b1);
    uVar2 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
    plVar3 = *(long **)(this + 0x80);
    *(undefined8 *)(this + 0x80) = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
      UNLOCK();
      if ((int)plVar3[1] == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xfffffc18;
        (**(code **)(*plVar3 + 0x28))(plVar3,param_1,uVar2);
      }
    }
  }
                    /* try { // try from 001a8f2d to 001a8f38 has its CatchHandler @ 001a8fa6 */
  MessageManagerLock::MessageManagerLock(local_a8,0);
  MessageManagerLock::~MessageManagerLock(local_a8);
  return 0;
}



// Function : setupProcessing
// Namespace: juce:JuceVST3Component
// Entry    : 001a9ff0
// Prototype: undefined4 setupProcessing(JuceVST3Component * this, int * param_1)
// Body     : 001a9ff0 - 001aa0bc


/* non-virtual thunk to juce::JuceVST3Component::setupProcessing(Steinberg::Vst::ProcessSetup&) */

undefined4 __thiscall juce::JuceVST3Component::setupProcessing(JuceVST3Component *this,int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  
  lVar2 = *(long *)(this + 0x78);
  if (lVar2 != 0) {
    LOCK();
    *(undefined1 *)(lVar2 + 0x62b2) = 1;
    UNLOCK();
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
                    /* try { // try from 001aa022 to 001aa027 has its CatchHandler @ 001aa0bd */
    bVar4 = (**(code **)(**(long **)(this + 0x60) + 0x80))();
    uVar5 = 1;
    if ((iVar1 == 1 & bVar4) == 0) goto LAB_001aa0a2;
  }
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xf8) = uVar3;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x100);
  AudioProcessor::setProcessingPrecision(*(AudioProcessor **)(this + 0x60),(uint)(param_1[1] == 1));
  (**(code **)(**(long **)(this + 0x60) + 0xc0))(*(long **)(this + 0x60),*param_1 == 2);
  uVar5 = 0;
                    /* try { // try from 001aa098 to 001aa0a1 has its CatchHandler @ 001aa0bd */
  preparePlugin(*(undefined8 *)(this + 0x100),this + -8,*(int *)(this + 0xf8),0);
LAB_001aa0a2:
  if (lVar2 != 0) {
    LOCK();
    *(undefined1 *)(lVar2 + 0x62b2) = 0;
    UNLOCK();
  }
  return uVar5;
}



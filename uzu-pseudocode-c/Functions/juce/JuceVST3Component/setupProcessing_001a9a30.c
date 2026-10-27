// Function : setupProcessing
// Namespace: juce:JuceVST3Component
// Entry    : 001a9a30
// Prototype: undefined4 setupProcessing(JuceVST3Component * this, int * param_1)
// Body     : 001a9a30 - 001a9afb


/* juce::JuceVST3Component::setupProcessing(Steinberg::Vst::ProcessSetup&) */

undefined4 __thiscall juce::JuceVST3Component::setupProcessing(JuceVST3Component *this,int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  
  lVar2 = *(long *)(this + 0x80);
  if (lVar2 != 0) {
    LOCK();
    *(undefined1 *)(lVar2 + 0x62b2) = 1;
    UNLOCK();
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
                    /* try { // try from 001a9a61 to 001a9a66 has its CatchHandler @ 001a9afc */
    bVar4 = (**(code **)(**(long **)(this + 0x68) + 0x80))();
    uVar5 = 1;
    if ((iVar1 == 1 & bVar4) == 0) goto LAB_001a9ae1;
  }
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x100) = uVar3;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x108);
  AudioProcessor::setProcessingPrecision(*(AudioProcessor **)(this + 0x68),(uint)(param_1[1] == 1));
  (**(code **)(**(long **)(this + 0x68) + 0xc0))(*(long **)(this + 0x68),*param_1 == 2);
  uVar5 = 0;
                    /* try { // try from 001a9ad7 to 001a9ae0 has its CatchHandler @ 001a9afc */
  preparePlugin(*(undefined8 *)(this + 0x108),this,*(int *)(this + 0x100),0);
LAB_001a9ae1:
  if (lVar2 != 0) {
    LOCK();
    *(undefined1 *)(lVar2 + 0x62b2) = 0;
    UNLOCK();
  }
  return uVar5;
}



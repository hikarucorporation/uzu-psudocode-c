// Function : JuceVST3Editor
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b5720
// Prototype: undefined JuceVST3Editor(JuceVST3Editor * this, long * param_1, long param_2)
// Body     : 001b5720 - 001b581d


/* juce::JuceVST3EditController::JuceVST3Editor::JuceVST3Editor(juce::JuceVST3EditController&,
   juce::JuceAudioProcessor&) */

void __thiscall
juce::JuceVST3EditController::JuceVST3Editor::JuceVST3Editor
          (JuceVST3Editor *this,long *param_1,long param_2)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_queryInterface_00703888;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703980;
  *(long **)(this + 0x38) = param_1;
                    /* try { // try from 001b575f to 001b5764 has its CatchHandler @ 001b587e */
  (**(code **)(*param_1 + 8))(param_1);
  *(undefined ***)(this + 0x40) = &PTR___cxa_pure_virtual_007064e0;
  *(undefined ***)(this + 0x48) = &PTR___cxa_pure_virtual_00706510;
  Timer::Timer((Timer *)(this + 0x50));
  *(undefined ***)this = &PTR_queryInterface_00706238;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00706348;
  *(undefined ***)(this + 0x40) = &PTR_queryInterface_007063d0;
  *(undefined ***)(this + 0x48) = &PTR_queryInterface_00706400;
  *(undefined ***)(this + 0x50) = &PTR__JuceVST3Editor_00706430;
  this[0xa8] = (JuceVST3Editor)0x0;
  this[0xc0] = (JuceVST3Editor)0x0;
  *(long **)(this + 200) = param_1;
  LOCK();
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  UNLOCK();
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(this + 0xd8) = 0;
  this[0xe4] = (JuceVST3Editor)0x0;
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
                    /* try { // try from 001b580a to 001b5811 has its CatchHandler @ 001b581e */
  createContentWrapperComponentIfNeeded(this);
  return;
}



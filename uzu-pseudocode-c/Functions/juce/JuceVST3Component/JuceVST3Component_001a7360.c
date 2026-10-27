// Function : JuceVST3Component
// Namespace: juce:JuceVST3Component
// Entry    : 001a7360
// Prototype: undefined JuceVST3Component(JuceVST3Component * this, long * param_1, long * param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001a7360 - 001a7614


/* juce::JuceVST3Component::JuceVST3Component(juce::VSTComSmartPtr<Steinberg::Vst::IHostApplication>
   const&, juce::VSTComSmartPtr<Steinberg::Linux::IRunLoop> const&) */

void __thiscall
juce::JuceVST3Component::JuceVST3Component
          (JuceVST3Component *this,long *param_1,long *param_2,undefined8 param_3,uint *param_4,
          undefined8 param_5)

{
  JuceAudioProcessor *pJVar1;
  long *plVar2;
  JuceAudioProcessor *pJVar3;
  int iVar4;
  AudioPluginAudioProcessor *pAVar5;
  long lVar6;
  JuceAudioProcessor *this_00;
  undefined8 extraout_RDX;
  JuceVST3Component *pJVar7;
  undefined1 *puVar8;
  JuceAudioProcessor *local_48 [3];
  
  *(undefined ***)this = &PTR_queryInterface_00705490;
  *(undefined ***)(this + 8) = &PTR_queryInterface_007055e8;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00705650;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_007056d8;
  *(undefined ***)(this + 0x20) = &PTR_queryInterface_00705718;
  *(undefined ***)(this + 0x28) = &PTR__JuceVST3Component_00705748;
  ScopedRunLoop::ScopedRunLoop((ScopedRunLoop *)(this + 0x30),param_2);
  *(undefined4 *)(this + 0x60) = 1;
  PluginHostType::jucePlugInClientCurrentWrapperType = 2;
                    /* try { // try from 001a73d8 to 001a73e6 has its CatchHandler @ 001a76a7 */
  AudioProcessor::setTypeOfNextNewPlugin(2);
  pAVar5 = createPluginFilter();
                    /* try { // try from 001a73ea to 001a73f0 has its CatchHandler @ 001a7693 */
  AudioProcessor::setTypeOfNextNewPlugin(0);
  *(AudioPluginAudioProcessor **)(this + 0x68) = pAVar5;
  plVar2 = (long *)*param_1;
  *(long **)(this + 0x70) = plVar2;
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 001a7404 to 001a7406 has its CatchHandler @ 001a7626 */
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(JuceVST3Component **)(this + 0x148) = this + 0x158;
  *(undefined8 *)(this + 0x150) = 0;
  this[600] = (JuceVST3Component)0x0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(JuceVST3Component **)(this + 0x290) = this + 0x2a0;
  *(undefined8 *)(this + 0x298) = 0;
  this[0x3a0] = (JuceVST3Component)0x0;
  *(undefined4 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  this[0x3e0] = (JuceVST3Component)0x0;
  CriticalSection::CriticalSection((CriticalSection *)(this + 1000));
  lVar6 = __tls_get_addr(&PTR_007153d8);
  *(undefined1 *)(lVar6 + 8) = 0;
                    /* try { // try from 001a74dd to 001a74e6 has its CatchHandler @ 001a7630 */
  this_00 = operator_new(400);
  JuceAudioProcessor::JuceAudioProcessor(this_00,*(undefined8 *)(this + 0x68));
  LOCK();
  *(int *)(this_00 + 0xd0) = *(int *)(this_00 + 0xd0) + 1;
  UNLOCK();
  LOCK();
  *(int *)(this_00 + 0xd0) = *(int *)(this_00 + 0xd0) + 1;
  UNLOCK();
  if (this_00 != (JuceAudioProcessor *)0x0) {
    LOCK();
    *(int *)(this_00 + 0xd0) = *(int *)(this_00 + 0xd0) + 1;
    UNLOCK();
  }
  pJVar3 = *(JuceAudioProcessor **)(this + 0x78);
  *(JuceAudioProcessor **)(this + 0x78) = this_00;
  local_48[0] = this_00;
  if (pJVar3 != (JuceAudioProcessor *)0x0) {
    LOCK();
    pJVar1 = pJVar3 + 0xd0;
    *(int *)pJVar1 = *(int *)pJVar1 + -1;
    UNLOCK();
    if (*(int *)pJVar1 == 0) {
      JuceAudioProcessor::~JuceAudioProcessor(pJVar3);
      operator_delete(pJVar3);
    }
  }
  pJVar7 = this + 0x28;
  LockedVSTComSmartPtr<juce::JuceAudioProcessor>::~LockedVSTComSmartPtr
            ((LockedVSTComSmartPtr<juce::JuceAudioProcessor> *)local_48);
  LOCK();
  pJVar3 = this_00 + 0xd0;
  *(int *)pJVar3 = *(int *)pJVar3 + -1;
  UNLOCK();
  if (*(int *)pJVar3 == 0) {
    JuceAudioProcessor::~JuceAudioProcessor(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x100) = 0x400;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x108) = 0x40e5888000000000;
                    /* try { // try from 001a75ca to 001a75d2 has its CatchHandler @ 001a762e */
  (**(code **)(**(long **)(this + 0x68) + 0x150))();
  if (detail::PluginUtilities::getHostType()::hostType == '\0') {
    puVar8 = &detail::PluginUtilities::getHostType()::hostType;
    iVar4 = __cxa_guard_acquire();
    if (iVar4 != 0) {
                    /* try { // try from 001a75fc to 001a7600 has its CatchHandler @ 001a7615 */
      detail::PluginUtilities::getHostType()::hostType =
           PluginHostType::getHostType(puVar8,pJVar7,extraout_RDX,param_3,param_4,param_5);
      __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
    }
  }
  return;
}



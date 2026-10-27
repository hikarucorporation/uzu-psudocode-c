// Function : JuceVST3EditController
// Namespace: juce:JuceVST3EditController
// Entry    : 001a76c0
// Prototype: undefined JuceVST3EditController(JuceVST3EditController * this, long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 001a76c0 - 001a787c


/* juce::JuceVST3EditController::JuceVST3EditController(juce::VSTComSmartPtr<Steinberg::Vst::IHostApplication>
   const&, juce::VSTComSmartPtr<Steinberg::Linux::IRunLoop> const&) */

void __thiscall
juce::JuceVST3EditController::JuceVST3EditController
          (JuceVST3EditController *this,long *param_1,long *param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(JuceVST3EditController **)(this + 0x70) = this + 0x60;
  *(JuceVST3EditController **)(this + 0x78) = this + 0x60;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)this = &PTR_queryInterface_00705bf8;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00705e30;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00705e68;
  *(undefined ***)(this + 0x30) = &PTR_queryInterface_00705ea8;
  *(undefined ***)(this + 0x38) = &PTR_queryInterface_00705f48;
  *(undefined ***)(this + 0x88) = &PTR_queryInterface_00705f88;
  *(undefined ***)(this + 0x90) = &PTR_queryInterface_00705fb8;
  *(undefined ***)(this + 0x98) = &PTR_queryInterface_00706040;
  *(undefined ***)(this + 0xa0) = &PTR_queryInterface_00706070;
  *(undefined ***)(this + 0xa8) = &PTR__JuceVST3EditController_007060a0;
  *(undefined ***)(this + 0xb0) = &PTR__JuceVST3EditController_007060e0;
                    /* try { // try from 001a77a2 to 001a77ac has its CatchHandler @ 001a7882 */
  ScopedRunLoop::ScopedRunLoop((ScopedRunLoop *)(this + 0xb8),param_2);
  *(undefined8 *)(this + 0xe8) = 0;
                    /* try { // try from 001a77bf to 001a77c6 has its CatchHandler @ 001a787d */
  AsyncUpdater::AsyncUpdater((AsyncUpdater *)(this + 0xf0));
  *(undefined ***)(this + 0xf0) = &PTR__ComponentRestarter_007061e8;
  *(JuceVST3EditController **)(this + 0x100) = this + 0xb0;
  *(undefined4 *)(this + 0x108) = 0;
  memset(this + 0x114,0xff,0x4100);
  *(undefined4 *)(this + 0x62b4) = 0;
  *(undefined8 *)(this + 0x6298) = 0;
  *(undefined8 *)(this + 0x62a0) = 0;
  *(undefined8 *)(this + 0x62a3) = 0;
  *(undefined8 *)(this + 0x62ab) = 0;
                    /* try { // try from 001a7829 to 001a7867 has its CatchHandler @ 001a7887 */
  uVar1 = isBlueCatHost(this,*(undefined8 **)(this + 0x20),extraout_RDX,param_3,param_4,param_5);
  this[0x62b8] = SUB81(uVar1,0);
  *(undefined4 *)(this + 0x62bc) = 0x3f800000;
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    uVar2 = extraout_RDX_00;
  }
  else {
    (**(code **)*puVar3)(puVar3,0x71ab08,this + 0x20);
    puVar3 = (undefined8 *)*param_1;
    uVar2 = extraout_RDX_01;
  }
  uVar1 = isBlueCatHost(this,puVar3,uVar2,param_3,param_4,param_5);
  this[0x62b8] = (JuceVST3EditController)((byte)this[0x62b8] | (byte)uVar1);
  return;
}



// Function : isBlueCatHost
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3520
// Prototype: ulong isBlueCatHost(undefined8 param_1_00, undefined8 * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
// Body     : 001b3520 - 001b35d2


/* juce::JuceVST3EditController::isBlueCatHost(Steinberg::FUnknown*) const */

ulong __thiscall
juce::JuceVST3EditController::isBlueCatHost
          (undefined8 param_1_00,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  long *local_130;
  byte *local_128;
  String local_120 [8];
  ushort local_118 [132];
  
  local_130 = (long *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*param_2;
                    /* try { // try from 001b353b to 001b354e has its CatchHandler @ 001b35e5 */
    (*(code *)*puVar3)(param_2,0x71ac80,&local_130);
    if (local_130 != (long *)0x0) {
                    /* try { // try from 001b355c to 001b3563 has its CatchHandler @ 001b35e3 */
      iVar1 = (**(code **)(*local_130 + 0x18))(local_130,local_118);
      if (iVar1 == 0) {
                    /* try { // try from 001b357a to 001b3588 has its CatchHandler @ 001b35d3 */
        juce::String::String(local_120,local_118);
        StringRef::StringRef((StringRef *)&local_128,"Blue Cat\'s VST3 Host");
        uVar2 = juce::String::contains(local_120,local_128,extraout_RDX,puVar3,param_5,param_6);
        uVar2 = uVar2 & 0xffffffff;
        juce::String::~String(local_120);
      }
      else {
        uVar2 = 0;
      }
      if (local_130 == (long *)0x0) {
        return uVar2;
      }
                    /* try { // try from 001b35c3 to 001b35c5 has its CatchHandler @ 001b35db */
      (**(code **)(*local_130 + 0x10))();
      return uVar2;
    }
  }
  return 0;
}



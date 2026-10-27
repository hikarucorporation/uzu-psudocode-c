// Function : NormalisableRange
// Namespace: juce:NormalisableRange_double_
// Entry    : 001c0540
// Prototype: undefined NormalisableRange(NormalisableRange<double> * this, undefined8 * param_1)
// Body     : 001c0540 - 001c061f


/* juce::NormalisableRange<double>::NormalisableRange(juce::NormalisableRange<double> const&) */

void __thiscall
juce::NormalisableRange<double>::NormalisableRange
          (NormalisableRange<double> *this,undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  this[0x20] = *(NormalisableRange<double> *)(param_1 + 4);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((long)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if ((code *)param_1[7] != (code *)0x0) {
                    /* try { // try from 001c0581 to 001c058a has its CatchHandler @ 001c06a2 */
    (*(code *)param_1[7])(this + 0x28,param_1 + 5,2);
    *(undefined8 *)(this + 0x40) = param_1[8];
    *(undefined8 *)(this + 0x38) = param_1[7];
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  if ((code *)param_1[0xb] != (code *)0x0) {
                    /* try { // try from 001c05b9 to 001c05c2 has its CatchHandler @ 001c0661 */
    (*(code *)param_1[0xb])(this + 0x48,param_1 + 9,2);
    *(undefined8 *)(this + 0x60) = param_1[0xc];
    *(undefined8 *)(this + 0x58) = param_1[0xb];
  }
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if ((code *)param_1[0xf] != (code *)0x0) {
                    /* try { // try from 001c05f1 to 001c05fa has its CatchHandler @ 001c0620 */
    (*(code *)param_1[0xf])(this + 0x68,param_1 + 0xd,2);
    *(undefined8 *)(this + 0x80) = param_1[0x10];
    *(undefined8 *)(this + 0x78) = param_1[0xf];
  }
  return;
}



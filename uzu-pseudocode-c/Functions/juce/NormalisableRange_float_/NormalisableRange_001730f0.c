// Function : NormalisableRange
// Namespace: juce:NormalisableRange_float_
// Entry    : 001730f0
// Prototype: undefined NormalisableRange(NormalisableRange<float> * this, undefined8 * param_1)
// Body     : 001730f0 - 001731c1


/* juce::NormalisableRange<float>::NormalisableRange(juce::NormalisableRange<float> const&) */

void __thiscall
juce::NormalisableRange<float>::NormalisableRange
          (NormalisableRange<float> *this,undefined8 *param_1)

{
  undefined8 uVar1;
  
  this[0x10] = *(NormalisableRange<float> *)(param_1 + 2);
  uVar1 = param_1[1];
  *(undefined8 *)this = *param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if ((code *)param_1[5] != (code *)0x0) {
                    /* try { // try from 00173129 to 00173132 has its CatchHandler @ 00173244 */
    (*(code *)param_1[5])(this + 0x18,param_1 + 3,2);
    *(undefined8 *)(this + 0x30) = param_1[6];
    *(undefined8 *)(this + 0x28) = param_1[5];
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if ((code *)param_1[9] != (code *)0x0) {
                    /* try { // try from 00173161 to 0017316a has its CatchHandler @ 00173203 */
    (*(code *)param_1[9])(this + 0x38,param_1 + 7,2);
    *(undefined8 *)(this + 0x50) = param_1[10];
    *(undefined8 *)(this + 0x48) = param_1[9];
  }
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if ((code *)param_1[0xd] != (code *)0x0) {
                    /* try { // try from 00173199 to 001731a2 has its CatchHandler @ 001731c2 */
    (*(code *)param_1[0xd])(this + 0x58,param_1 + 0xb,2);
    *(undefined8 *)(this + 0x70) = param_1[0xe];
    *(undefined8 *)(this + 0x68) = param_1[0xd];
  }
  return;
}



// Function : Optional
// Namespace: VST3:Optional_VST3__Vst2xProgram_
// Entry    : 001a43e0
// Prototype: undefined Optional(Optional<VST3::Vst2xProgram> * this, undefined8 * param_1)
// Body     : 001a43e0 - 001a447d


/* VST3::Optional<VST3::Vst2xProgram>::Optional(VST3::Vst2xProgram&&) */

void __thiscall
VST3::Optional<VST3::Vst2xProgram>::Optional(Optional<VST3::Vst2xProgram> *this,undefined8 *param_1)

{
  undefined8 *__src;
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *(undefined8 *)this = *param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_1[4];
  *(undefined8 *)(this + 0x18) = param_1[3];
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = param_1[5];
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)(this + 0x30) = param_1[6];
  *(Optional<VST3::Vst2xProgram> **)(this + 0x38) = this + 0x48;
  __src = (undefined8 *)param_1[7];
  if (__src == param_1 + 9) {
    memcpy(this + 0x48,__src,param_1[8] + 1);
  }
  else {
    *(undefined8 **)(this + 0x38) = __src;
    *(undefined8 *)(this + 0x48) = param_1[9];
  }
  *(undefined8 *)(this + 0x40) = param_1[8];
  param_1[7] = param_1 + 9;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  this[0x58] = (Optional<VST3::Vst2xProgram>)0x1;
  return;
}



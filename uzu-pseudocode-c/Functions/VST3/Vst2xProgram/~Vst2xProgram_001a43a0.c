// Function : ~Vst2xProgram
// Namespace: VST3:Vst2xProgram
// Entry    : 001a43a0
// Prototype: undefined ~Vst2xProgram(Vst2xProgram * this)
// Body     : 001a43a0 - 001a43d3


/* VST3::Vst2xProgram::~Vst2xProgram() */

void __thiscall VST3::Vst2xProgram::~Vst2xProgram(Vst2xProgram *this)

{
  if (*(Vst2xProgram **)(this + 0x38) != this + 0x48) {
    operator_delete(*(Vst2xProgram **)(this + 0x38));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}



// Function : ~ProgramListWithPitchNames
// Namespace: Steinberg:Vst:ProgramListWithPitchNames
// Entry    : 001a1de0
// Prototype: undefined ~ProgramListWithPitchNames(ProgramListWithPitchNames * this)
// Body     : 001a1de0 - 001a1df1


/* Steinberg::Vst::ProgramListWithPitchNames::~ProgramListWithPitchNames() */

void __thiscall
Steinberg::Vst::ProgramListWithPitchNames::~ProgramListWithPitchNames
          (ProgramListWithPitchNames *this)

{
  ~ProgramListWithPitchNames(this);
  operator_delete(this);
  return;
}



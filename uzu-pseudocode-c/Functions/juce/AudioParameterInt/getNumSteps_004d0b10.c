// Function : getNumSteps
// Namespace: juce:AudioParameterInt
// Entry    : 004d0b10
// Prototype: int getNumSteps(AudioParameterInt * this)
// Body     : 004d0b10 - 004d0b33


/* juce::AudioParameterInt::getNumSteps() const */

int __thiscall juce::AudioParameterInt::getNumSteps(AudioParameterInt *this)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = (float *)(**(code **)(*(long *)this + 0x98))();
  fVar1 = *pfVar2;
  fVar3 = pfVar2[1];
  if (pfVar2[1] <= fVar1) {
    fVar3 = fVar1;
  }
  return (int)(fVar3 - fVar1) + 1;
}



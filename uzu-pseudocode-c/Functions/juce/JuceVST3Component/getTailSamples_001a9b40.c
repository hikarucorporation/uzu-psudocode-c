// Function : getTailSamples
// Namespace: juce:JuceVST3Component
// Entry    : 001a9b40
// Prototype: double getTailSamples(JuceVST3Component * this)
// Body     : 001a9b40 - 001a9ba2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3Component::getTailSamples() */

double __thiscall juce::JuceVST3Component::getTailSamples(JuceVST3Component *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(**(code **)(**(long **)(this + 0x68) + 0x88))();
  dVar1 = 0.0;
  if (((0.0 < dVar2) && (0.0 < *(double *)(this + 0x108))) &&
     (dVar1 = 2.12199579047121e-314, (double)(_DAT_005d91b0 & (ulong)dVar2) < DAT_005d94e0)) {
    return dVar2 * *(double *)(this + 0x108) + _DAT_005db360 + DAT_005d9098;
  }
  return dVar1;
}



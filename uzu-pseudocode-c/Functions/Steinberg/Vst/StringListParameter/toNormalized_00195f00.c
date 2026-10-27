// Function : toNormalized
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 00195f00
// Prototype: double toNormalized(double param_1, StringListParameter * this)
// Body     : 00195f00 - 00195f16


/* Steinberg::Vst::StringListParameter::toNormalized(double) const */

double __thiscall
Steinberg::Vst::StringListParameter::toNormalized(double param_1,StringListParameter *this)

{
  if (*(int *)(this + 0x314) < 1) {
    return 0.0;
  }
  return param_1 / (double)*(int *)(this + 0x314);
}



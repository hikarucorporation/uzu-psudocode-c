// Function : proportionOfLengthToValue
// Namespace: juce:Slider
// Entry    : 002e4e60
// Prototype: double proportionOfLengthToValue(double param_1, Slider * this)
// Body     : 002e4e60 - 002e500b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::proportionOfLengthToValue(double) */

double __thiscall juce::Slider::proportionOfLengthToValue(double param_1,Slider *this)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(long *)(this + 0x1a0);
  local_20 = _DAT_005d9000;
  if (param_1 <= _DAT_005d9000) {
    local_20 = param_1;
  }
  local_20 = (double)(~-(ulong)(param_1 < 0.0) & (ulong)local_20);
  if (*(long *)(lVar1 + 0x130) != 0) {
    local_10 = *(undefined8 *)(lVar1 + 0xf8);
    local_18 = *(undefined8 *)(lVar1 + 0x100);
                    /* try { // try from 002e4ebc to 002e4ed0 has its CatchHandler @ 002e500c */
    dVar2 = (double)(**(code **)(lVar1 + 0x138))(lVar1 + 0x120,&local_10,&local_18,&local_20);
    return dVar2;
  }
  if (*(char *)(lVar1 + 0x118) == '\0') {
    if (0.0 < local_20) {
      if ((*(double *)(lVar1 + 0x110) != _DAT_005d9000) ||
         (NAN(*(double *)(lVar1 + 0x110)) || NAN(_DAT_005d9000))) {
        dVar2 = log(local_20);
        local_20 = exp(dVar2 / *(double *)(lVar1 + 0x110));
      }
    }
    return (*(double *)(lVar1 + 0x100) - *(double *)(lVar1 + 0xf8)) * local_20 +
           *(double *)(lVar1 + 0xf8);
  }
  dVar2 = local_20 + local_20 + DAT_00651e70;
  if (((*(double *)(lVar1 + 0x110) != _DAT_005d9000) ||
      (NAN(*(double *)(lVar1 + 0x110)) || NAN(_DAT_005d9000))) && ((dVar2 != 0.0 || (NAN(dVar2)))))
  {
    dVar3 = log((double)(_DAT_005d91b0 & (ulong)dVar2));
    dVar3 = exp(dVar3 / *(double *)(lVar1 + 0x110));
    dVar2 = (double)(-(ulong)(dVar2 < DAT_005db340) & (_DAT_00652d10 ^ (ulong)dVar3) |
                    ~-(ulong)(dVar2 < DAT_005db340) & (ulong)dVar3);
  }
  return (dVar2 + _DAT_005d9000) *
         (*(double *)(lVar1 + 0x100) - *(double *)(lVar1 + 0xf8)) * DAT_005db338 +
         *(double *)(lVar1 + 0xf8);
}



// Function : valueToProportionOfLength
// Namespace: juce:Slider
// Entry    : 002e5020
// Prototype: double valueToProportionOfLength(double param_1, Slider * this)
// Body     : 002e5020 - 002e515e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::valueToProportionOfLength(double) */

double __thiscall juce::Slider::valueToProportionOfLength(double param_1,Slider *this)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  undefined8 uStack_10;
  
  lVar1 = *(long *)(this + 0x1a0);
  local_20 = *(double *)(lVar1 + 0xf8);
  if (*(long *)(lVar1 + 0x150) == 0) {
    dVar2 = *(double *)(lVar1 + 0x110);
    dVar4 = (param_1 - local_20) / (*(double *)(lVar1 + 0x100) - local_20);
    dVar3 = _DAT_005d9000;
    if (dVar4 <= _DAT_005d9000) {
      dVar3 = dVar4;
    }
    dVar3 = (double)(~-(ulong)(dVar4 < 0.0) & (ulong)dVar3);
    if ((dVar2 != _DAT_005d9000) || (NAN(dVar2) || NAN(_DAT_005d9000))) {
      if (*(char *)(lVar1 + 0x118) == '\0') {
        dVar2 = pow(dVar3,dVar2);
        return dVar2;
      }
      local_18 = dVar3 + dVar3 + DAT_00651e70;
      uStack_10 = 0;
      dVar2 = pow((double)(_DAT_005d91b0 & (ulong)local_18),dVar2);
      return ((double)(~-(ulong)(local_18 < 0.0) & (ulong)_DAT_005d9000 |
                      (ulong)DAT_00651e70 & -(ulong)(local_18 < 0.0)) * dVar2 + _DAT_005d9000) *
             DAT_005db338;
    }
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x100);
                    /* try { // try from 002e5062 to 002e5076 has its CatchHandler @ 002e515f */
    local_30 = param_1;
    dVar2 = (double)(**(code **)(lVar1 + 0x158))(lVar1 + 0x140,&local_20,&local_28,&local_30);
    dVar3 = _DAT_005d9000;
    if (dVar2 <= _DAT_005d9000) {
      dVar3 = dVar2;
    }
    dVar3 = (double)(~-(ulong)(dVar2 < 0.0) & (ulong)dVar3);
  }
  return dVar3;
}



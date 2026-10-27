// Function : setNormalized
// Namespace: juce:JuceVST3EditController:ProgramChangeParameter
// Entry    : 001b0060
// Prototype: undefined8 setNormalized(double param_1, ProgramChangeParameter * this)
// Body     : 001b0060 - 001b015f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3EditController::ProgramChangeParameter::setNormalized(double) */

undefined8 __thiscall
juce::JuceVST3EditController::ProgramChangeParameter::setNormalized
          (double param_1,ProgramChangeParameter *this)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = *(int *)(this + 0x314);
  iVar1 = (int)((double)(iVar3 + 1) * param_1);
  if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  iVar1 = (**(code **)(**(long **)(this + 0x338) + 0xe8))();
  if (iVar3 != iVar1) {
    (**(code **)(**(long **)(this + 0x338) + 0xf0))(*(long **)(this + 0x338),iVar3);
  }
  dVar4 = *(double *)(this + 0x328);
  dVar6 = (double)((ulong)dVar4 & _DAT_005d91b0);
  if ((dVar6 == DAT_005d94e0) ||
     (dVar5 = (double)(_DAT_005d91b0 & (ulong)param_1), dVar5 == DAT_005d94e0)) {
    if ((dVar4 != param_1) || (NAN(dVar4) || NAN(param_1))) {
LAB_001b0111:
      *(double *)(this + 0x328) = param_1;
      if (Steinberg::FObject::gUpdateHandler == (long *)0x0) {
        uVar2 = (**(code **)(*(long *)this + 0x68))(this,1);
      }
      else {
        uVar2 = (**(code **)(*Steinberg::FObject::gUpdateHandler + 0x28))
                          (Steinberg::FObject::gUpdateHandler,this,1);
      }
      return CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else {
    dVar4 = (double)((ulong)(dVar4 - param_1) & _DAT_005d91b0);
    if (DAT_005db368 < dVar4) {
      if (dVar5 <= dVar6) {
        dVar5 = dVar6;
      }
      if (dVar5 * DAT_005db370 < dVar4) goto LAB_001b0111;
    }
  }
  return 0;
}



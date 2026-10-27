// Function : setNormalized
// Namespace: juce:JuceVST3EditController:Param
// Entry    : 001afd00
// Prototype: undefined8 setNormalized(double param_1, Param * this)
// Body     : 001afd00 - 001afe98


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3EditController::Param::setNormalized(double) */

undefined8 __thiscall juce::JuceVST3EditController::Param::setNormalized(double param_1,Param *this)

{
  AudioProcessorParameter *this_00;
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = _DAT_005d9000;
  if (param_1 <= _DAT_005d9000) {
    dVar6 = param_1;
  }
  dVar6 = (double)(~-(ulong)(param_1 < 0.0) & (ulong)dVar6);
  dVar10 = *(double *)(this + 0x328);
  dVar9 = (double)((ulong)dVar6 & _DAT_005d91b0);
  if ((dVar9 == DAT_005d94e0) ||
     (dVar7 = (double)(_DAT_005d91b0 & (ulong)dVar10), dVar7 == DAT_005d94e0)) {
    if ((dVar6 == dVar10) && (!NAN(dVar6) && !NAN(dVar10))) {
      return 0;
    }
  }
  else {
    dVar10 = (double)((ulong)(dVar6 - dVar10) & _DAT_005d91b0);
    if (dVar10 <= DAT_005db368) {
      return 0;
    }
    if (dVar7 <= dVar9) {
      dVar7 = dVar9;
    }
    if (dVar10 <= dVar7 * DAT_005db370) {
      return 0;
    }
  }
  *(double *)(this + 0x328) = dVar6;
  if ((*(byte *)(*(long *)(this + 0x338) + 0x62b1) & 1) != 0) goto LAB_001afe63;
  this_00 = *(AudioProcessorParameter **)(this + 0x340);
  fVar3 = (float)dVar6;
  fVar4 = (float)(**(code **)(*(long *)this_00 + 0x10))(this_00);
  fVar8 = (float)((uint)fVar4 & _DAT_005d91c0);
  if ((fVar8 == DAT_005d94c8) ||
     (fVar5 = (float)(_DAT_005d91c0 & (uint)fVar3), fVar5 == DAT_005d94c8)) {
    if ((fVar4 == fVar3) && (!NAN(fVar4) && !NAN(fVar3))) goto LAB_001afe63;
  }
  else {
    fVar4 = (float)((uint)(fVar4 - fVar3) & _DAT_005d91c0);
    if (fVar4 <= DAT_005d94cc) goto LAB_001afe63;
    if (fVar5 <= fVar8) {
      fVar5 = fVar8;
    }
    if (fVar4 <= fVar5 * DAT_005d94d0) goto LAB_001afe63;
  }
  lVar1 = __tls_get_addr(&PTR_007153d8);
  *(undefined1 *)(lVar1 + 8) = 1;
                    /* try { // try from 001afe4c to 001afe57 has its CatchHandler @ 001afe99 */
  AudioProcessorParameter::setValueNotifyingHost(fVar3,this_00);
  *(undefined1 *)(lVar1 + 8) = 0;
LAB_001afe63:
  if (Steinberg::FObject::gUpdateHandler == (long *)0x0) {
    uVar2 = (**(code **)(*(long *)this + 0x68))(this,1);
  }
  else {
    uVar2 = (**(code **)(*Steinberg::FObject::gUpdateHandler + 0x28))
                      (Steinberg::FObject::gUpdateHandler,this,1);
  }
  return CONCAT71((int7)((ulong)uVar2 >> 8),1);
}



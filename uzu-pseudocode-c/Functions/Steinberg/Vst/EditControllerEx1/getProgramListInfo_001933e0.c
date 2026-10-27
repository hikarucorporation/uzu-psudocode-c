// Function : getProgramListInfo
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001933e0
// Prototype: undefined8 getProgramListInfo(EditControllerEx1 * this, uint param_1, void * param_2)
// Body     : 001933e0 - 00193420


/* Steinberg::Vst::EditControllerEx1::getProgramListInfo(int, Steinberg::Vst::ProgramListInfo&) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::getProgramListInfo
          (EditControllerEx1 *this,uint param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((-1 < (int)param_1) &&
     ((int)param_1 < (int)((ulong)(*(long *)(this + 0xb0) - *(long *)(this + 0xa8)) >> 3))) {
    memcpy(param_2,(void *)(*(long *)(*(long *)(this + 0xa8) + (ulong)param_1 * 8) + 0xc),0x108);
    uVar1 = 0;
  }
  return uVar1;
}



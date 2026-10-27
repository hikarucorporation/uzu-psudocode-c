// Function : getProgramListInfo
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00193430
// Prototype: undefined8 getProgramListInfo(EditControllerEx1 * this, uint param_1, void * param_2)
// Body     : 00193430 - 0019346a


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::getProgramListInfo(int,
   Steinberg::Vst::ProgramListInfo&) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::getProgramListInfo
          (EditControllerEx1 *this,uint param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((-1 < (int)param_1) &&
     ((int)param_1 < (int)((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 3))) {
    memcpy(param_2,(void *)(*(long *)(*(long *)(this + 0x20) + (ulong)param_1 * 8) + 0xc),0x108);
    uVar1 = 0;
  }
  return uVar1;
}



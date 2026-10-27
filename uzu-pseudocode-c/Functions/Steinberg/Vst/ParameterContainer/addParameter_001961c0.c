// Function : addParameter
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 001961c0
// Prototype: undefined addParameter(ParameterContainer * this, void * param_1)
// Body     : 001961c0 - 001962d1


/* Steinberg::Vst::ParameterContainer::addParameter(Steinberg::Vst::ParameterInfo const&) */

void __thiscall
Steinberg::Vst::ParameterContainer::addParameter(ParameterContainer *this,void *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)this == 0) {
    puVar1 = operator_new(0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 **)this = puVar1;
    pvVar2 = operator_new(0x50);
                    /* try { // try from 00196202 to 0019620d has its CatchHandler @ 001962d2 */
    std::__uninitialized_copy<false>::
    __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*,Steinberg::IPtr<Steinberg::Vst::Parameter>*>
              (0,0,(long)pvVar2);
    plVar4 = (long *)*puVar1;
    plVar3 = (long *)puVar1[1];
    if (plVar4 != plVar3) {
      do {
        if ((long *)*plVar4 != (long *)0x0) {
                    /* try { // try from 001962bb to 001962bd has its CatchHandler @ 001962ff */
          (**(code **)(*(long *)*plVar4 + 0x10))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3);
      plVar4 = (long *)*puVar1;
    }
    if (plVar4 != (long *)0x0) {
      operator_delete(plVar4);
    }
    *puVar1 = pvVar2;
    puVar1[1] = pvVar2;
    puVar1[2] = (long)pvVar2 + 0x50;
  }
  plVar3 = operator_new(0x338);
  *(undefined4 *)(plVar3 + 1) = 1;
  *plVar3 = (long)&PTR_queryInterface_00703f90;
  memcpy(plVar3 + 2,param_1,0x318);
  plVar3[0x65] = *(long *)((long)param_1 + 0x308);
  *(undefined4 *)(plVar3 + 0x66) = 4;
  addParameter(this,plVar3);
  return;
}



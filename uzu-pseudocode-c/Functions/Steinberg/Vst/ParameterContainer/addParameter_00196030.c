// Function : addParameter
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 00196030
// Prototype: long * addParameter(ParameterContainer * this, long * param_1)
// Body     : 00196030 - 0019615c


/* Steinberg::Vst::ParameterContainer::addParameter(Steinberg::Vst::Parameter*) */

long * __thiscall
Steinberg::Vst::ParameterContainer::addParameter(ParameterContainer *this,long *param_1)

{
  long lVar1;
  long lVar2;
  vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
  *this_00;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  uint *puVar6;
  _Rb_tree_node_base *p_Var7;
  long *plVar8;
  long *local_38;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    puVar3 = operator_new(0x18);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined8 **)this = puVar3;
    pvVar4 = operator_new(0x50);
                    /* try { // try from 00196074 to 0019607f has its CatchHandler @ 0019615d */
    std::__uninitialized_copy<false>::
    __uninit_copy<Steinberg::IPtr<Steinberg::Vst::Parameter>const*,Steinberg::IPtr<Steinberg::Vst::Parameter>*>
              (0,0,(long)pvVar4);
    plVar8 = (long *)*puVar3;
    plVar5 = (long *)puVar3[1];
    if (plVar8 != plVar5) {
      do {
        if ((long *)*plVar8 != (long *)0x0) {
                    /* try { // try from 0019611b to 0019611d has its CatchHandler @ 001961ae */
          (**(code **)(*(long *)*plVar8 + 0x10))();
          *plVar8 = 0;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar5);
      plVar8 = (long *)*puVar3;
    }
    if (plVar8 != (long *)0x0) {
      operator_delete(plVar8);
    }
    *puVar3 = pvVar4;
    puVar3[1] = pvVar4;
    puVar3[2] = (long)pvVar4 + 0x50;
    plVar5 = *(long **)this;
  }
  lVar1 = plVar5[1];
  lVar2 = *plVar5;
  puVar6 = (uint *)(**(code **)(*param_1 + 0x80))(param_1);
  p_Var7 = std::
           map<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
           ::operator[]((map<unsigned_int,unsigned_long,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
                         *)(this + 8),puVar6);
  *(long *)p_Var7 = lVar1 - lVar2 >> 3;
  this_00 = *(vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
              **)this;
  puVar3 = *(undefined8 **)(this_00 + 8);
  local_38 = param_1;
  if (puVar3 == *(undefined8 **)(this_00 + 0x10)) {
                    /* try { // try from 00196120 to 0019612a has its CatchHandler @ 0019618c */
    std::
    vector<Steinberg::IPtr<Steinberg::Vst::Parameter>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Parameter>>>
    ::_M_realloc_insert<Steinberg::IPtr<Steinberg::Vst::Parameter>>
              (this_00,(long)puVar3,(long *)&local_38);
  }
  else {
    *puVar3 = param_1;
                    /* try { // try from 001960f1 to 001960f6 has its CatchHandler @ 0019618c */
    (**(code **)(*param_1 + 8))(param_1);
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
  }
  if (local_38 != (long *)0x0) {
                    /* try { // try from 00196137 to 00196139 has its CatchHandler @ 00196184 */
    (**(code **)(*local_38 + 0x10))();
  }
  return param_1;
}



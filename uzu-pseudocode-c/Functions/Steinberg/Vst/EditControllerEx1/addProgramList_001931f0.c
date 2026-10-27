// Function : addProgramList
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001931f0
// Prototype: undefined8 addProgramList(EditControllerEx1 * this, long * param_1)
// Body     : 001931f0 - 00193285


/* Steinberg::Vst::EditControllerEx1::addProgramList(Steinberg::Vst::ProgramList*) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::addProgramList(EditControllerEx1 *this,long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  _Rb_tree_node_base *p_Var4;
  undefined8 uVar5;
  char local_25;
  int local_24;
  long *local_20;
  
  lVar1 = *(long *)(this + 0xb0);
  lVar2 = *(long *)(this + 0xa8);
  local_24 = *(int *)((long)param_1 + 0xc);
  local_20 = param_1;
  p_Var4 = std::
           map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
           ::operator[]((map<int,unsigned_long,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
                         *)(this + 0xc0),&local_24);
  *(long *)p_Var4 = lVar1 - lVar2 >> 3;
  local_25 = '\0';
  puVar3 = *(undefined8 **)(this + 0xb0);
  if (puVar3 == *(undefined8 **)(this + 0xb8)) {
    std::
    vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>>
    ::_M_realloc_insert<Steinberg::Vst::ProgramList*&,bool>
              ((vector<Steinberg::IPtr<Steinberg::Vst::ProgramList>,std::allocator<Steinberg::IPtr<Steinberg::Vst::ProgramList>>>
                *)(this + 0xa8),(long)puVar3,(long *)&local_20,&local_25);
  }
  else {
    *puVar3 = param_1;
    *(undefined8 **)(this + 0xb0) = puVar3 + 1;
  }
  uVar5 = (**(code **)(*local_20 + 0x48))(local_20,this);
  return CONCAT71((int7)((ulong)uVar5 >> 8),1);
}



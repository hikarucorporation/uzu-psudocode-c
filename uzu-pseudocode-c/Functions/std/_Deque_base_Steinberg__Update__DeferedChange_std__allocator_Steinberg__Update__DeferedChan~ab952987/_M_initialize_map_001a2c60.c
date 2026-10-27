// Function : _M_initialize_map
// Namespace: std:_Deque_base_Steinberg__Update__DeferedChange_std__allocator_Steinberg__Update__DeferedChan~ab952987
// Entry    : 001a2c60
// Prototype: undefined _M_initialize_map(_Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>> * this, ulong param_1)
// Body     : 001a2c60 - 001a2d24


/* std::_Deque_base<Steinberg::Update::DeferedChange,
   std::allocator<Steinberg::Update::DeferedChange> >::_M_initialize_map(unsigned long) */

void __thiscall
std::_Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
::_M_initialize_map(_Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                    *this,ulong param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar8 = param_1 >> 5;
  uVar6 = 5;
  if (5 < uVar8) {
    uVar6 = uVar8;
  }
  *(ulong *)(this + 8) = uVar6 + 3;
  pvVar5 = operator_new(uVar6 * 8 + 0x18);
  *(void **)this = pvVar5;
  plVar1 = (long *)((long)pvVar5 + ((uVar6 - (uVar8 + 1)) + 3 & 0xfffffffffffffffe) * 4);
  plVar2 = plVar1 + uVar8;
  plVar7 = plVar1;
  do {
                    /* try { // try from 001a2cc0 to 001a2cc9 has its CatchHandler @ 001a2d25 */
    pvVar5 = operator_new(0x200);
    *plVar7 = (long)pvVar5;
    plVar7 = plVar7 + 1;
  } while (plVar7 < plVar2 + 1);
  *(long **)(this + 0x28) = plVar1;
  lVar3 = *plVar1;
  *(long *)(this + 0x18) = lVar3;
  *(long *)(this + 0x20) = lVar3 + 0x200;
  *(long **)(this + 0x48) = plVar2;
  lVar4 = *plVar2;
  *(long *)(this + 0x38) = lVar4;
  *(long *)(this + 0x40) = lVar4 + 0x200;
  *(long *)(this + 0x10) = lVar3;
  *(ulong *)(this + 0x30) = (ulong)((uint)param_1 & 0x1f) * 0x10 + lVar4;
  return;
}



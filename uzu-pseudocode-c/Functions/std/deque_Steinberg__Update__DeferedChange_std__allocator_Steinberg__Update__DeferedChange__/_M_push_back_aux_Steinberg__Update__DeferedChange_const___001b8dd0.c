// Function : _M_push_back_aux<Steinberg::Update::DeferedChange_const&>
// Namespace: std:deque_Steinberg__Update__DeferedChange_std__allocator_Steinberg__Update__DeferedChange__
// Entry    : 001b8dd0
// Prototype: void _M_push_back_aux<Steinberg::Update::DeferedChange_const&>(deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>> * this, undefined8 * param_1)
// Body     : 001b8dd0 - 001b8ea0


/* void std::deque<Steinberg::Update::DeferedChange,
   std::allocator<Steinberg::Update::DeferedChange>
   >::_M_push_back_aux<Steinberg::Update::DeferedChange const&>(Steinberg::Update::DeferedChange
   const&) */

void __thiscall
std::deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
_M_push_back_aux<Steinberg::Update::DeferedChange_const&>
          (deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
           *this,undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x48);
  if ((*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 4) +
      (*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 4) +
      ((((ulong)(lVar3 - *(long *)(this + 0x28)) >> 3) - 1) + (ulong)(lVar3 == 0)) * 0x20 ==
      0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ((ulong)(*(long *)(this + 8) - (lVar3 - *(long *)this >> 3)) < 2) {
    _M_reallocate_map(this,(long *)0x1,'\0');
    lVar3 = *(long *)(this + 0x48);
  }
  pvVar2 = operator_new(0x200);
  *(void **)(lVar3 + 8) = pvVar2;
  puVar1 = *(undefined8 **)(this + 0x30);
  *puVar1 = *param_1;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  lVar3 = *(long *)(this + 0x48);
  *(long *)(this + 0x48) = lVar3 + 8;
  lVar3 = *(long *)(lVar3 + 8);
  *(long *)(this + 0x38) = lVar3;
  *(long *)(this + 0x40) = lVar3 + 0x200;
  *(long *)(this + 0x30) = lVar3;
  return;
}



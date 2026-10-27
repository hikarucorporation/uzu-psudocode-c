// Function : _M_push_back_aux<Steinberg::Update::UpdateData_const&>
// Namespace: std:deque_Steinberg__Update__UpdateData_std__allocator_Steinberg__Update__UpdateData__
// Entry    : 001b8b80
// Prototype: void _M_push_back_aux<Steinberg::Update::UpdateData_const&>(deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>> * this, undefined8 * param_1)
// Body     : 001b8b80 - 001b8c68


/* void std::deque<Steinberg::Update::UpdateData, std::allocator<Steinberg::Update::UpdateData>
   >::_M_push_back_aux<Steinberg::Update::UpdateData const&>(Steinberg::Update::UpdateData const&)
    */

void __thiscall
std::deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>::
_M_push_back_aux<Steinberg::Update::UpdateData_const&>
          (deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>> *this,
          undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x48);
  if ((*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 3) * -0x5555555555555555 +
      (*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 3) * -0x5555555555555555 +
      ((lVar4 - *(long *)(this + 0x28) >> 3) + -1 + (ulong)(lVar4 == 0)) * 0x15 == 0x555555555555555
     ) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  if ((ulong)(*(long *)(this + 8) - (lVar4 - *(long *)this >> 3)) < 2) {
    _M_reallocate_map(this,1,'\0');
    lVar4 = *(long *)(this + 0x48);
  }
  pvVar3 = operator_new(0x1f8);
  *(void **)(lVar4 + 8) = pvVar3;
  puVar1 = *(undefined8 **)(this + 0x30);
  puVar1[2] = param_1[2];
  uVar2 = param_1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  lVar4 = *(long *)(this + 0x48);
  *(long *)(this + 0x48) = lVar4 + 8;
  lVar4 = *(long *)(lVar4 + 8);
  *(long *)(this + 0x38) = lVar4;
  *(long *)(this + 0x40) = lVar4 + 0x1f8;
  *(long *)(this + 0x30) = lVar4;
  return;
}



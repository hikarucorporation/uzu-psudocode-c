// Function : _M_reallocate_map
// Namespace: std:deque_Steinberg__Update__UpdateData_std__allocator_Steinberg__Update__UpdateData__
// Entry    : 001b8c70
// Prototype: undefined _M_reallocate_map(deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>> * this, ulong param_1, char param_2)
// Body     : 001b8c70 - 001b8dcf


/* std::deque<Steinberg::Update::UpdateData, std::allocator<Steinberg::Update::UpdateData>
   >::_M_reallocate_map(unsigned long, bool) */

void __thiscall
std::deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>::
_M_reallocate_map(deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>
                  *this,ulong param_1,char param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  long *__src;
  long *__dest;
  long *plVar4;
  long lVar5;
  long lVar6;
  size_t __n;
  long lVar7;
  
  uVar3 = *(ulong *)(this + 8);
  __src = *(long **)(this + 0x28);
  lVar6 = *(long *)(this + 0x48) - (long)__src;
  lVar5 = lVar6 >> 3;
  lVar7 = param_1 + lVar5 + 1;
  if ((ulong)(lVar7 * 2) < uVar3) {
    uVar2 = 0;
    if (param_2 != '\0') {
      uVar2 = param_1;
    }
    plVar4 = (long *)((uVar3 - lVar7 & 0xfffffffffffffffe) * 4 + *(long *)this + uVar2 * 8);
    __n = lVar6 + 8;
    if (plVar4 < __src) {
      if (__n == 0) goto LAB_001b8d77;
      __dest = plVar4;
    }
    else {
      if (__n == 0) goto LAB_001b8d77;
      __dest = (long *)((long)plVar4 + ((lVar5 + 1) * 8 - __n));
    }
    memmove(__dest,__src,__n);
  }
  else {
    uVar2 = uVar3;
    if (uVar3 < param_1) {
      uVar2 = param_1;
    }
    uVar3 = uVar3 + uVar2 + 2;
    if (uVar3 >> 0x3c != 0) {
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_array_new_length();
      }
      std::__throw_bad_alloc();
      lVar5 = *(long *)(this + 0x48);
      if ((*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 4) +
          (*(long *)(this + 0x30) - *(long *)(this + 0x38) >> 4) +
          ((((ulong)(lVar5 - *(long *)(this + 0x28)) >> 3) - 1) + (ulong)(lVar5 == 0)) * 0x20 ==
          0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("cannot create std::deque larger than max_size()");
      }
      if ((ulong)(*(long *)(this + 8) - (lVar5 - *(long *)this >> 3)) < 2) {
        deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
        _M_reallocate_map((deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                           *)this,(long *)0x1,'\0');
        lVar5 = *(long *)(this + 0x48);
      }
      pvVar1 = operator_new(0x200);
      *(void **)(lVar5 + 8) = pvVar1;
      plVar4 = *(long **)(this + 0x30);
      *plVar4 = *__src;
      *(int *)(plVar4 + 1) = (int)__src[1];
      lVar5 = *(long *)(this + 0x48);
      *(long *)(this + 0x48) = lVar5 + 8;
      lVar5 = *(long *)(lVar5 + 8);
      *(long *)(this + 0x38) = lVar5;
      *(long *)(this + 0x40) = lVar5 + 0x200;
      *(long *)(this + 0x30) = lVar5;
      return;
    }
    pvVar1 = operator_new(uVar3 * 8);
    uVar2 = 0;
    if (param_2 != '\0') {
      uVar2 = param_1;
    }
    plVar4 = (long *)((long)pvVar1 + uVar2 * 8 + (uVar3 - lVar7 & 0xfffffffffffffffe) * 4);
    if (lVar6 + 8U != 0) {
      memmove(plVar4,__src,lVar6 + 8U);
    }
    operator_delete(*(void **)this);
    *(void **)this = pvVar1;
    *(ulong *)(this + 8) = uVar3;
  }
LAB_001b8d77:
  *(long **)(this + 0x28) = plVar4;
  lVar6 = *plVar4;
  *(long *)(this + 0x18) = lVar6;
  *(long *)(this + 0x20) = lVar6 + 0x1f8;
  *(long **)(this + 0x48) = plVar4 + lVar5;
  lVar5 = plVar4[lVar5];
  *(long *)(this + 0x38) = lVar5;
  *(long *)(this + 0x40) = lVar5 + 0x1f8;
  return;
}



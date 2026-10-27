// Function : ~deque
// Namespace: std:deque_Steinberg__Update__DeferedChange_std__allocator_Steinberg__Update__DeferedChange__
// Entry    : 0019eaf0
// Prototype: undefined ~deque(deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>> * this)
// Body     : 0019eaf0 - 0019eb44


/* std::deque<Steinberg::Update::DeferedChange, std::allocator<Steinberg::Update::DeferedChange>
   >::~deque() */

void __thiscall
std::deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
~deque(deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
       *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)this;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  uVar2 = *(ulong *)(this + 0x48);
  if (*(ulong *)(this + 0x28) < uVar2 + 8) {
    uVar3 = *(ulong *)(this + 0x28) - 8;
    do {
      puVar1 = (undefined8 *)(uVar3 + 8);
      uVar3 = uVar3 + 8;
      operator_delete((void *)*puVar1);
    } while (uVar3 < uVar2);
    pvVar4 = *(void **)this;
  }
  operator_delete(pvVar4);
  return;
}



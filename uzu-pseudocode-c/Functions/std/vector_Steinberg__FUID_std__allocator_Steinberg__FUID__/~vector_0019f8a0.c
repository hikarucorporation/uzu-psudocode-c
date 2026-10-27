// Function : ~vector
// Namespace: std:vector_Steinberg__FUID_std__allocator_Steinberg__FUID__
// Entry    : 0019f8a0
// Prototype: undefined ~vector(vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> * this)
// Body     : 0019f8a0 - 0019f8eb


/* std::vector<Steinberg::FUID, std::allocator<Steinberg::FUID> >::~vector() */

void __thiscall
std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::~vector
          (vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2);
      puVar2 = puVar2 + 3;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)this;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar2);
  return;
}



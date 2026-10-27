// Function : ~vector
// Namespace: std:vector_std____cxx11__string_std__allocator_std____cxx11__string__
// Entry    : 00171da0
// Prototype: undefined ~vector(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> * this)
// Body     : 00171da0 - 00171df6


/* std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > >::~vector() */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::~vector
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
      if ((undefined8 *)*puVar2 != puVar2 + 2) {
        operator_delete((undefined8 *)*puVar2);
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)this;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar2);
  return;
}



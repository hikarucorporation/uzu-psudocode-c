// Function : push_back
// Namespace: std:vector_std____cxx11__string_std__allocator_std____cxx11__string__
// Entry    : 00171e90
// Prototype: undefined push_back(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> * this, undefined8 * param_1)
// Body     : 00171e90 - 00171f2d


/* std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::push_back(std::__cxx11::string const&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::push_back
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,
          undefined8 *param_1)

{
  ulong *puVar1;
  undefined1 *__src;
  ulong __n;
  ulong *__dest;
  ulong local_28;
  
  puVar1 = *(ulong **)(this + 8);
  if (puVar1 == *(ulong **)(this + 0x10)) {
    _M_realloc_insert<std::__cxx11::string_const&>(this,puVar1,param_1);
    return;
  }
  __dest = puVar1 + 2;
  *puVar1 = (ulong)__dest;
  __src = (undefined1 *)*param_1;
  __n = param_1[1];
  local_28 = __n;
  if (0xf < __n) {
    __dest = (ulong *)std::__cxx11::string::_M_create(puVar1,(ulong)&local_28);
    *puVar1 = (ulong)__dest;
    puVar1[2] = local_28;
  }
  if (__n != 0) {
    if (__n == 1) {
      *(undefined1 *)__dest = *__src;
    }
    else {
      memcpy(__dest,__src,__n);
    }
  }
  puVar1[1] = local_28;
  *(undefined1 *)(*puVar1 + local_28) = 0;
  *(long *)(this + 8) = *(long *)(this + 8) + 0x20;
  return;
}



// Function : _M_realloc_insert<std::__cxx11::string_const&>
// Namespace: std:vector_std____cxx11__string_std__allocator_std____cxx11__string__
// Entry    : 00174900
// Prototype: void _M_realloc_insert<std::__cxx11::string_const&>(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 00174900 - 00174b68


/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string
   const&>(__gnu_cxx::__normal_iterator<std::__cxx11::string*, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > >, std::__cxx11::string const&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::__cxx11::string_const&>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,
          undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong local_48;
  undefined1 *local_40;
  vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *local_38;
  
  puVar2 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  lVar6 = (long)puVar3 - (long)puVar2;
  if (lVar6 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar10 = lVar6 >> 5;
  uVar7 = 1;
  if (lVar6 != 0) {
    uVar7 = uVar10;
  }
  uVar13 = uVar7 + uVar10;
  if (uVar13 >> 0x3a != 0) {
    uVar13 = 0x3ffffffffffffff;
  }
  if (CARRY8(uVar7,uVar10)) {
    uVar13 = 0x3ffffffffffffff;
  }
  lVar6 = (long)param_1 - (long)puVar2 >> 5;
  local_38 = this;
  if (uVar13 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = operator_new(uVar13 << 5);
  }
  puVar1 = puVar8 + lVar6 * 4;
  puVar9 = puVar8 + lVar6 * 4 + 2;
  puVar8[lVar6 * 4] = puVar9;
  local_40 = (undefined1 *)*param_2;
  uVar7 = param_2[1];
  local_48 = uVar7;
  if (0xf < uVar7) {
                    /* try { // try from 001749c2 to 001749d0 has its CatchHandler @ 00174b69 */
    puVar9 = (undefined8 *)std::__cxx11::string::_M_create(puVar1,(ulong)&local_48);
    *puVar1 = (ulong)puVar9;
    puVar8[lVar6 * 4 + 2] = local_48;
  }
  if (uVar7 != 0) {
    if (uVar7 == 1) {
      *(undefined1 *)puVar9 = *local_40;
    }
    else {
      memcpy(puVar9,local_40,uVar7);
    }
  }
  puVar8[lVar6 * 4 + 1] = local_48;
  *(undefined1 *)(*puVar1 + local_48) = 0;
  puVar9 = puVar8;
  if (puVar2 != param_1) {
    puVar4 = puVar8 + 2;
    puVar12 = puVar2 + 2;
    do {
      puVar9 = puVar4;
      puVar9[-2] = puVar9;
      puVar4 = (undefined8 *)puVar12[-2];
      if (puVar4 == puVar12) {
        lVar6 = puVar12[-1];
        memcpy(puVar9,puVar4,lVar6 + 1);
      }
      else {
        puVar9[-2] = puVar4;
        *puVar9 = *puVar12;
        lVar6 = puVar12[-1];
      }
      puVar9[-1] = lVar6;
      puVar12[-2] = puVar12;
      puVar12[-1] = 0;
      *(undefined1 *)puVar12 = 0;
      puVar11 = puVar12 + 2;
      puVar4 = puVar9 + 4;
      puVar12 = puVar12 + 4;
    } while (puVar11 != param_1);
    puVar9 = puVar9 + 2;
  }
  pvVar5 = local_38;
  if (puVar3 == param_1) {
    puVar9 = puVar9 + 4;
  }
  else {
    puVar4 = puVar9 + 6;
    puVar12 = param_1 + 2;
    do {
      puVar9 = puVar4;
      puVar9[-2] = puVar9;
      puVar4 = (undefined8 *)puVar12[-2];
      if (puVar4 == puVar12) {
        lVar6 = puVar12[-1];
        memcpy(puVar9,puVar4,lVar6 + 1);
      }
      else {
        puVar9[-2] = puVar4;
        *puVar9 = *puVar12;
        lVar6 = puVar12[-1];
      }
      puVar9[-1] = lVar6;
      puVar12[-2] = puVar12;
      puVar12[-1] = 0;
      *(undefined1 *)puVar12 = 0;
      puVar11 = puVar12 + 2;
      puVar4 = puVar9 + 4;
      puVar12 = puVar12 + 4;
    } while (puVar11 != puVar3);
    puVar9 = puVar9 + 2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  *(undefined8 **)pvVar5 = puVar8;
  *(undefined8 **)(pvVar5 + 8) = puVar9;
  *(undefined8 **)(pvVar5 + 0x10) = puVar8 + uVar13 * 4;
  return;
}



// Function : _M_realloc_insert<char16_t_const*&>
// Namespace: std:vector_std____cxx11__u16string_std__allocator_std____cxx11__u16string__
// Entry    : 001bc0a0
// Prototype: void _M_realloc_insert<char16_t_const*&>(vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 001bc0a0 - 001bc35d


/* void std::vector<std::__cxx11::u16string, std::allocator<std::__cxx11::u16string >
   >::_M_realloc_insert<char16_t const*&>(__gnu_cxx::__normal_iterator<std::__cxx11::u16string*,
   std::vector<std::__cxx11::u16string, std::allocator<std::__cxx11::u16string > > >, char16_t
   const*&) */

void __thiscall
std::vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>::
_M_realloc_insert<char16_t_const*&>
          (vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>> *this,
          undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *__src;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar5 = (long)puVar2 - (long)puVar1;
  if (lVar5 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar10 = lVar5 >> 5;
  uVar6 = 1;
  if (lVar5 != 0) {
    uVar6 = uVar10;
  }
  uVar11 = uVar6 + uVar10;
  if (uVar11 >> 0x3a != 0) {
    uVar11 = 0x3ffffffffffffff;
  }
  if (CARRY8(uVar6,uVar10)) {
    uVar11 = 0x3ffffffffffffff;
  }
  lVar5 = (long)param_1 - (long)puVar1 >> 5;
  if (uVar11 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = operator_new(uVar11 << 5);
  }
  __src = (undefined2 *)*param_2;
  puVar9 = puVar7 + lVar5 * 4 + 2;
  puVar7[lVar5 * 4] = puVar9;
  if (__src == (undefined2 *)0x0) {
                    /* try { // try from 001bc346 to 001bc351 has its CatchHandler @ 001bc37d */
    std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_001bc352:
                    /* try { // try from 001bc352 to 001bc35d has its CatchHandler @ 001bc35e */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  lVar3 = 0;
  do {
    lVar8 = lVar3;
    lVar3 = lVar8 + 1;
  } while (__src[lVar8] != 0);
  uVar6 = lVar8 * 2;
  if (0xe < uVar6) {
    if (0x3ffffffffffffffe < uVar6) goto LAB_001bc352;
                    /* try { // try from 001bc1a5 to 001bc1a9 has its CatchHandler @ 001bc35e */
    puVar9 = operator_new(uVar6 + 2);
    puVar7[lVar5 * 4] = puVar9;
    puVar7[lVar5 * 4 + 2] = lVar8;
  }
  if (lVar8 != 0) {
    if (lVar8 == 1) {
      *(undefined2 *)puVar9 = *__src;
    }
    else {
      memcpy(puVar9,__src,uVar6);
    }
  }
  puVar7[lVar5 * 4 + 1] = lVar8;
  *(undefined2 *)((long)puVar9 + lVar8 * 2) = 0;
  puVar9 = puVar7;
  if (puVar1 != param_1) {
    puVar4 = puVar7 + 2;
    puVar13 = puVar1 + 2;
    do {
      puVar9 = puVar4;
      puVar9[-2] = puVar9;
      if ((undefined8 *)puVar13[-2] == puVar13) {
        lVar5 = puVar13[-1];
        memcpy(puVar9,puVar13,lVar5 * 2 + 2);
      }
      else {
        puVar9[-2] = (undefined8 *)puVar13[-2];
        *puVar9 = *puVar13;
        lVar5 = puVar13[-1];
      }
      puVar9[-1] = lVar5;
      puVar13[-2] = puVar13;
      puVar13[-1] = 0;
      *(undefined2 *)puVar13 = 0;
      puVar12 = puVar13 + 2;
      puVar4 = puVar9 + 4;
      puVar13 = puVar13 + 4;
    } while (puVar12 != param_1);
    puVar9 = puVar9 + 2;
  }
  if (puVar2 == param_1) {
    puVar9 = puVar9 + 4;
  }
  else {
    puVar4 = puVar9 + 6;
    puVar13 = param_1 + 2;
    do {
      puVar9 = puVar4;
      puVar9[-2] = puVar9;
      if ((undefined8 *)puVar13[-2] == puVar13) {
        lVar5 = puVar13[-1];
        memcpy(puVar9,puVar13,lVar5 * 2 + 2);
      }
      else {
        puVar9[-2] = (undefined8 *)puVar13[-2];
        *puVar9 = *puVar13;
        lVar5 = puVar13[-1];
      }
      puVar9[-1] = lVar5;
      puVar13[-2] = puVar13;
      puVar13[-1] = 0;
      *(undefined2 *)puVar13 = 0;
      puVar12 = puVar13 + 2;
      puVar4 = puVar9 + 4;
      puVar13 = puVar13 + 4;
    } while (puVar12 != puVar2);
    puVar9 = puVar9 + 2;
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar9;
  *(undefined8 **)(this + 0x10) = puVar7 + uVar11 * 4;
  return;
}



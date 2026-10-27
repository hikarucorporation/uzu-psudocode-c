// Function : _M_realloc_insert<std::basic_string_view<char,std::char_traits<char>>>
// Namespace: std:vector_std____cxx11__string_std__allocator_std____cxx11__string__
// Entry    : 001a3c10
// Prototype: void _M_realloc_insert<std::basic_string_view<char,std::char_traits<char>>>(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> * this, undefined8 * param_1, ulong * param_2)
// Body     : 001a3c10 - 001a3ec0


/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::basic_string_view<char, std::char_traits<char> >
   >(__gnu_cxx::__normal_iterator<std::__cxx11::string*, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > >, std::basic_string_view<char, std::char_traits<char>
   >&&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::basic_string_view<char,std::char_traits<char>>>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,
          undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *local_38;
  
  local_40 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar5 = (long)puVar2 - (long)local_40;
  if (lVar5 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar10 = lVar5 >> 5;
  uVar6 = 1;
  if (lVar5 != 0) {
    uVar6 = uVar10;
  }
  uVar14 = uVar6 + uVar10;
  if (uVar14 >> 0x3a != 0) {
    uVar14 = 0x3ffffffffffffff;
  }
  if (CARRY8(uVar6,uVar10)) {
    uVar14 = 0x3ffffffffffffff;
  }
  lVar5 = (long)param_1 - (long)local_40 >> 5;
  local_38 = this;
  if (uVar14 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = operator_new(uVar14 << 5);
  }
  uVar6 = *param_2;
  local_48 = (undefined1 *)param_2[1];
  puVar8 = puVar7 + lVar5 * 4 + 2;
  puVar7[lVar5 * 4] = puVar8;
  if ((uVar6 != 0) && (local_48 == (undefined1 *)0x0)) {
                    /* try { // try from 001a3e8f to 001a3e9a has its CatchHandler @ 001a3e9b */
    uVar9 = std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001a3ce0 with catch @ 001a3e9b
                       catch(type#1 @ 00000000) { ... } // from try @ 001a3e8f with catch @ 001a3e9b
                        */
    __cxa_begin_catch(uVar9);
    operator_delete(puVar7);
                    /* try { // try from 001a3eac to 001a3eb0 has its CatchHandler @ 001a3eb1 */
    uVar9 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001a3eac with catch @ 001a3eb1
                        */
                    /* try { // try from 001a3eb4 to 001a3eb8 has its CatchHandler @ 001a3ec1 */
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar9);
  }
  puVar1 = puVar7 + lVar5 * 4;
  local_50 = uVar6;
  if (0xf < uVar6) {
                    /* try { // try from 001a3ce0 to 001a3cee has its CatchHandler @ 001a3e9b */
    puVar8 = (undefined8 *)std::__cxx11::string::_M_create(puVar1,(ulong)&local_50);
    *puVar1 = (ulong)puVar8;
    puVar7[lVar5 * 4 + 2] = local_50;
  }
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      *(undefined1 *)puVar8 = *local_48;
    }
    else {
      memcpy(puVar8,local_48,uVar6);
    }
  }
  puVar7[lVar5 * 4 + 1] = local_50;
  *(undefined1 *)(*puVar1 + local_50) = 0;
  puVar8 = puVar7;
  if (local_40 != param_1) {
    puVar3 = puVar7 + 2;
    puVar11 = local_40 + 2;
    do {
      puVar8 = puVar3;
      puVar8[-2] = puVar8;
      puVar3 = (undefined8 *)puVar11[-2];
      if (puVar3 == puVar11) {
        lVar5 = puVar11[-1];
        memcpy(puVar8,puVar3,lVar5 + 1);
      }
      else {
        puVar8[-2] = puVar3;
        *puVar8 = *puVar11;
        lVar5 = puVar11[-1];
      }
      puVar8[-1] = lVar5;
      puVar11[-2] = puVar11;
      puVar11[-1] = 0;
      *(undefined1 *)puVar11 = 0;
      puVar13 = puVar11 + 2;
      puVar3 = puVar8 + 4;
      puVar11 = puVar11 + 4;
    } while (puVar13 != param_1);
    puVar8 = puVar8 + 2;
  }
  puVar3 = local_40;
  if (puVar2 == param_1) {
    puVar8 = puVar8 + 4;
    pvVar4 = local_38;
  }
  else {
    puVar11 = puVar8 + 6;
    puVar13 = param_1 + 2;
    do {
      puVar8 = puVar11;
      puVar8[-2] = puVar8;
      puVar11 = (undefined8 *)puVar13[-2];
      if (puVar11 == puVar13) {
        lVar5 = puVar13[-1];
        memcpy(puVar8,puVar11,lVar5 + 1);
      }
      else {
        puVar8[-2] = puVar11;
        *puVar8 = *puVar13;
        lVar5 = puVar13[-1];
      }
      puVar8[-1] = lVar5;
      puVar13[-2] = puVar13;
      puVar13[-1] = 0;
      *(undefined1 *)puVar13 = 0;
      puVar12 = puVar13 + 2;
      puVar11 = puVar8 + 4;
      puVar13 = puVar13 + 4;
    } while (puVar12 != puVar2);
    puVar8 = puVar8 + 2;
    pvVar4 = local_38;
  }
  if (puVar3 != (undefined8 *)0x0) {
    local_38 = pvVar4;
    operator_delete(puVar3);
  }
  *(undefined8 **)pvVar4 = puVar7;
  *(undefined8 **)(pvVar4 + 8) = puVar8;
  *(undefined8 **)(pvVar4 + 0x10) = puVar7 + uVar14 * 4;
  return;
}



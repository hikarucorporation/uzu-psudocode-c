// Function : _M_realloc_insert<>
// Namespace: std:vector_std__map_std____cxx11__string_std____cxx11__u16string_std__less_std____cxx11__strin~fa01fa43
// Entry    : 001bc3b0
// Prototype: void _M_realloc_insert<>(vector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>> * this, void * param_1)
// Body     : 001bc3b0 - 001bc604


/* void std::vector<std::map<std::__cxx11::string, std::__cxx11::u16string,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   std::__cxx11::u16string > > >, std::allocator<std::map<std::__cxx11::string,
   std::__cxx11::u16string, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, std::__cxx11::u16string > > > >
   >::_M_realloc_insert<>(__gnu_cxx::__normal_iterator<std::map<std::__cxx11::string,
   std::__cxx11::u16string, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, std::__cxx11::u16string > > >*,
   std::vector<std::map<std::__cxx11::string, std::__cxx11::u16string,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   std::__cxx11::u16string > > >, std::allocator<std::map<std::__cxx11::string,
   std::__cxx11::u16string, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, std::__cxx11::u16string > > > > > >) */

void __thiscall
std::
vector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>>
::_M_realloc_insert<>
          (vector<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>,std::allocator<std::map<std::__cxx11::string,std::__cxx11::u16string,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>>>
           *this,void *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *pvVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  lVar5 = (long)pvVar3 - (long)pvVar2;
  if (lVar5 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar11 = (lVar5 >> 4) * -0x5555555555555555;
  uVar6 = 1;
  if (lVar5 != 0) {
    uVar6 = uVar11;
  }
  uVar12 = uVar6 + uVar11;
  if (0x2aaaaaaaaaaaaaa < uVar12) {
    uVar12 = 0x2aaaaaaaaaaaaaa;
  }
  if (CARRY8(uVar6,uVar11)) {
    uVar12 = 0x2aaaaaaaaaaaaaa;
  }
  puVar7 = operator_new(uVar12 * 0x30);
  lVar8 = (long)param_1 - (long)pvVar2;
  lVar5 = (long)puVar7 + lVar8 + 8;
  *(undefined8 *)((long)puVar7 + lVar8) = 0;
  ((undefined8 *)((long)puVar7 + lVar8))[1] = 0;
  *(undefined8 *)((long)puVar7 + lVar8 + 0x10) = 0;
  *(long *)((long)puVar7 + lVar8 + 0x18) = lVar5;
  *(long *)((long)puVar7 + lVar8 + 0x20) = lVar5;
  *(undefined8 *)((long)puVar7 + lVar8 + 0x28) = 0;
  puVar16 = puVar7;
  if (lVar8 != 0) {
    pvVar9 = pvVar2;
    puVar16 = puVar7 + 5;
    do {
      puVar14 = puVar16;
      puVar16 = puVar14 + -4;
      lVar5 = *(long *)((long)pvVar9 + 0x10);
      if (lVar5 == 0) {
        puVar14[-3] = 0;
        puVar14[-2] = puVar16;
        puVar14[-1] = puVar16;
        uVar10 = 0;
        puVar16 = puVar14;
      }
      else {
        uVar10 = *(undefined4 *)((long)pvVar9 + 8);
        puVar14[-3] = lVar5;
        uVar4 = *(undefined8 *)((long)pvVar9 + 0x20);
        puVar14[-2] = *(undefined8 *)((long)pvVar9 + 0x18);
        puVar14[-1] = uVar4;
        *(undefined8 **)(lVar5 + 8) = puVar16;
        *puVar14 = *(undefined8 *)((long)pvVar9 + 0x28);
        *(undefined8 *)((long)pvVar9 + 0x10) = 0;
        *(long *)((long)pvVar9 + 0x18) = (long)pvVar9 + 8;
        *(long *)((long)pvVar9 + 0x20) = (long)pvVar9 + 8;
        puVar16 = (undefined8 *)((long)pvVar9 + 0x28);
      }
      *puVar16 = 0;
      *(undefined4 *)(puVar14 + -4) = uVar10;
      pvVar9 = (void *)((long)pvVar9 + 0x30);
      puVar16 = puVar14 + 6;
    } while (pvVar9 != param_1);
    puVar16 = puVar14 + 1;
  }
  if (pvVar3 == param_1) {
    puVar16 = puVar16 + 6;
  }
  else {
    lVar5 = 0;
    pvVar9 = param_1;
    do {
      lVar8 = lVar5;
      lVar15 = (long)puVar16 + lVar8 + 0x38;
      lVar5 = *(long *)((long)param_1 + lVar8 + 0x10);
      if (lVar5 == 0) {
        *(undefined8 *)((long)puVar16 + lVar8 + 0x40) = 0;
        *(long *)((long)puVar16 + lVar8 + 0x48) = lVar15;
        *(long *)((long)puVar16 + lVar8 + 0x50) = lVar15;
        puVar14 = (undefined8 *)((long)puVar16 + lVar8 + 0x58);
        uVar10 = 0;
      }
      else {
        lVar13 = (long)param_1 + lVar8 + 8;
        uVar10 = *(undefined4 *)((long)param_1 + lVar8 + 8);
        *(long *)((long)puVar16 + lVar8 + 0x40) = lVar5;
        puVar14 = (undefined8 *)((long)param_1 + lVar8 + 0x18);
        uVar4 = puVar14[1];
        puVar1 = (undefined8 *)((long)puVar16 + lVar8 + 0x48);
        *puVar1 = *puVar14;
        puVar1[1] = uVar4;
        *(long *)(lVar5 + 8) = lVar15;
        puVar14 = (undefined8 *)((long)pvVar9 + 0x28);
        *(undefined8 *)((long)puVar16 + lVar8 + 0x58) =
             *(undefined8 *)((long)param_1 + lVar8 + 0x28);
        *(undefined8 *)((long)param_1 + lVar8 + 0x10) = 0;
        *(long *)((long)param_1 + lVar8 + 0x18) = lVar13;
        *(long *)((long)param_1 + lVar8 + 0x20) = lVar13;
      }
      *puVar14 = 0;
      *(undefined4 *)((long)puVar16 + lVar8 + 0x38) = uVar10;
      pvVar9 = (void *)((long)pvVar9 + 0x30);
      lVar5 = lVar8 + 0x30;
    } while ((void *)((long)param_1 + lVar8 + 0x30) != pvVar3);
    puVar16 = (undefined8 *)((long)puVar16 + lVar8 + 0x60);
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar16;
  *(undefined8 **)(this + 0x10) = puVar7 + uVar12 * 6;
  return;
}



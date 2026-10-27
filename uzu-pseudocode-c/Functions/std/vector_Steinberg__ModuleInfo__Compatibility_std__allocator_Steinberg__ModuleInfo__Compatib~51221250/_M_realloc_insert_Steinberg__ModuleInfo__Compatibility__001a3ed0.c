// Function : _M_realloc_insert<Steinberg::ModuleInfo::Compatibility>
// Namespace: std:vector_Steinberg__ModuleInfo__Compatibility_std__allocator_Steinberg__ModuleInfo__Compatib~51221250
// Entry    : 001a3ed0
// Prototype: void _M_realloc_insert<Steinberg::ModuleInfo::Compatibility>(vector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>> * this, undefined8 * param_1, long * param_2)
// Body     : 001a3ed0 - 001a416d


/* void std::vector<Steinberg::ModuleInfo::Compatibility,
   std::allocator<Steinberg::ModuleInfo::Compatibility>
   >::_M_realloc_insert<Steinberg::ModuleInfo::Compatibility>(__gnu_cxx::__normal_iterator<Steinberg::ModuleInfo::Compatibility*,
   std::vector<Steinberg::ModuleInfo::Compatibility,
   std::allocator<Steinberg::ModuleInfo::Compatibility> > >, Steinberg::ModuleInfo::Compatibility&&)
    */

void __thiscall
std::
vector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>>::
_M_realloc_insert<Steinberg::ModuleInfo::Compatibility>
          (vector<Steinberg::ModuleInfo::Compatibility,std::allocator<Steinberg::ModuleInfo::Compatibility>>
           *this,undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *__src;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar4 = (long)puVar2 - (long)puVar1;
  if (lVar4 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar7 = (lVar4 >> 3) * 0x6db6db6db6db6db7;
  uVar5 = 1;
  if (lVar4 != 0) {
    uVar5 = uVar7;
  }
  uVar10 = uVar5 + uVar7;
  if (0x249249249249249 < uVar10) {
    uVar10 = 0x249249249249249;
  }
  if (CARRY8(uVar5,uVar7)) {
    uVar10 = 0x249249249249249;
  }
  lVar4 = (long)param_1 - (long)puVar1 >> 3;
  if (uVar10 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = operator_new(uVar10 * 0x38);
  }
  puVar6[lVar4] = puVar6 + lVar4 + 2;
  __src = (long *)*param_2;
  if (__src == param_2 + 2) {
    lVar12 = param_2[1];
    memcpy(puVar6 + lVar4 + 2,__src,lVar12 + 1);
  }
  else {
    puVar6[lVar4] = __src;
    puVar6[lVar4 + 2] = param_2[2];
    lVar12 = param_2[1];
  }
  puVar6[lVar4 + 1] = lVar12;
  *param_2 = (long)(param_2 + 2);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  lVar12 = param_2[5];
  puVar6[lVar4 + 4] = param_2[4];
  (puVar6 + lVar4 + 4)[1] = lVar12;
  puVar6[lVar4 + 6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  puVar11 = puVar6;
  if (puVar1 != param_1) {
    puVar9 = puVar1 + 2;
    do {
      *puVar11 = puVar11 + 2;
      puVar8 = (undefined8 *)puVar9[-2];
      if (puVar8 == puVar9) {
        lVar4 = puVar9[-1];
        memcpy(puVar11 + 2,puVar8,lVar4 + 1);
      }
      else {
        *puVar11 = puVar8;
        puVar11[2] = *puVar9;
        lVar4 = puVar9[-1];
      }
      puVar11[1] = lVar4;
      puVar9[-2] = puVar9;
      puVar9[-1] = 0;
      *(undefined1 *)puVar9 = 0;
      uVar3 = puVar9[3];
      puVar11[4] = puVar9[2];
      puVar11[5] = uVar3;
      puVar11[6] = puVar9[4];
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar11 = puVar11 + 7;
      puVar8 = puVar9 + 5;
      puVar9 = puVar9 + 7;
    } while (puVar8 != param_1);
  }
  puVar11 = puVar11 + 7;
  if (puVar2 != param_1) {
    puVar9 = param_1 + 2;
    do {
      *puVar11 = puVar11 + 2;
      puVar8 = (undefined8 *)puVar9[-2];
      if (puVar8 == puVar9) {
        lVar4 = puVar9[-1];
        memcpy(puVar11 + 2,puVar8,lVar4 + 1);
      }
      else {
        *puVar11 = puVar8;
        puVar11[2] = *puVar9;
        lVar4 = puVar9[-1];
      }
      puVar11[1] = lVar4;
      puVar9[-2] = puVar9;
      puVar9[-1] = 0;
      *(undefined1 *)puVar9 = 0;
      uVar3 = puVar9[3];
      puVar11[4] = puVar9[2];
      puVar11[5] = uVar3;
      puVar11[6] = puVar9[4];
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar11 = puVar11 + 7;
      puVar8 = puVar9 + 5;
      puVar9 = puVar9 + 7;
    } while (puVar8 != puVar2);
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar11;
  *(undefined8 **)(this + 0x10) = puVar6 + uVar10 * 7;
  return;
}



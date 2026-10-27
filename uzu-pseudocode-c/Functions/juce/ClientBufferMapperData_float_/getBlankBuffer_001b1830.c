// Function : getBlankBuffer
// Namespace: juce:ClientBufferMapperData_float_
// Entry    : 001b1830
// Prototype: uint * getBlankBuffer(uint * param_1, long * param_2, int param_3, uint param_4)
// Body     : 001b1830 - 001b1ad3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ClientBufferMapperData<float>::getBlankBuffer(int, int) */

uint * __cdecl
juce::ClientBufferMapperData<float>::getBlankBuffer
          (uint *param_1,long *param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  void *__src;
  long lVar2;
  ulong uVar3;
  void *__dest;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  size_t __n;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  if (0 < param_3) {
    do {
      lVar2 = param_2[0x28];
      *(int *)(param_2 + 0x28) = (int)lVar2 + 1;
      *(undefined1 *)(param_2 + 0x27) = 0;
      puVar5 = (undefined8 *)param_2[1];
      uVar1 = *(undefined8 *)(param_2[5] + (long)(int)lVar2 * 8);
      if (puVar5 == (undefined8 *)param_2[2]) {
        __src = (void *)*param_2;
        __n = (long)puVar5 - (long)__src;
        if (__n == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar7 = (long)__n >> 3;
        uVar3 = uVar7;
        if (__n == 0) {
          uVar3 = 1;
        }
        uVar9 = uVar3 + uVar7;
        if (0xfffffffffffffff < uVar9) {
          uVar9 = 0xfffffffffffffff;
        }
        if (CARRY8(uVar3,uVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        if (uVar9 == 0) {
          __dest = (void *)0x0;
          *(undefined8 *)(uVar7 * 8) = uVar1;
        }
        else {
          __dest = operator_new(uVar9 * 8);
          *(undefined8 *)((long)__dest + uVar7 * 8) = uVar1;
        }
        if (0 < (long)__n) {
          memmove(__dest,__src,__n);
        }
        puVar5 = (undefined8 *)((long)__dest + uVar7 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
        *param_2 = (long)__dest;
        param_2[1] = (long)(puVar5 + 1);
        param_2[2] = (long)((long)__dest + uVar9 * 8);
      }
      else {
        *puVar5 = uVar1;
        puVar5 = (undefined8 *)param_2[1];
        param_2[1] = (long)(puVar5 + 1);
      }
      FloatVectorOperationsBase<float,int>::clear((void *)*puVar5,param_4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  lVar2 = *param_2;
  lVar6 = param_2[1];
  uVar3 = (ulong)(lVar6 - lVar2) >> 3;
  uVar8 = (uint)uVar3;
  *param_1 = uVar8;
  param_1[1] = param_4;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((int)uVar8 < 0x20) {
    puVar4 = param_1 + 8;
    *(uint **)(param_1 + 4) = puVar4;
    if ((int)uVar8 < 1) goto LAB_001b1a76;
  }
  else {
    puVar4 = malloc((lVar6 - lVar2) + 8U & 0x7fffffff8);
    if (puVar4 == (uint *)0x0) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
    }
    *(uint **)(param_1 + 6) = puVar4;
    *(uint **)(param_1 + 4) = puVar4;
  }
  uVar3 = uVar3 & 0xffffffff;
  uVar7 = (ulong)(uVar8 & 3);
  if (uVar3 - 1 < 3) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      *(undefined8 *)(puVar4 + lVar6 * 2) = *(undefined8 *)(lVar2 + lVar6 * 8);
      *(undefined8 *)(*(long *)(param_1 + 4) + 8 + lVar6 * 8) =
           *(undefined8 *)(lVar2 + 8 + lVar6 * 8);
      *(undefined8 *)(*(long *)(param_1 + 4) + 0x10 + lVar6 * 8) =
           *(undefined8 *)(lVar2 + 0x10 + lVar6 * 8);
      *(undefined8 *)(*(long *)(param_1 + 4) + 0x18 + lVar6 * 8) =
           *(undefined8 *)(lVar2 + 0x18 + lVar6 * 8);
      lVar6 = lVar6 + 4;
      puVar4 = *(uint **)(param_1 + 4);
    } while (uVar3 - uVar7 != lVar6);
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined8 *)(puVar4 + lVar6 * 2) = *(undefined8 *)(lVar2 + lVar6 * 8);
    lVar6 = lVar6 + 1;
    puVar4 = *(uint **)(param_1 + 4);
  }
LAB_001b1a76:
  (puVar4 + (long)(int)uVar8 * 2)[0] = 0;
  (puVar4 + (long)(int)uVar8 * 2)[1] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



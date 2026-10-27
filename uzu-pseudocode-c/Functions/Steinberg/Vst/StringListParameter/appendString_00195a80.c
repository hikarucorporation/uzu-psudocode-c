// Function : appendString
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 00195a80
// Prototype: undefined appendString(StringListParameter * this, short * param_1)
// Body     : 00195a80 - 00195c16


/* Steinberg::Vst::StringListParameter::appendString(char16_t const*) */

void __thiscall
Steinberg::Vst::StringListParameter::appendString(StringListParameter *this,short *param_1)

{
  short sVar1;
  undefined8 *puVar2;
  void *__src;
  void *__dest;
  ulong uVar3;
  void *__dest_00;
  short *psVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  ulong uVar8;
  
  psVar4 = param_1;
  lVar5 = 0;
  do {
    lVar6 = lVar5;
    lVar5 = lVar6 + 0x100000000;
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  __dest = malloc(lVar5 >> 0x1f);
  if (__dest != (void *)0x0) {
    lVar6 = lVar6 >> 0x20;
    memcpy(__dest,param_1,lVar6 * 2);
    *(undefined2 *)((long)__dest + lVar6 * 2) = 0;
    puVar2 = *(undefined8 **)(this + 0x340);
    if (puVar2 == *(undefined8 **)(this + 0x348)) {
      __src = *(void **)(this + 0x338);
      __n = (long)puVar2 - (long)__src;
      if (__n == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar8 = (long)__n >> 3;
      uVar3 = 1;
      if (__n != 0) {
        uVar3 = uVar8;
      }
      uVar7 = uVar3 + uVar8;
      if (uVar7 >> 0x3c != 0) {
        uVar7 = 0xfffffffffffffff;
      }
      if (CARRY8(uVar3,uVar8)) {
        uVar7 = 0xfffffffffffffff;
      }
      if (uVar7 == 0) {
        __dest_00 = (void *)0x0;
      }
      else {
        __dest_00 = operator_new(uVar7 * 8);
      }
      *(void **)((long)__dest_00 + uVar8 * 8) = __dest;
      if (0 < (long)__n) {
        memmove(__dest_00,__src,__n);
      }
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      *(void **)(this + 0x338) = __dest_00;
      *(ulong *)(this + 0x340) = (long)__dest_00 + uVar8 * 8 + 8;
      *(void **)(this + 0x348) = (void *)(uVar7 * 8 + (long)__dest_00);
    }
    else {
      *puVar2 = __dest;
      *(long *)(this + 0x340) = *(long *)(this + 0x340) + 8;
    }
    *(int *)(this + 0x314) = *(int *)(this + 0x314) + 1;
  }
  return;
}



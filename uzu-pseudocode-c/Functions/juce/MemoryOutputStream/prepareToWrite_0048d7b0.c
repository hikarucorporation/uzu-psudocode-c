// Function : prepareToWrite
// Namespace: juce:MemoryOutputStream
// Entry    : 0048d7b0
// Prototype: long prepareToWrite(MemoryOutputStream * this, long param_1)
// Body     : 0048d7b0 - 0048d8b2


/* juce::MemoryOutputStream::prepareToWrite(unsigned long) */

long __thiscall juce::MemoryOutputStream::prepareToWrite(MemoryOutputStream *this,long param_1)

{
  MemoryOutputStream *pMVar1;
  long lVar2;
  void *pvVar3;
  MemoryOutputStream *pMVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  pMVar1 = *(MemoryOutputStream **)(this + 0x10);
  lVar7 = *(long *)(this + 0x30);
  uVar6 = lVar7 + param_1;
  if (pMVar1 == (MemoryOutputStream *)0x0) {
    if (*(ulong *)(this + 0x40) < uVar6) {
      return 0;
    }
    pMVar4 = this + 0x28;
  }
  else {
    pMVar4 = pMVar1;
    if (*(ulong *)(pMVar1 + 8) <= uVar6) {
      uVar8 = 0x100000;
      if (uVar6 >> 1 < 0x100000) {
        uVar8 = uVar6 >> 1;
      }
      uVar8 = uVar8 + uVar6 + 0x20 & 0xffffffffffffffe0;
      if (*(ulong *)(pMVar1 + 8) < uVar8) {
        if (*(void **)pMVar1 == (void *)0x0) {
          pvVar3 = malloc(uVar8);
          if (pvVar3 == (void *)0x0) goto LAB_0048d885;
          *(void **)pMVar1 = pvVar3;
        }
        else {
          pvVar3 = realloc(*(void **)pMVar1,uVar8);
          if (pvVar3 == (void *)0x0) {
LAB_0048d885:
            puVar5 = (undefined8 *)__cxa_allocate_exception(8);
            *puVar5 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar5,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
          }
          *(void **)pMVar1 = pvVar3;
          lVar7 = *(long *)(this + 0x30);
          uVar6 = param_1 + lVar7;
          pMVar4 = *(MemoryOutputStream **)(this + 0x10);
        }
        *(ulong *)(pMVar1 + 8) = uVar8;
      }
    }
  }
  lVar2 = *(long *)pMVar4;
  *(ulong *)(this + 0x30) = uVar6;
  uVar8 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x38) < uVar6) {
    uVar8 = uVar6;
  }
  *(ulong *)(this + 0x38) = uVar8;
  return lVar7 + lVar2;
}



// Function : prepare
// Namespace: juce:ClientBufferMapperData_double_
// Entry    : 001addf0
// Prototype: undefined prepare(ClientBufferMapperData<double> * this, uint param_1, int param_2)
// Body     : 001addf0 - 001adffa


/* juce::ClientBufferMapperData<double>::prepare(int, int) */

void __thiscall
juce::ClientBufferMapperData<double>::prepare
          (ClientBufferMapperData<double> *this,uint param_1,int param_2)

{
  void *__src;
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  if ((*(int *)(this + 0x1c) != param_2) || (*(uint *)(this + 0x18) != param_1)) {
    uVar9 = param_2 + 3;
    uVar10 = param_1 * 8 + 0x17;
    uVar8 = (ulong)(uVar10 & 0xfffffff0);
    sVar6 = uVar8 + (long)(int)param_1 * (ulong)(uVar9 & 0xfffffffc) * 8 + 0x20;
    *(size_t *)(this + 0x20) = sVar6;
    HeapBlock<char,true>::allocate<unsigned_long>
              ((HeapBlock<char,true> *)(this + 0x30),sVar6,
               (uint)(this[0x138] != (ClientBufferMapperData<double>)0x0));
    plVar3 = *(long **)(this + 0x30);
    *(long **)(this + 0x28) = plVar3;
    if (0 < (int)param_1) {
      lVar11 = uVar8 + (long)plVar3;
      *plVar3 = lVar11;
      if (param_1 != 1) {
        uVar8 = (ulong)param_1 - 1;
        uVar2 = (ulong)((uint)uVar8 & 3);
        if ((ulong)param_1 - 2 < 3) {
          lVar4 = 1;
        }
        else {
          lVar11 = (long)plVar3 + (ulong)(uVar10 & 0xfffffff0);
          uVar7 = (ulong)(uVar9 >> 2);
          uVar1 = 0;
          do {
            uVar5 = uVar1;
            *(ulong *)(*(long *)(this + 0x28) + 8 + uVar5 * 8) = lVar11 + uVar7 * 0x20;
            *(ulong *)(*(long *)(this + 0x28) + 0x10 + uVar5 * 8) = lVar11 + uVar7 * 0x40;
            *(ulong *)(*(long *)(this + 0x28) + 0x18 + uVar5 * 8) = lVar11 + uVar7 * 0x60;
            lVar11 = lVar11 + uVar7 * 0x80;
            *(long *)(*(long *)(this + 0x28) + 0x20 + uVar5 * 8) = lVar11;
            uVar1 = uVar5 + 4;
          } while ((uVar8 & 0xfffffffffffffffc) != uVar5 + 4);
          lVar4 = uVar5 + 5;
        }
        if (uVar2 != 0) {
          lVar11 = lVar11 + (ulong)(uVar9 & 0xfffffffc) * 8;
          do {
            *(long *)(*(long *)(this + 0x28) + lVar4 * 8) = lVar11;
            lVar4 = lVar4 + 1;
            lVar11 = lVar11 + (ulong)(uVar9 & 0xfffffffc) * 8;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
      }
      plVar3 = *(long **)(this + 0x28);
    }
    plVar3[(int)param_1] = 0;
    *(int *)(this + 0x1c) = param_2;
    *(uint *)(this + 0x18) = param_1;
  }
  uVar9 = 0x80;
  if ((int)param_1 < 0x80) {
    uVar9 = param_1;
  }
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  uVar8 = (ulong)(int)uVar9;
  __src = *(void **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)__src >> 3) < uVar8) {
    sVar6 = *(long *)(this + 8) - (long)__src;
    __dest = operator_new(uVar8 * 8);
    if (0 < (long)sVar6) {
      memmove(__dest,__src,sVar6);
    }
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
    *(void **)this = __dest;
    *(void **)(this + 8) = (void *)((long)__dest + ((long)sVar6 >> 3) * 8);
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar8 * 8);
  }
  return;
}



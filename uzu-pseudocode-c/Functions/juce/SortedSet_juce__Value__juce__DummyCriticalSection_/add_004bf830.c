// Function : add
// Namespace: juce:SortedSet_juce__Value__juce__DummyCriticalSection_
// Entry    : 004bf830
// Prototype: undefined add(SortedSet<juce::Value*,juce::DummyCriticalSection> * this, ulong param_1)
// Body     : 004bf830 - 004bf936


/* juce::SortedSet<juce::Value*, juce::DummyCriticalSection>::add(juce::Value* const&) */

void __thiscall
juce::SortedSet<juce::Value*,juce::DummyCriticalSection>::add
          (SortedSet<juce::Value*,juce::DummyCriticalSection> *this,ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  void *__ptr;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(this + 0xc);
  __ptr = *(void **)this;
  uVar3 = uVar9;
  uVar8 = 0;
  do {
    uVar5 = uVar8;
    if ((int)uVar3 <= (int)uVar5) goto LAB_004bf896;
    if (*(ulong *)((long)__ptr + (long)(int)uVar5 * 8) == param_1) {
      *(ulong *)((long)__ptr + (long)(int)uVar5 * 8) = param_1;
      return;
    }
    uVar4 = (int)(uVar5 + uVar3) / 2;
    uVar1 = *(ulong *)((long)__ptr + (long)(int)uVar4 * 8);
    uVar2 = uVar4;
    uVar8 = uVar5;
    if (uVar1 <= param_1) {
      uVar2 = uVar3;
      uVar8 = uVar4;
    }
    uVar3 = uVar2;
  } while (uVar4 != uVar5);
  uVar5 = (uVar5 + 1) - (uint)(param_1 < uVar1);
LAB_004bf896:
  if ((int)*(uint *)(this + 8) <= (int)uVar9) {
    uVar9 = uVar9 + ((int)((uVar9 - ((int)(uVar9 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
    if (*(uint *)(this + 8) != uVar9) {
      if ((int)uVar9 < 1) {
        free(__ptr);
        *(undefined8 *)this = 0;
        __ptr = (void *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar9 << 3);
        *(void **)this = __ptr;
      }
    }
    *(uint *)(this + 8) = uVar9;
    uVar9 = *(uint *)(this + 0xc);
  }
  if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
    puVar7 = (ulong *)((long)__ptr + (long)(int)uVar9 * 8);
  }
  else {
    lVar6 = (long)(int)uVar5;
    memmove((void *)((long)__ptr + lVar6 * 8 + 8),(void *)((long)__ptr + lVar6 * 8),
            (long)(int)(uVar9 - uVar5) << 3);
    puVar7 = (ulong *)(lVar6 * 8 + *(long *)this);
    uVar9 = *(uint *)(this + 0xc);
  }
  *puVar7 = param_1;
  *(uint *)(this + 0xc) = uVar9 + 1;
  return;
}



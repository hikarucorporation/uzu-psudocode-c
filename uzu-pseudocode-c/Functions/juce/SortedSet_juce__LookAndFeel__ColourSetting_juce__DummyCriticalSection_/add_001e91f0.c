// Function : add
// Namespace: juce:SortedSet_juce__LookAndFeel__ColourSetting_juce__DummyCriticalSection_
// Entry    : 001e91f0
// Prototype: undefined add(SortedSet<juce::LookAndFeel::ColourSetting,juce::DummyCriticalSection> * this, int * param_1)
// Body     : 001e91f0 - 001e92f8


/* juce::SortedSet<juce::LookAndFeel::ColourSetting,
   juce::DummyCriticalSection>::add(juce::LookAndFeel::ColourSetting const&) */

void __thiscall
juce::SortedSet<juce::LookAndFeel::ColourSetting,juce::DummyCriticalSection>::add
          (SortedSet<juce::LookAndFeel::ColourSetting,juce::DummyCriticalSection> *this,int *param_1
          )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *__ptr;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(this + 0xc);
  __ptr = *(void **)this;
  iVar1 = *param_1;
  uVar5 = uVar9;
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    if ((int)uVar5 <= (int)uVar6) goto LAB_001e925c;
    if (iVar1 == *(int *)((long)__ptr + (long)(int)uVar6 * 8)) {
      *(undefined8 *)((long)__ptr + (long)(int)uVar6 * 8) = *(undefined8 *)param_1;
      return;
    }
    uVar10 = (int)(uVar6 + uVar5) / 2;
    iVar2 = *(int *)((long)__ptr + (long)(int)uVar10 * 8);
    uVar4 = uVar6;
    uVar3 = uVar10;
    if (iVar2 <= iVar1) {
      uVar4 = uVar10;
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
  } while (uVar10 != uVar6);
  uVar6 = uVar6 + (iVar2 <= iVar1);
LAB_001e925c:
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
  if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
    puVar8 = (undefined8 *)((long)__ptr + (long)(int)uVar9 * 8);
  }
  else {
    lVar7 = (long)(int)uVar6;
    memmove((void *)((long)__ptr + lVar7 * 8 + 8),(void *)((long)__ptr + lVar7 * 8),
            (long)(int)(uVar9 - uVar6) << 3);
    puVar8 = (undefined8 *)(lVar7 * 8 + *(long *)this);
  }
  *puVar8 = *(undefined8 *)param_1;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  return;
}



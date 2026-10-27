// Function : appendCharPointer
// Namespace: juce:String
// Entry    : 0048b350
// Prototype: undefined appendCharPointer(String * this, void * param_1, long param_2)
// Body     : 0048b350 - 0048b484


/* juce::String::appendCharPointer(juce::CharPointer_UTF8, juce::CharPointer_UTF8) */

void __thiscall juce::String::appendCharPointer(String *this,void *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  undefined4 *puVar6;
  char *__s;
  ulong __n;
  ulong uVar7;
  
  if ((int)(param_2 - (long)param_1) < 1) {
    return;
  }
  __s = *(char **)this;
  sVar4 = strlen(__s);
  __n = param_2 - (long)param_1 & 0xffffffff;
  piVar1 = (int *)(__s + -0x10);
  if (piVar1 == &emptyString) {
    uVar7 = sVar4 + __n + 4 & 0xfffffffffffffffc;
    puVar6 = operator_new__(uVar7 + 0x17);
    LOCK();
    *puVar6 = 0;
    UNLOCK();
    *(ulong *)(puVar6 + 2) = uVar7;
    *(undefined1 *)(puVar6 + 4) = 0;
    __s = (char *)(puVar6 + 4);
  }
  else {
    uVar5 = sVar4 + __n + 1;
    uVar7 = *(ulong *)(__s + -8);
    if (uVar5 <= uVar7) {
      if (*piVar1 < 1) goto LAB_0048b459;
      uVar7 = *(ulong *)(__s + -8);
    }
    if (uVar7 < uVar5) {
      uVar7 = uVar5;
    }
    uVar7 = uVar7 + 3 & 0xfffffffffffffffc;
    puVar6 = operator_new__(uVar7 + 0x17);
    LOCK();
    *puVar6 = 0;
    UNLOCK();
    *(ulong *)(puVar6 + 2) = uVar7;
    memcpy(puVar6 + 4,__s,*(size_t *)(__s + -8));
    LOCK();
    piVar2 = (int *)(__s + -0x10);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar1);
    }
    __s = (char *)(puVar6 + 4);
  }
LAB_0048b459:
  *(char **)this = __s;
  memcpy(__s + (int)sVar4,param_1,__n);
  (__s + (int)sVar4)[__n] = '\0';
  return;
}



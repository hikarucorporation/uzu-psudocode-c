// Function : objectToString
// Namespace: juce:var:VariantType
// Entry    : 004b2070
// Prototype: VariantType * objectToString(VariantType * this, uint * param_1)
// Body     : 004b2070 - 004b214e


/* juce::var::VariantType::objectToString(juce::var::ValueUnion const&) */

VariantType * __thiscall juce::var::VariantType::objectToString(VariantType *this,uint *param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  size_t sVar9;
  size_t __n;
  undefined4 *local_50 [4];
  char acStack_2c [4];
  
  acStack_2c[3] = 0;
  lVar3 = -4;
  __n = 0;
  uVar4 = *param_1;
  do {
    sVar9 = __n;
    lVar6 = lVar3;
    acStack_2c[lVar6 + 6] = "0123456789abcdef"[uVar4 & 0xf];
    __n = sVar9 + 1;
    bVar2 = 0xf < uVar4;
    lVar3 = lVar6 + -1;
    uVar4 = uVar4 >> 4;
  } while (bVar2);
  uVar8 = -(lVar6 + -1) & 0xfffffffffffffffc;
  puVar5 = operator_new__(uVar8 + 0x17);
  LOCK();
  *puVar5 = 0;
  UNLOCK();
  *(ulong *)(puVar5 + 2) = uVar8;
  memcpy(puVar5 + 4,acStack_2c + lVar6 + 6,__n);
  *(undefined1 *)((long)puVar5 + sVar9 + 0x11) = 0;
                    /* try { // try from 004b2103 to 004b2116 has its CatchHandler @ 004b214f */
  local_50[0] = puVar5 + 4;
  operator+((juce *)this,(byte *)"Object 0x",(String *)local_50);
  piVar7 = local_50[0] + -4;
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
    }
  }
  return this;
}



// Function : operator+
// Namespace: juce
// Entry    : 0048b010
// Prototype: juce * operator+(juce * this, byte * param_1, String * param_2)
// Body     : 0048b010 - 0048b129


/* juce::TEMPNAMEPLACEHOLDERVALUE(char const*, juce::String const&) */

juce * __thiscall juce::operator+(juce *this,byte *param_1,String *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  String *pSVar4;
  int *piVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte *local_28;
  
  local_28 = &DAT_0061ac58;
  if ((param_1 != (byte *)0x0) && (bVar6 = *param_1, bVar6 != 0)) {
    lVar8 = 0;
    pbVar2 = param_1;
    do {
      pbVar2 = pbVar2 + 1;
      lVar7 = lVar8 + (ulong)(bVar6 >> 7);
      lVar8 = lVar7 + 1;
      bVar6 = *pbVar2;
    } while (bVar6 != 0);
    uVar9 = lVar7 + 5U & 0xfffffffffffffffc;
    puVar3 = operator_new__(uVar9 + 0x17);
    LOCK();
    *puVar3 = 0;
    UNLOCK();
    *(ulong *)(puVar3 + 2) = uVar9;
    local_28 = (byte *)(puVar3 + 4);
    bVar6 = *param_1;
    pbVar2 = local_28;
    if (bVar6 != 0) {
      do {
        param_1 = param_1 + 1;
        if ((char)bVar6 < '\0') {
          *pbVar2 = bVar6 >> 6 | 0xc0;
          pbVar2[1] = bVar6 & 0x3f | 0x80;
          pbVar2 = pbVar2 + 1;
        }
        else {
          *pbVar2 = bVar6;
        }
        pbVar2 = pbVar2 + 1;
        bVar6 = *param_1;
      } while (bVar6 != 0);
    }
    *pbVar2 = 0;
  }
                    /* try { // try from 0048b0d7 to 0048b0e1 has its CatchHandler @ 0048b12a */
  pSVar4 = String::operator+=((String *)&local_28,param_2);
  lVar8 = *(long *)pSVar4;
  *(long *)this = lVar8;
  piVar5 = (int *)(lVar8 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  pbVar2 = local_28 + -0x10;
  if (pbVar2 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar2;
    *(int *)pbVar2 = *(int *)pbVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar2);
    }
  }
  return this;
}



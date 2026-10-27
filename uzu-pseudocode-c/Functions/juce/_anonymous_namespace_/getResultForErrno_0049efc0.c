// Function : getResultForErrno
// Namespace: juce:_anonymous_namespace_
// Entry    : 0049efc0
// Prototype: undefined getResultForErrno((anonymous_namespace) * this)
// Body     : 0049efc0 - 0049f146


/* juce::(anonymous namespace)::getResultForErrno() */

void __thiscall juce::(anonymous_namespace)::getResultForErrno(_anonymous_namespace_ *this)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  
  piVar3 = __errno_location();
  pbVar4 = (byte *)strerror(*piVar3);
  pbVar10 = &DAT_0061ac58;
  if ((pbVar4 != (byte *)0x0) && (bVar2 = *pbVar4, bVar2 != 0)) {
    lVar8 = 0;
    pbVar10 = pbVar4;
    do {
      pbVar10 = pbVar10 + 1;
      lVar7 = lVar8 + (ulong)(bVar2 >> 7);
      lVar8 = lVar7 + 1;
      bVar2 = *pbVar10;
    } while (bVar2 != 0);
    uVar9 = lVar7 + 5U & 0xfffffffffffffffc;
    puVar5 = operator_new__(uVar9 + 0x17);
    LOCK();
    *puVar5 = 0;
    UNLOCK();
    *(ulong *)(puVar5 + 2) = uVar9;
    pbVar10 = (byte *)(puVar5 + 4);
    bVar2 = *pbVar4;
    pbVar6 = pbVar10;
    if (bVar2 != 0) {
      do {
        pbVar4 = pbVar4 + 1;
        if ((char)bVar2 < '\0') {
          *pbVar6 = bVar2 >> 6 | 0xc0;
          pbVar6[1] = bVar2 & 0x3f | 0x80;
          pbVar6 = pbVar6 + 1;
        }
        else {
          *pbVar6 = bVar2;
        }
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar4;
      } while (bVar2 != 0);
    }
    *pbVar6 = 0;
  }
  if (*pbVar10 == 0) {
                    /* try { // try from 0049f0a5 to 0049f0ae has its CatchHandler @ 0049f147 */
    puVar5 = operator_new__(0x27);
    LOCK();
    *puVar5 = 0;
    UNLOCK();
    *(undefined8 *)(puVar5 + 2) = 0x10;
    pbVar4 = (byte *)(puVar5 + 4);
    *(undefined8 *)(puVar5 + 4) = 0x206e776f6e6b6e55;
    puVar5[6] = 0x6f727245;
    *(undefined2 *)(puVar5 + 7) = 0x72;
  }
  else {
    pbVar6 = pbVar10 + -0x10;
    pbVar4 = pbVar10;
    if (pbVar6 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
      UNLOCK();
    }
  }
  *(byte **)this = pbVar4;
  pbVar4 = pbVar4 + -0x10;
  if (pbVar4 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar4 = *(int *)pbVar4 + 1;
    UNLOCK();
    LOCK();
    iVar1 = *(int *)pbVar4;
    *(int *)pbVar4 = *(int *)pbVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar4);
    }
  }
  if (pbVar10 != &DAT_0061ac58) {
    pbVar10 = pbVar10 + -0x10;
    LOCK();
    iVar1 = *(int *)pbVar10;
    *(int *)pbVar10 = *(int *)pbVar10 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar10);
      return;
    }
  }
  return;
}



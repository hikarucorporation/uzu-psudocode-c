// Function : getDocumentElement
// Namespace: juce:XmlDocument
// Entry    : 0048b550
// Prototype: undefined getDocumentElement(XmlDocument * this, XmlDocument * param_1)
// Body     : 0048b550 - 0048b812


/* juce::XmlDocument::getDocumentElement(bool) */

void __thiscall juce::XmlDocument::getDocumentElement(XmlDocument *this,XmlDocument *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  MemoryOutputStream *pMVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **local_2088;
  long local_2080;
  MemoryOutputStream *local_2078;
  void *local_2070;
  char *local_2060;
  long local_2058;
  uint local_2050;
  undefined4 uStack_204c;
  XmlDocument *local_2040;
  ulong local_2038 [1025];
  
  if ((**(char **)param_1 == '\0') && (*(long **)(param_1 + 0x40) != (long *)0x0)) {
    plVar5 = (long *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 0048b5a6 to 0048b5b2 has its CatchHandler @ 0048b836 */
      MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_2088,0x100);
                    /* try { // try from 0048b5b7 to 0048b5f7 has its CatchHandler @ 0048b83b */
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar7 = (**(code **)(*plVar5 + 0xb0))(plVar5);
      uVar9 = lVar6 - lVar7;
      uVar11 = 0x7fffffffffffffff;
      local_2040 = this;
      if (uVar9 != 0 && lVar7 <= lVar6) {
        if (local_2078 != (MemoryOutputStream *)0x0) {
          MemoryOutputStream::preallocate(local_2078,local_2058 + uVar9);
        }
        if (uVar9 < 0x7fffffffffffffff) {
          uVar11 = uVar9;
        }
      }
      do {
        uVar9 = uVar11 & 0xffffffff;
        if (0x1fff < uVar11) {
          uVar9 = 0x2000;
        }
                    /* try { // try from 0048b625 to 0048b643 has its CatchHandler @ 0048b83d */
        uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,local_2038,uVar9);
        if ((int)uVar4 < 1) break;
        uVar9 = (ulong)uVar4;
        (*(code *)local_2088[5])(&local_2088,local_2038,uVar9);
        uVar12 = uVar11 - uVar9;
        bVar3 = (long)uVar9 <= (long)uVar11;
        uVar11 = uVar12;
      } while (uVar12 != 0 && bVar3);
      this = local_2040;
      if (2 < CONCAT44(uStack_204c,local_2050)) {
        local_2038[0] = local_2038[0] & 0xffffffffffffff00;
                    /* try { // try from 0048b663 to 0048b672 has its CatchHandler @ 0048b83b */
        (*(code *)local_2088[5])(&local_2088,local_2038,1);
        if (local_2078 == (MemoryOutputStream *)0x0) {
          cVar2 = *local_2060;
          pMVar8 = (MemoryOutputStream *)0x0;
        }
        else {
          if ((char *)CONCAT44(uStack_204c,local_2050) < *(char **)(local_2078 + 8)) {
            (*(char **)local_2078)[(long)CONCAT44(uStack_204c,local_2050)] = '\0';
          }
          local_2060 = *(char **)local_2078;
          cVar2 = *local_2060;
          pMVar8 = local_2078;
        }
        if (cVar2 == -0x11) {
          if (local_2060[1] == -0x45) {
            local_2060 = local_2060 + (ulong)(local_2060[2] == -0x41) * 3;
          }
LAB_0048b704:
                    /* try { // try from 0048b704 to 0048b70e has its CatchHandler @ 0048b817 */
          parseDocumentElement(this,param_1,local_2060);
          local_2088 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 0048b71a to 0048b721 has its CatchHandler @ 0048b815 */
          MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_2088);
          free(local_2070);
          local_2088 = &PTR__OutputStream_00713440;
          piVar10 = (int *)(local_2080 + -0x10);
          if (piVar10 != &emptyString) {
            LOCK();
            iVar1 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(piVar10);
            }
          }
          (**(code **)(*plVar5 + 8))(plVar5);
          return;
        }
        if (cVar2 == -1) {
          if (local_2060[1] != -2) goto LAB_0048b704;
        }
        else if ((cVar2 != -2) || (local_2060[1] != -1)) goto LAB_0048b704;
        if (pMVar8 == (MemoryOutputStream *)0x0) {
          pMVar8 = (MemoryOutputStream *)&local_2060;
        }
        else if ((char *)CONCAT44(uStack_204c,local_2050) < *(char **)(pMVar8 + 8)) {
          (*(char **)pMVar8)[(long)CONCAT44(uStack_204c,local_2050)] = '\0';
          pMVar8 = local_2078;
        }
                    /* try { // try from 0048b779 to 0048b782 has its CatchHandler @ 0048b813 */
        juce::String::createStringFromData((String *)local_2038,*(byte **)pMVar8,local_2050);
        uVar11 = *(ulong *)param_1;
        *(ulong *)param_1 = local_2038[0];
        piVar10 = (int *)(uVar11 - 0x10);
        local_2038[0] = uVar11;
        if (piVar10 != &emptyString) {
          LOCK();
          iVar1 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar10);
          }
        }
      }
      local_2088 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 0048b7c0 to 0048b7c7 has its CatchHandler @ 0048b819 */
      MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_2088);
      free(local_2070);
      local_2088 = &PTR__OutputStream_00713440;
      piVar10 = (int *)(local_2080 + -0x10);
      if (piVar10 != &emptyString) {
        LOCK();
        iVar1 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar10);
        }
      }
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  parseDocumentElement(this,param_1,*(char **)param_1);
  return;
}



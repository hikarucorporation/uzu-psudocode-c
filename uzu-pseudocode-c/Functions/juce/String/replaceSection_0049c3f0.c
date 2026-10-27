// Function : replaceSection
// Namespace: juce:String
// Entry    : 0049c3f0
// Prototype: undefined replaceSection(long * param_1, undefined8 * param_2, int param_3, int param_4, byte * param_5)
// Body     : 0049c3f0 - 0049c60f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::replaceSection(int, int, juce::StringRef) const */

void __cdecl
juce::String::replaceSection
          (long *param_1,undefined8 *param_2,int param_3,int param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  String *pSVar3;
  int *piVar4;
  size_t __n;
  size_t __n_00;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t __n_01;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  byte *pbVar12;
  byte *local_58;
  undefined4 *local_50;
  long *local_48;
  byte *local_40;
  undefined8 *local_38;
  
  iVar2 = 0;
  if (-1 < param_4) {
    iVar2 = param_4;
  }
  local_58 = (byte *)*param_2;
  iVar11 = 0;
  if (-1 < param_3) {
    iVar11 = param_3;
  }
  pbVar12 = local_58;
  if (0 < param_3) {
    do {
      bVar1 = *pbVar12;
      if (bVar1 == 0) {
        pbVar12 = local_58 + -0x10;
        if (pbVar12 != (byte *)&emptyString) {
          LOCK();
          *(int *)pbVar12 = *(int *)pbVar12 + 1;
          UNLOCK();
        }
                    /* try { // try from 0049c4c8 to 0049c4cf has its CatchHandler @ 0049c635 */
        local_50 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(param_5);
                    /* try { // try from 0049c4d5 to 0049c4e1 has its CatchHandler @ 0049c610 */
        pSVar3 = operator+=((String *)&local_58,(String *)&local_50);
        lVar9 = *(long *)pSVar3;
        *param_1 = lVar9;
        piVar4 = (int *)(lVar9 + -0x10);
        if (piVar4 != &emptyString) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        piVar4 = local_50 + -4;
        if (piVar4 != &emptyString) {
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar4);
          }
        }
        pbVar12 = local_58 + -0x10;
        if (pbVar12 == (byte *)&emptyString) {
          return;
        }
        LOCK();
        iVar2 = *(int *)pbVar12;
        *(int *)pbVar12 = *(int *)pbVar12 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(pbVar12);
          return;
        }
        return;
      }
      pbVar7 = pbVar12 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar7 = pbVar12 + 2;
        }
        else {
          pbVar7 = pbVar12 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar12 = pbVar7;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  pbVar7 = pbVar12;
  if (0 < param_4) {
    do {
      bVar1 = *pbVar7;
      if (bVar1 == 0) break;
      pbVar6 = pbVar7 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar6 = pbVar7 + 2;
        }
        else {
          pbVar6 = pbVar7 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar7 = pbVar6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  __n_01 = (long)pbVar12 - (long)local_58;
  if ((__n_01 == 0) && (*pbVar7 == 0)) {
    puVar5 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(param_5);
  }
  else {
    local_40 = param_5;
    local_38 = param_2;
    __n = strlen((char *)param_5);
    __n_00 = strlen((char *)pbVar7);
    lVar9 = __n_01 + __n + __n_00;
    if (lVar9 != 0) {
      uVar10 = lVar9 + 4U & 0xfffffffffffffffc;
      puVar5 = operator_new__(uVar10 + 0x17);
      LOCK();
      *puVar5 = 0;
      UNLOCK();
      *(ulong *)(puVar5 + 2) = uVar10;
      local_48 = param_1;
      memcpy(puVar5 + 4,(void *)*local_38,__n_01);
      pvVar8 = (void *)((long)puVar5 + __n_01 + 0x10);
      memcpy(pvVar8,local_40,__n);
      pvVar8 = (void *)((long)pvVar8 + __n);
      memcpy(pvVar8,pbVar7,__n_00);
      *(undefined1 *)(__n_00 + (long)pvVar8) = 0;
      *local_48 = (long)(puVar5 + 4);
      return;
    }
    puVar5 = (undefined4 *)&DAT_0061ac58;
  }
  *param_1 = (long)puVar5;
  return;
}



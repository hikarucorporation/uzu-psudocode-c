// Function : getLinkedTarget
// Namespace: juce:File
// Entry    : 004987c0
// Prototype: undefined getLinkedTarget(File * param_1, long * param_2)
// Body     : 004987c0 - 00498958


/* WARNING: Removing unreachable block (ram,0x004988af) */
/* WARNING: Removing unreachable block (ram,0x004988bc) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::File::getLinkedTarget() const */

void __cdecl juce::File::getLinkedTarget(File *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  char *__buf;
  ulong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  size_t __n;
  byte *pbVar7;
  long local_48;
  long local_40;
  File *local_38;
  
  bVar3 = isSymbolicLink((File *)*param_2);
  if (bVar3) {
    __buf = malloc(0x2002);
    uVar4 = readlink((char *)*param_2,__buf,0x2000);
    pbVar7 = &DAT_0061ac58;
    if (((__buf != (char *)0x0) && (0 < (int)uVar4)) && (*__buf != '\0')) {
      __n = uVar4 & 0xffffffff;
      if ((int)uVar4 < 1) {
        __n = 0;
      }
      uVar4 = __n + 4 & 0xfffffffffffffffc;
      local_38 = param_1;
                    /* try { // try from 00498835 to 00498839 has its CatchHandler @ 00498959 */
      puVar5 = operator_new__(uVar4 + 0x17);
      LOCK();
      *puVar5 = 0;
      UNLOCK();
      *(ulong *)(puVar5 + 2) = uVar4;
      pbVar7 = (byte *)(puVar5 + 4);
      memcpy(pbVar7,__buf,__n);
      *(undefined1 *)((long)puVar5 + __n + 0x10) = 0;
      param_1 = local_38;
    }
    free(__buf);
                    /* try { // try from 0049886c to 00498878 has its CatchHandler @ 0049898a */
    getPathUpToLastSlash(&local_40,param_2);
    piVar6 = (int *)(local_40 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    local_48 = local_40;
    piVar6 = (int *)(local_40 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
    }
                    /* try { // try from 004988e1 to 004988ee has its CatchHandler @ 00498966 */
    getChildFile(param_1,&local_48,pbVar7);
    piVar6 = (int *)(local_48 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
    }
    pbVar7 = pbVar7 + -0x10;
    if (pbVar7 != (byte *)&emptyString) {
      LOCK();
      iVar1 = *(int *)pbVar7;
      *(int *)pbVar7 = *(int *)pbVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(pbVar7);
      }
    }
  }
  else {
    lVar2 = *param_2;
    *(long *)param_1 = lVar2;
    piVar6 = (int *)(lVar2 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
  }
  return;
}



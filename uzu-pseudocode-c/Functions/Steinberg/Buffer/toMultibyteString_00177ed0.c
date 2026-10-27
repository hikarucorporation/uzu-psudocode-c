// Function : toMultibyteString
// Namespace: Steinberg:Buffer
// Entry    : 00177ed0
// Prototype: ulong toMultibyteString(Buffer * this, int param_1)
// Body     : 00177ed0 - 00178004


/* Steinberg::Buffer::toMultibyteString(int) */

ulong __thiscall Steinberg::Buffer::toMultibyteString(Buffer *this,int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  undefined8 unaff_R14;
  ulong uVar9;
  
  uVar8 = *(uint *)(this + 0x14);
  uVar9 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (uVar8 == 0) goto LAB_00177fd9;
  lVar4 = *(long *)(this + 8);
  if (*(short *)(((ulong)(uVar8 & 0xfffffffe) - 2) + lVar4) == 0) {
LAB_00177f51:
    __ptr = malloc((ulong)uVar8);
    uVar7 = 0;
    if (__ptr != (void *)0x0) {
      uVar7 = uVar8;
    }
  }
  else {
    if (*(uint *)(this + 0x10) < uVar8 + 2) {
      uVar7 = *(uint *)(this + 0x18);
      if (uVar7 == 0) {
        *(undefined4 *)(this + 0x18) = 0x1000;
        uVar7 = 0x1000;
      }
      uVar8 = uVar7 + uVar8 + 1;
      bVar2 = setSize(this,uVar8 - uVar8 % uVar7);
      uVar8 = *(uint *)(this + 0x14);
      if (bVar2) {
        lVar4 = *(long *)(this + 8);
        goto LAB_00177f3c;
      }
    }
    else {
LAB_00177f3c:
      *(undefined2 *)(lVar4 + (ulong)uVar8) = 0;
      uVar8 = *(int *)(this + 0x14) + 2;
      *(uint *)(this + 0x14) = uVar8;
    }
    if (uVar8 != 0) goto LAB_00177f51;
    __ptr = (void *)0x0;
    uVar7 = 0;
  }
                    /* try { // try from 00177f71 to 00177f7e has its CatchHandler @ 00178005 */
  uVar5 = ConstString::wideStringToMultiByte(__ptr,*(long *)(this + 8),uVar7,param_1);
  if ((int)uVar5 < 1) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    uVar9 = 0;
  }
  else {
    uVar3 = (int)uVar5 - 1;
    uVar8 = 0;
    if (uVar3 <= uVar7) {
      uVar8 = uVar3;
    }
    if (*(int *)(this + 0x10) != 0) {
      if (*(void **)(this + 8) == (void *)0x0) {
        pvVar6 = malloc(0);
        *(void **)(this + 8) = pvVar6;
        *(undefined4 *)(this + 0x10) = 0;
        iVar1 = *(int *)(this + 0x14);
      }
      else {
        free(*(void **)(this + 8));
        *(undefined8 *)(this + 8) = 0;
        *(undefined4 *)(this + 0x10) = 0;
        iVar1 = *(int *)(this + 0x14);
      }
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x14) = 0;
      }
    }
    *(uint *)(this + 0x10) = uVar7;
    *(uint *)(this + 0x14) = uVar8;
    *(void **)(this + 8) = __ptr;
  }
LAB_00177fd9:
  return uVar9 & 0xffffffff;
}



// Function : toWideString
// Namespace: Steinberg:Buffer
// Entry    : 00177b60
// Prototype: ulong toWideString(Buffer * this, int param_1)
// Body     : 00177b60 - 00177c91


/* Steinberg::Buffer::toWideString(int) */

ulong __thiscall Steinberg::Buffer::toWideString(Buffer *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined2 *__ptr;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined8 unaff_R14;
  ulong uVar8;
  
  uVar7 = *(uint *)(this + 0x14);
  uVar8 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (uVar7 == 0) goto LAB_00177c66;
  lVar4 = *(long *)(this + 8);
  if (*(char *)(lVar4 + (ulong)(uVar7 - 1)) != '\0') {
    uVar6 = uVar7 + 1;
    if (*(uint *)(this + 0x10) < uVar6) {
      uVar6 = *(uint *)(this + 0x18);
      if (uVar6 == 0) {
        *(undefined4 *)(this + 0x18) = 0x1000;
        uVar6 = 0x1000;
      }
      bVar1 = setSize(this,(uVar7 + uVar6) - (uVar7 + uVar6) % uVar6);
      if (!bVar1) goto LAB_00177bd0;
      uVar7 = *(uint *)(this + 0x14);
      uVar6 = uVar7 + 1;
      lVar4 = *(long *)(this + 8);
    }
    *(uint *)(this + 0x14) = uVar6;
    *(undefined1 *)(lVar4 + (ulong)uVar7) = 0;
  }
LAB_00177bd0:
  uVar7 = *(int *)(this + 0x14) * 2;
  if (uVar7 == 0) {
    __ptr = (undefined2 *)0x0;
    uVar6 = 0;
  }
  else {
    __ptr = malloc((ulong)uVar7);
    uVar6 = 0;
    if (__ptr != (undefined2 *)0x0) {
      uVar6 = uVar7;
    }
  }
                    /* try { // try from 00177bfc to 00177c06 has its CatchHandler @ 00177c92 */
  iVar2 = ConstString::multiByteToWideString(__ptr,*(char **)(this + 8),uVar6 >> 1,param_1);
  if (iVar2 < 1) {
    if (__ptr != (undefined2 *)0x0) {
      free(__ptr);
    }
    uVar8 = 0;
  }
  else {
    uVar3 = iVar2 * 2 - 2;
    uVar7 = 0;
    if (uVar3 <= uVar6) {
      uVar7 = uVar3;
    }
    if (*(int *)(this + 0x10) != 0) {
      if (*(void **)(this + 8) == (void *)0x0) {
        pvVar5 = malloc(0);
        *(void **)(this + 8) = pvVar5;
        *(undefined4 *)(this + 0x10) = 0;
        iVar2 = *(int *)(this + 0x14);
      }
      else {
        free(*(void **)(this + 8));
        *(undefined8 *)(this + 8) = 0;
        *(undefined4 *)(this + 0x10) = 0;
        iVar2 = *(int *)(this + 0x14);
      }
      if (iVar2 != 0) {
        *(undefined4 *)(this + 0x14) = 0;
      }
    }
    *(uint *)(this + 0x10) = uVar6;
    *(uint *)(this + 0x14) = uVar7;
    *(undefined2 **)(this + 8) = __ptr;
  }
LAB_00177c66:
  return uVar8 & 0xffffffff;
}



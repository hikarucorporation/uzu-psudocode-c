// Function : resize
// Namespace: Steinberg:String
// Entry    : 0017f4a0
// Prototype: undefined8 resize(String * this, uint param_1, uint param_3_00, char param_3)
// Body     : 0017f4a0 - 0017f69f


/* Steinberg::String::resize(unsigned int, bool, bool) */

undefined8 __thiscall
Steinberg::String::resize(String *this,uint param_1,uint param_3_00,char param_3)

{
  long lVar1;
  void *__ptr;
  undefined2 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  size_t __size;
  ulong uVar9;
  uint7 uVar10;
  
  uVar10 = (uint7)(uint3)(param_3_00 >> 8);
  if (param_1 == 0) {
    if (*(void **)(this + 8) != (void *)0x0) {
      free(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | param_3_00 << 0x1e;
    return CONCAT71(uVar10,1);
  }
  lVar1 = ((ulong)param_3_00 & 0xff) + 1;
  uVar6 = *(uint *)(this + 0x10);
  lVar4 = 2 - (ulong)((uVar6 & 0x40000000) == 0);
  __size = (ulong)(param_1 + 1) * lVar1;
  uVar8 = uVar6 & 0xbfffffff | (int)((ulong)param_3_00 & 0xff) << 0x1e;
  *(uint *)(this + 0x10) = uVar8;
  __ptr = *(void **)(this + 8);
  if (__ptr == (void *)0x0) {
    puVar2 = malloc(__size);
    if (puVar2 == (undefined2 *)0x0) {
      return 0;
    }
    *(undefined2 **)(this + 8) = puVar2;
    if ((char)param_3_00 == '\0') {
      *(undefined1 *)puVar2 = 0;
LAB_0017f5c0:
      *(undefined1 *)((long)puVar2 + (ulong)param_1) = 0;
    }
    else {
      *puVar2 = 0;
      puVar2[param_1] = 0;
    }
  }
  else {
    if (__size == ((ulong)(uVar6 & 0x3fffffff) + 1) * lVar4) {
      if (((char)param_3_00 != '\0') && (lVar1 != lVar4)) {
        *(undefined2 *)((long)__ptr + (ulong)param_1 * 2) = 0;
      }
      if (param_3 == '\0') {
        return CONCAT71(uVar10,1);
      }
      uVar8 = *(uint *)(this + 0x10);
      goto LAB_0017f5d0;
    }
    puVar2 = realloc(__ptr,__size);
    if (puVar2 == (undefined2 *)0x0) {
      return 0;
    }
    *(undefined2 **)(this + 8) = puVar2;
    uVar8 = *(uint *)(this + 0x10);
    if ((uVar8 & 0x40000000) == 0) goto LAB_0017f5c0;
    puVar2[param_1] = 0;
  }
  if (param_3 == '\0') {
    return CONCAT71(uVar10,1);
  }
LAB_0017f5d0:
  uVar6 = uVar8 & 0x3fffffff;
  uVar7 = (ulong)uVar6;
  if ((uVar6 < param_1) && (lVar1 = *(long *)(this + 8), lVar1 != 0)) {
    if ((uVar8 & 0x40000000) == 0) {
      memset((void *)(lVar1 + uVar7),0x20,(ulong)(param_1 - uVar6));
    }
    else {
      uVar3 = (ulong)param_1;
      *(undefined2 *)(lVar1 + uVar7 * 2) = 0x20;
      uVar5 = uVar7 + 1;
      if (uVar5 != uVar3) {
        uVar9 = (ulong)(param_1 + ~uVar6) & 3;
        if ((param_1 + ~uVar6 & 3) != 0) {
          do {
            *(undefined2 *)(*(long *)(this + 8) + uVar5 * 2) = 0x20;
            uVar5 = uVar5 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (2 < (uVar3 - uVar7) - 2) {
          do {
            *(undefined2 *)(*(long *)(this + 8) + uVar5 * 2) = 0x20;
            *(undefined2 *)(*(long *)(this + 8) + 2 + uVar5 * 2) = 0x20;
            *(undefined2 *)(*(long *)(this + 8) + 4 + uVar5 * 2) = 0x20;
            *(undefined2 *)(*(long *)(this + 8) + 6 + uVar5 * 2) = 0x20;
            uVar5 = uVar5 + 4;
          } while (uVar3 != uVar5);
        }
      }
    }
  }
  return CONCAT71(uVar10,1);
}



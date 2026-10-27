// Function : data_create_use
// Namespace: 
// Entry    : 0042fa60
// Prototype: undefined4 * data_create_use(long param_1)
// Body     : 0042fa60 - 0042fb8e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* data_create_use(hb_ot_shape_plan_t const*) */

undefined4 * __cdecl data_create_use(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *__ptr;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  __ptr = calloc(1,0x10);
  if (__ptr != (undefined4 *)0x0) {
    if (0 < *(int *)(param_1 + 0x3c)) {
      iVar2 = *(int *)(param_1 + 0x3c) + -1;
      iVar5 = 0;
      do {
        while( true ) {
          uVar4 = (uint)(iVar2 + iVar5) >> 1;
          uVar1 = *(uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar4 * 0x24);
          if (0x72706866 < uVar1) break;
          if (uVar1 == 0x72706866) {
            *__ptr = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x1c + (ulong)uVar4 * 0x24);
            iVar2 = *(int *)(param_1 + 4);
            goto joined_r0x0042fb23;
          }
          iVar5 = uVar4 + 1;
          if (iVar2 < iVar5) goto LAB_0042fad0;
        }
        iVar2 = uVar4 - 1;
      } while (iVar5 <= iVar2);
    }
LAB_0042fad0:
    *__ptr = 0;
    iVar2 = *(int *)(param_1 + 4);
joined_r0x0042fb23:
    if (iVar2 < 0x4e6b6f6f) {
      if (iVar2 < 0x4d616e64) {
        if (((iVar2 != 0x41646c6d) && (iVar2 != 0x41726162)) && (iVar2 != 0x43687273)) {
          return __ptr;
        }
      }
      else if (((iVar2 != 0x4d616e64) && (iVar2 != 0x4d616e69)) && (iVar2 != 0x4d6f6e67)) {
        return __ptr;
      }
    }
    else if (iVar2 < 0x50686c70) {
      if (((iVar2 != 0x4e6b6f6f) && (iVar2 != 0x4f756772)) && (iVar2 != 0x50686167)) {
        return __ptr;
      }
    }
    else if (iVar2 < 0x536f6764) {
      if ((iVar2 != 0x50686c70) && (iVar2 != 0x526f6867)) {
        return __ptr;
      }
    }
    else if ((iVar2 != 0x53797263) && (iVar2 != 0x536f6764)) {
      return __ptr;
    }
    lVar3 = data_create_arabic(param_1);
    *(long *)(__ptr + 2) = lVar3;
    if (lVar3 != 0) {
      return __ptr;
    }
    free(__ptr);
  }
  return (undefined4 *)0x0;
}



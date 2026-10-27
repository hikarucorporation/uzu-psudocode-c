// Function : tabreceive_perform
// Namespace: 
// Entry    : 0058e430
// Prototype: long tabreceive_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0058e430 - 0058e66d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long tabreceive_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *__s;
  char *in_R8;
  ulong uVar14;
  undefined8 in_R9;
  long lVar15;
  int iVar16;
  size_t __n;
  undefined1 auVar17 [16];
  undefined4 *local_38;
  undefined4 local_30;
  int local_2c;
  
  __s = *(undefined4 **)(param_9 + 0x10);
  uVar1 = *(ulong *)(param_9 + 0x18);
  uVar7 = dsparray_get_array(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(long **)(param_9 + 8),(char *)&local_2c,&local_38,0,in_R8,in_R9);
  lVar6 = _UNK_0065d418;
  lVar5 = _DAT_0065d410;
  iVar16 = (int)uVar1;
  if ((int)uVar7 == 0) {
    if (iVar16 == 0) goto LAB_0058e659;
    __n = (uVar1 & 0xffffffff) << 2;
  }
  else {
    uVar14 = (ulong)local_2c;
    uVar10 = (long)iVar16;
    if ((long)uVar14 <= (long)iVar16) {
      uVar10 = uVar14;
    }
    if (uVar10 != 0) {
      puVar8 = local_38;
      if (4 < uVar10) {
        if (((__s + uVar10 <= &local_38 || &local_30 <= __s) &&
            (local_38 + uVar10 * 2 + -1 <= &local_38 || &local_30 <= local_38)) &&
           (local_38 + uVar10 * 2 + -1 <= __s || __s + uVar10 <= local_38)) {
          uVar13 = (ulong)((uint)uVar10 & 3);
          uVar9 = 4;
          if (uVar13 != 0) {
            uVar9 = uVar13;
          }
          lVar15 = uVar10 - uVar9;
          puVar8 = local_38 + lVar15 * 2;
          lVar12 = 0;
          do {
            auVar17._8_4_ = (int)local_38;
            auVar17._0_8_ = local_38;
            auVar17._12_4_ = (int)((ulong)local_38 >> 0x20);
            uVar2 = local_38[2];
            uVar3 = *(undefined4 *)((long)local_38 + lVar5);
            uVar4 = ((undefined4 *)((long)local_38 + lVar5))[2];
            puVar11 = __s + lVar12;
            *puVar11 = *local_38;
            puVar11[1] = uVar2;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            lVar12 = lVar12 + 4;
            local_38 = local_38 + 8;
          } while (lVar15 != lVar12);
          local_38 = (undefined4 *)(auVar17._8_8_ + lVar6 + 8);
          __s = __s + lVar15;
          uVar10 = uVar9;
        }
      }
      uVar13 = uVar10 & 3;
      uVar9 = uVar10 - 1;
      if (uVar13 != 0) {
        puVar11 = puVar8;
        do {
          uVar10 = uVar10 - 1;
          puVar8 = puVar11 + 2;
          *__s = *puVar11;
          __s = __s + 1;
          uVar13 = uVar13 - 1;
          puVar11 = puVar8;
          local_38 = puVar8;
        } while (uVar13 != 0);
      }
      if (2 < uVar9) {
        do {
          local_38 = puVar8 + 8;
          *__s = *puVar8;
          __s[1] = puVar8[2];
          __s[2] = puVar8[4];
          __s[3] = puVar8[6];
          __s = __s + 4;
          uVar10 = uVar10 - 4;
          puVar8 = local_38;
        } while (uVar10 != 0);
      }
    }
    if (iVar16 <= local_2c) goto LAB_0058e659;
    __n = ((long)(uVar1 << 0x20) >> 0x1e) + uVar14 * -4;
  }
  memset(__s,0,__n);
LAB_0058e659:
  return param_9 + 0x20;
}



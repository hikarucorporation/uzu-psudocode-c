// Function : tabread4_tilde_perform
// Namespace: 
// Entry    : 0058dc20
// Prototype: long tabread4_tilde_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0058dc20 - 0058dda3


long tabread4_tilde_perform
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  void *__s;
  ulong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  char *in_R8;
  undefined8 in_R9;
  float fVar18;
  float fVar19;
  int local_34;
  long local_30;
  
  lVar5 = *(long *)(param_9 + 0x10);
  lVar6 = *(long *)(param_9 + 0x18);
  __s = *(void **)(param_9 + 0x20);
  uVar7 = *(ulong *)(param_9 + 0x28);
  uVar12 = dsparray_get_array(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long **)(param_9 + 8),(char *)&local_34,&local_30,0,in_R8,in_R9);
  fVar11 = DAT_0065d420;
  fVar10 = DAT_00652610;
  fVar9 = DAT_005d9038;
  iVar14 = (int)uVar7;
  if ((int)uVar12 != 0) {
    iVar1 = local_34 + -3;
    bVar8 = 3 < local_34;
    local_34 = iVar1;
    if (bVar8) {
      if (0 < iVar14) {
        lVar13 = 0;
        do {
          fVar2 = *(float *)(lVar6 + lVar13 * 4) + *(float *)(lVar5 + lVar13 * 4);
          iVar15 = (int)fVar2;
          if (iVar15 < 1) {
            fVar18 = 0.0;
            iVar17 = 1;
          }
          else {
            fVar18 = fVar9;
            iVar17 = iVar1;
            if (iVar15 <= iVar1) {
              fVar18 = fVar2 - (float)iVar15;
              iVar17 = iVar15;
            }
          }
          lVar16 = (long)iVar17;
          fVar2 = *(float *)(local_30 + -8 + lVar16 * 8);
          fVar3 = *(float *)(local_30 + lVar16 * 8);
          fVar4 = *(float *)(local_30 + 0x10 + lVar16 * 8);
          fVar19 = *(float *)(local_30 + 8 + lVar16 * 8) - fVar3;
          *(float *)((long)__s + lVar13 * 4) =
               ((((fVar2 - fVar4) - fVar19 * fVar10) * fVar18 -
                (fVar2 + fVar2 + fVar4 + fVar3 * fVar10)) * (fVar11 - fVar18 * fVar11) + fVar19) *
               fVar18 + fVar3;
          lVar13 = lVar13 + 1;
        } while (iVar14 != (int)lVar13);
      }
      goto LAB_0058dd8f;
    }
  }
  if (iVar14 != 0) {
    memset(__s,0,(uVar7 & 0xffffffff) << 2);
  }
LAB_0058dd8f:
  return param_9 + 0x30;
}



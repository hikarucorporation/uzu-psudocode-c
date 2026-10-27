// Function : tabread_tilde_perform
// Namespace: 
// Entry    : 0058d7f0
// Prototype: long tabread_tilde_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0058d7f0 - 0058d93f


long tabread_tilde_perform
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  char *in_R8;
  undefined8 in_R9;
  float *pfVar9;
  undefined4 *__s;
  int local_34;
  long local_30;
  
  pfVar9 = *(float **)(param_9 + 0x10);
  __s = *(undefined4 **)(param_9 + 0x18);
  uVar1 = *(ulong *)(param_9 + 0x20);
  uVar2 = dsparray_get_array(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(long **)(param_9 + 8),(char *)&local_34,&local_30,0,in_R8,in_R9);
  iVar4 = (int)uVar1;
  if ((int)uVar2 == 0) {
    if (iVar4 != 0) {
      memset(__s,0,(uVar1 & 0xffffffff) << 2);
    }
  }
  else {
    local_34 = local_34 + -1;
    if (0 < iVar4) {
      iVar6 = (int)*pfVar9;
      iVar3 = local_34;
      if (iVar6 <= local_34) {
        iVar3 = iVar6;
      }
      iVar7 = 0;
      if (-1 < iVar6) {
        iVar7 = iVar3;
      }
      *__s = *(undefined4 *)(local_30 + (long)iVar7 * 8);
      if (iVar4 != 1) {
        if (iVar4 != 2) {
          lVar5 = 0;
          lVar8 = 0;
          do {
            iVar6 = (int)pfVar9[lVar5 + 1];
            iVar3 = iVar6;
            if (local_34 < iVar6) {
              iVar3 = local_34;
            }
            if (iVar6 < 0) {
              iVar3 = 0;
            }
            __s[lVar5 + 1] = *(undefined4 *)(local_30 + (long)iVar3 * 8);
            iVar6 = (int)pfVar9[lVar5 + 2];
            iVar3 = iVar6;
            if (local_34 < iVar6) {
              iVar3 = local_34;
            }
            if (iVar6 < 0) {
              iVar3 = 0;
            }
            __s[lVar5 + 2] = *(undefined4 *)(local_30 + (long)iVar3 * 8);
            lVar8 = lVar8 + -8;
            lVar5 = lVar5 + 2;
          } while ((iVar4 - 1U & 0xfffffffe) != (uint)lVar5);
          pfVar9 = (float *)((long)pfVar9 - lVar8);
          __s = (undefined4 *)((long)__s - lVar8);
        }
        if ((iVar4 - 1U & 1) != 0) {
          iVar4 = (int)pfVar9[1];
          if (iVar4 <= local_34) {
            local_34 = iVar4;
          }
          iVar3 = 0;
          if (-1 < iVar4) {
            iVar3 = local_34;
          }
          __s[1] = *(undefined4 *)(local_30 + (long)iVar3 * 8);
        }
      }
    }
  }
  return param_9 + 0x28;
}



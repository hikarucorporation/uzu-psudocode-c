// Function : threshold_tilde_perform
// Namespace: 
// Entry    : 0058ee80
// Prototype: long threshold_tilde_perform(long param_1)
// Body     : 0058ee80 - 0058ef3a


long threshold_tilde_perform(long param_1)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(float *)(lVar2 + 0x58) <= 0.0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
    if (*(int *)(lVar2 + 0x4c) == 0) {
      if (iVar3 != 0) {
        lVar4 = 0;
        do {
          pfVar1 = (float *)(*(long *)(param_1 + 8) + lVar4 * 4);
          if (*(float *)(lVar2 + 0x50) < *pfVar1 || *(float *)(lVar2 + 0x50) == *pfVar1) {
            clock_delay(0.0,*(double **)(lVar2 + 0x40));
            *(undefined4 *)(lVar2 + 0x4c) = 1;
            fVar5 = *(float *)(lVar2 + 0x60);
            goto LAB_0058ee9f;
          }
          lVar4 = lVar4 + 1;
        } while (iVar3 != (int)lVar4);
      }
    }
    else if (iVar3 != 0) {
      lVar4 = 0;
      do {
        pfVar1 = (float *)(*(long *)(param_1 + 8) + lVar4 * 4);
        if (*pfVar1 <= *(float *)(lVar2 + 0x54) && *(float *)(lVar2 + 0x54) != *pfVar1) {
          clock_delay(0.0,*(double **)(lVar2 + 0x40));
          *(undefined4 *)(lVar2 + 0x4c) = 0;
          fVar5 = *(float *)(lVar2 + 100);
          goto LAB_0058ee9f;
        }
        lVar4 = lVar4 + 1;
      } while (iVar3 != (int)lVar4);
    }
  }
  else {
    fVar5 = *(float *)(lVar2 + 0x58) - *(float *)(lVar2 + 0x5c);
LAB_0058ee9f:
    *(float *)(lVar2 + 0x58) = fVar5;
  }
  return param_1 + 0x20;
}



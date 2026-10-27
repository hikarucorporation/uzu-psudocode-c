// Function : audio_make_sane
// Namespace: 
// Entry    : 0053c6f0
// Prototype: undefined audio_make_sane(int * param_1, undefined8 * param_2, int * param_3, undefined4 * param_4)
// Body     : 0053c6f0 - 0053c831


void audio_make_sane(int *param_1,undefined8 *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = juce::jpeglibNamespace::jpeg_zigzag_order2._8_8_;
  iVar3 = *param_1;
  lVar4 = (long)iVar3;
  iVar1 = *param_3;
  lVar5 = (long)iVar1;
  if (lVar4 == -1) {
    if (iVar1 != -1) {
      *param_2 = juce::jpeglibNamespace::jpeg_zigzag_order2._0_8_;
      param_2[1] = uVar2;
LAB_0053c79b:
      iVar3 = *param_3;
LAB_0053c79e:
      *param_1 = iVar3;
      goto LAB_0053c7c3;
    }
    *param_3 = 0;
    *param_1 = 0;
    iVar3 = 0;
  }
  else {
    if (iVar1 == -1) {
      *param_3 = iVar3;
      iVar3 = *param_1;
      if (iVar3 < 1) goto LAB_0053c7e8;
      lVar4 = 0;
      do {
        param_4[lVar4] = 2;
        lVar4 = lVar4 + 1;
        iVar3 = *param_1;
      } while (lVar4 < iVar3);
    }
    else {
      if (iVar3 < iVar1) {
        do {
          while (lVar4 != 0) {
            *(int *)((long)param_2 + lVar4 * 4) = *(int *)((long)param_2 + lVar4 * 4 + -4) + 1;
            lVar4 = lVar4 + 1;
            iVar3 = *param_3;
            if (iVar3 <= lVar4) goto LAB_0053c79e;
          }
          *(undefined4 *)param_2 = 0;
          lVar4 = 1;
          iVar3 = *param_3;
        } while (1 < iVar3);
        goto LAB_0053c79e;
      }
      if (iVar1 < iVar3) {
        do {
          while (lVar5 != 0) {
            param_4[lVar5] = param_4[lVar5 + -1];
            lVar5 = lVar5 + 1;
            if (*param_1 <= lVar5) goto LAB_0053c79b;
          }
          *param_4 = 2;
          lVar5 = 1;
        } while (1 < *param_1);
        goto LAB_0053c79b;
      }
    }
LAB_0053c7c3:
    if (3 < iVar3) {
      iVar1 = *param_3;
      goto joined_r0x0053c80e;
    }
  }
LAB_0053c7e8:
  memset((void *)((long)param_2 + (long)iVar3 * 4),0xff,(ulong)(3 - iVar3) * 4 + 4);
  iVar1 = *param_3;
joined_r0x0053c80e:
  if ((long)iVar1 < 4) {
    memset(param_4 + iVar1,0,(ulong)(3 - iVar1) * 4 + 4);
    return;
  }
  return;
}



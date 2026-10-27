// Function : png_do_bgr
// Namespace: juce:pnglibNamespace
// Entry    : 0039c640
// Prototype: undefined png_do_bgr(uint * param_1, undefined2 * param_2)
// Body     : 0039c640 - 0039c83f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_do_bgr(juce::pnglibNamespace::png_row_info_struct*, unsigned char*) */

void __cdecl juce::pnglibNamespace::png_do_bgr(uint *param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  bVar1 = (byte)param_1[4];
  if ((bVar1 & 2) != 0) {
    uVar4 = *param_1;
    if (*(char *)((long)param_1 + 0x11) != '\x10') {
      if (*(char *)((long)param_1 + 0x11) != '\b') {
        return;
      }
      if (bVar1 == 2) {
        if (uVar4 == 0) {
          return;
        }
        if (2 < uVar4 - 1) {
          uVar5 = uVar4 & 0xfffffffc;
          do {
            uVar2 = *(undefined1 *)param_2;
            *(undefined1 *)param_2 = *(undefined1 *)(param_2 + 1);
            *(undefined1 *)(param_2 + 1) = uVar2;
            uVar2 = *(undefined1 *)((long)param_2 + 3);
            *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)param_2 + 5);
            *(undefined1 *)((long)param_2 + 5) = uVar2;
            uVar2 = *(undefined1 *)(param_2 + 3);
            *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_2 + 4);
            *(undefined1 *)(param_2 + 4) = uVar2;
            uVar2 = *(undefined1 *)((long)param_2 + 9);
            *(undefined1 *)((long)param_2 + 9) = *(undefined1 *)((long)param_2 + 0xb);
            *(undefined1 *)((long)param_2 + 0xb) = uVar2;
            param_2 = param_2 + 6;
            uVar5 = uVar5 - 4;
          } while (uVar5 != 0);
        }
        if ((uVar4 & 3) == 0) {
          return;
        }
        lVar6 = 0;
        do {
          uVar2 = *(undefined1 *)((long)param_2 + lVar6);
          *(undefined1 *)((long)param_2 + lVar6) = *(undefined1 *)((long)param_2 + lVar6 + 2);
          *(undefined1 *)((long)param_2 + lVar6 + 2) = uVar2;
          lVar6 = lVar6 + 3;
        } while ((uVar4 & 3) * 3 != (int)lVar6);
        return;
      }
      if (bVar1 != 6) {
        return;
      }
      if (uVar4 == 0) {
        return;
      }
      if (2 < uVar4 - 1) {
        uVar5 = uVar4 & 0xfffffffc;
        do {
          uVar2 = *(undefined1 *)param_2;
          *(undefined1 *)param_2 = *(undefined1 *)(param_2 + 1);
          *(undefined1 *)(param_2 + 1) = uVar2;
          uVar2 = *(undefined1 *)(param_2 + 2);
          *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_2 + 3);
          *(undefined1 *)(param_2 + 3) = uVar2;
          uVar2 = *(undefined1 *)(param_2 + 4);
          *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_2 + 5);
          *(undefined1 *)(param_2 + 5) = uVar2;
          uVar2 = *(undefined1 *)(param_2 + 6);
          *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_2 + 7);
          *(undefined1 *)(param_2 + 7) = uVar2;
          param_2 = param_2 + 8;
          uVar5 = uVar5 - 4;
        } while (uVar5 != 0);
      }
      if ((uVar4 & 3) == 0) {
        return;
      }
      lVar6 = 0;
      do {
        uVar2 = *(undefined1 *)(param_2 + lVar6 * 2);
        *(undefined1 *)(param_2 + lVar6 * 2) = *(undefined1 *)(param_2 + lVar6 * 2 + 1);
        *(undefined1 *)(param_2 + lVar6 * 2 + 1) = uVar2;
        lVar6 = lVar6 + 1;
      } while ((uVar4 & 3) != (uint)lVar6);
      return;
    }
    if (bVar1 == 2) {
      if (uVar4 == 0) {
        return;
      }
      if (uVar4 == 1) goto LAB_0039c831;
      uVar5 = uVar4 & 0xfffffffe;
      do {
        uVar3 = *param_2;
        *param_2 = param_2[2];
        param_2[2] = uVar3;
        uVar3 = param_2[3];
        param_2[3] = param_2[5];
        param_2[5] = uVar3;
        param_2 = param_2 + 6;
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    else {
      if (bVar1 != 6) {
        return;
      }
      if (uVar4 == 0) {
        return;
      }
      if (uVar4 == 1) goto LAB_0039c831;
      uVar5 = uVar4 & 0xfffffffe;
      do {
        uVar3 = *param_2;
        *param_2 = param_2[2];
        param_2[2] = uVar3;
        uVar3 = param_2[4];
        param_2[4] = param_2[6];
        param_2[6] = uVar3;
        param_2 = param_2 + 8;
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    if ((uVar4 & 1) != 0) {
LAB_0039c831:
      uVar3 = *param_2;
      *param_2 = param_2[2];
      param_2[2] = uVar3;
      return;
    }
  }
  return;
}



// Function : ~ClientRemappedBuffer
// Namespace: juce:ClientRemappedBuffer_double_
// Entry    : 001b22c0
// Prototype: undefined ~ClientRemappedBuffer(ClientRemappedBuffer<double> * this)
// Body     : 001b22c0 - 001b25bb


/* juce::ClientRemappedBuffer<double>::~ClientRemappedBuffer() */

void __thiscall
juce::ClientRemappedBuffer<double>::~ClientRemappedBuffer(ClientRemappedBuffer<double> *this)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  
  piVar16 = *(int **)(*(long *)(this + 0x130) + 0x20);
  iVar4 = countValidBuses<double>(piVar16,*(int *)(*(long *)(this + 0x130) + 0x10));
  uVar12 = (ulong)iVar4;
  piVar1 = piVar16 + uVar12 * 6;
  lVar15 = **(long **)(this + 0x128);
  lVar10 = (*(long **)(this + 0x128))[1];
  uVar5 = lVar10 - lVar15;
  if ((ulong)(((long)uVar5 >> 4) * -0x3333333333333333) < uVar12) {
LAB_001b2519:
    if (iVar4 != 0) {
      do {
        iVar4 = *piVar16;
        if ((long)iVar4 != 0) {
          lVar15 = *(long *)(piVar16 + 4);
          lVar10 = 0;
          do {
            if (*(void **)(lVar15 + lVar10) != (void *)0x0) {
              FloatVectorOperationsBase<double,int>::clear
                        (*(void **)(lVar15 + lVar10),*(int *)(*(long *)(this + 0x130) + 8));
            }
            lVar10 = lVar10 + 8;
          } while ((long)iVar4 * 8 != lVar10);
        }
        piVar16 = piVar16 + 6;
      } while (piVar16 != piVar1);
    }
  }
  else {
    if (iVar4 != 0) {
      piVar6 = piVar16;
      do {
        plVar13 = *(long **)(piVar6 + 4);
        iVar3 = *piVar6;
        iVar9 = (int)((ulong)(*(long *)(lVar15 + 0x30) - *(long *)(lVar15 + 0x28)) >> 2);
        iVar7 = iVar9;
        if (iVar3 < iVar9) {
          iVar7 = iVar3;
        }
        uVar5 = (ulong)iVar7;
        plVar2 = plVar13 + uVar5;
        lVar14 = uVar5 * 8;
        if (3 < iVar7) {
          lVar11 = ((uVar5 & 0x1fffffffffffffff) >> 2) + 1;
          plVar13 = plVar13 + 2;
          do {
            plVar8 = plVar13;
            if (plVar8[-2] == 0) {
              plVar8 = plVar8 + -2;
              goto LAB_001b2430;
            }
            if (plVar8[-1] == 0) {
              plVar8 = plVar8 + -1;
              goto LAB_001b2430;
            }
            if (*plVar8 == 0) goto LAB_001b2430;
            if (plVar8[1] == 0) {
              plVar8 = plVar8 + 1;
              goto LAB_001b2430;
            }
            lVar11 = lVar11 + -1;
            lVar14 = lVar14 + -0x20;
            plVar13 = plVar8 + 4;
          } while (1 < lVar11);
          plVar13 = plVar8 + 2;
        }
        lVar14 = lVar14 >> 3;
        if (lVar14 == 1) {
LAB_001b240d:
          plVar8 = plVar13;
          if (*plVar13 != 0) {
            plVar8 = plVar2;
          }
        }
        else if (lVar14 == 2) {
LAB_001b2403:
          plVar8 = plVar13;
          if (*plVar13 != 0) {
            plVar13 = plVar13 + 1;
            goto LAB_001b240d;
          }
        }
        else {
          plVar8 = plVar2;
          if ((lVar14 == 3) && (plVar8 = plVar13, *plVar13 != 0)) {
            plVar13 = plVar13 + 1;
            goto LAB_001b2403;
          }
        }
LAB_001b2430:
        if ((*(char *)(lVar15 + 0x48) != '\0') && (iVar9 < iVar3 || plVar8 != plVar2))
        goto LAB_001b2519;
        piVar6 = piVar6 + 6;
        lVar15 = lVar15 + 0x50;
      } while (piVar6 != piVar1);
      uVar5 = lVar10 - lVar15;
    }
    if (0xf0 < (long)uVar5) {
      lVar11 = uVar5 / 0x140 + 1;
      uVar5 = lVar10 - lVar15;
      lVar14 = lVar15 + 0xa0;
      do {
        lVar15 = lVar14;
        if (*(char *)(lVar15 + -0x58) != '\0') {
          lVar15 = lVar15 + -0xa0;
          goto joined_r0x001b25a5;
        }
        if (*(char *)(lVar15 + -8) != '\0') {
          lVar15 = lVar15 + -0x50;
          goto joined_r0x001b25a5;
        }
        if (*(char *)(lVar15 + 0x48) != '\0') goto joined_r0x001b25a5;
        if (*(char *)(lVar15 + 0x98) != '\0') {
          lVar15 = lVar15 + 0x50;
          goto joined_r0x001b25a5;
        }
        lVar11 = lVar11 + -1;
        uVar5 = uVar5 - 0x140;
        lVar14 = lVar15 + 0x140;
      } while (1 < lVar11);
      lVar15 = lVar15 + 0xa0;
    }
    lVar14 = ((long)uVar5 >> 4) * -0x3333333333333333;
    if (lVar14 == 1) {
LAB_001b250d:
      if (*(char *)(lVar15 + 0x48) != '\0') goto joined_r0x001b25a5;
    }
    else {
      if (lVar14 == 2) {
LAB_001b2502:
        if (*(char *)(lVar15 + 0x48) == '\0') {
          lVar15 = lVar15 + 0x50;
          goto LAB_001b250d;
        }
      }
      else {
        if (lVar14 != 3) goto LAB_001b257f;
        if (*(char *)(lVar15 + 0x48) == '\0') {
          lVar15 = lVar15 + 0x50;
          goto LAB_001b2502;
        }
      }
joined_r0x001b25a5:
      if (lVar15 != lVar10) goto LAB_001b2519;
    }
LAB_001b257f:
                    /* try { // try from 001b257f to 001b2586 has its CatchHandler @ 001b25bc */
    copyToHostOutputBuses(this,uVar12);
  }
  free(*(void **)(this + 0x18));
  return;
}



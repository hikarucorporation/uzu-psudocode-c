// Function : bonk_free
// Namespace: 
// Entry    : 004d9fa0
// Prototype: undefined bonk_free(long param_1)
// Body     : 004d9fa0 - 004da0db


void bonk_free(long param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  iVar7 = *(int *)(param_1 + 0x2630);
  if (0 < iVar7) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x2628) + 0x2588);
    do {
      freebytes((void *)*puVar5);
      puVar5 = puVar5 + 0x4b3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  freebytes(*(void **)(param_1 + 0x2628));
  clock_free(*(double **)(param_1 + 0x38));
  piVar1 = *(int **)(param_1 + 0x98);
  piVar2 = piVar1 + 8;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    piVar2 = bonk_filterbanklist;
    if (bonk_filterbanklist == piVar1) {
      piVar4 = (int *)&bonk_filterbanklist;
    }
    else {
      do {
        piVar4 = piVar2;
        piVar2 = *(int **)(piVar4 + 10);
        if (piVar2 == (int *)0x0) goto LAB_004da055;
      } while (piVar2 != piVar1);
      piVar4 = piVar4 + 10;
    }
    *(undefined8 *)piVar4 = *(undefined8 *)(piVar1 + 10);
LAB_004da055:
    iVar7 = *piVar1;
    if (0 < iVar7) {
      lVar6 = 0;
      lVar8 = 0;
      do {
        pvVar3 = *(void **)(*(long *)(piVar1 + 6) + 0x18 + lVar6);
        if (pvVar3 != (void *)0x0) {
          freebytes(pvVar3);
          iVar7 = *piVar1;
        }
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + 0x20;
      } while (lVar8 < iVar7);
    }
    freebytes(*(void **)(piVar1 + 6));
    freebytes(piVar1);
  }
  freebytes(*(void **)(param_1 + 0x2620));
  return;
}



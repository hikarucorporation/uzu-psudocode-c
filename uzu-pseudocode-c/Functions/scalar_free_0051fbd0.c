// Function : scalar_free
// Namespace: 
// Entry    : 0051fbd0
// Prototype: undefined scalar_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, void * param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 0051fbd0 - 0051fc8a


void scalar_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                void *param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  undefined8 extraout_RDX_01;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)((long)param_9 + 0x10);
  lVar2 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)puVar1);
  uVar6 = sys_unqueuegui((long)param_9);
  if (lVar2 == 0) {
    pd_error(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "scalar: couldn\'t find template %s",*puVar1,param_12,param_13,param_14);
    return;
  }
  uVar3 = extraout_RDX;
  if (0 < *(int *)(lVar2 + 0x18)) {
    piVar5 = *(int **)(lVar2 + 0x20);
    lVar4 = 0;
    do {
      if (*piVar5 == 2) {
        uVar6 = binbuf_free(*(void **)((long)param_9 + lVar4 * 8 + 0x18));
        uVar3 = extraout_RDX_00;
      }
      else if (*piVar5 == 3) {
        uVar6 = array_free(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           *(int **)((long)param_9 + lVar4 * 8 + 0x18),param_10,uVar3,param_12,
                           param_13,param_14);
        uVar3 = extraout_RDX_01;
      }
      lVar4 = lVar4 + 1;
      piVar5 = piVar5 + 6;
    } while (lVar4 < *(int *)(lVar2 + 0x18));
  }
  pdgui_stub_deleteforkey
            (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,param_10,
             uVar3,param_12,param_13,param_14);
  freebytes(param_9);
  return;
}



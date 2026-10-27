// Function : class_free
// Namespace: 
// Entry    : 005365b0
// Prototype: undefined class_free(void * param_1)
// Body     : 005365b0 - 00536679


void class_free(void *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  pvVar1 = class_list;
  if (class_list == param_1) {
    puVar4 = &class_list;
  }
  else {
    do {
      pvVar5 = pvVar1;
      pvVar1 = *(void **)((long)pvVar5 + 0x88);
    } while (pvVar1 != param_1);
    puVar4 = (undefined8 *)((long)pvVar5 + 0x88);
  }
  *puVar4 = *(undefined8 *)((long)param_1 + 0x88);
  if (*(code **)((long)param_1 + 0x98) != (code *)0x0) {
    (**(code **)((long)param_1 + 0x98))(param_1);
  }
  puVar2 = PTR_pd_ninstances_00715d50;
  iVar3 = *(int *)PTR_pd_ninstances_00715d50;
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      lVar6 = *(long *)((long)param_1 + 0x20);
      pvVar1 = *(void **)(lVar6 + lVar7 * 8);
      if (pvVar1 != (void *)0x0) {
        freebytes(pvVar1);
        lVar6 = *(long *)((long)param_1 + 0x20);
        iVar3 = *(int *)puVar2;
      }
      *(undefined8 *)(lVar6 + lVar7 * 8) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar3);
  }
  freebytes(*(void **)((long)param_1 + 0x20));
  freebytes(param_1);
  return;
}


